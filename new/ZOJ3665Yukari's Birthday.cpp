#include<iostream>
#include<memory.h>
#include<fstream>
#include<string>
#include<algorithm>
#include<math.h>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<vector>
#include<stdio.h>
#include<stdlib.h>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>

using namespace std;

typedef __int64 INT;
typedef long long LL;
typedef long double real;
typedef vector<int> VI;

#define NUM 100
#define MOD 10007

/**************************************************************
    Problem: zoj3665Yukari's Birthday
    Ordering: 枚举 二分
    Follow: kuangbin
    Thought: 枚举r,然后用二分来求对应的k.由于题目上k>=2，所以r肯定不会很大，二分就可以了。
    Link: http://www.cnblogs.com/kuangbin/archive/2012/10/16/2725772.html
    Result:
****************************************************************/

INT solve(int r,INT sum)
{
    INT left=2;
    INT right=(INT)sqrt((double)sum);
    INT mid;
    INT temp;
    INT tt;
    while(left<=right)
    {
        mid=(left+right)/2;
        double mm=(pow(1.0*mid,r+1)-mid)/(mid-1);
        if(mm>((double)sum+1e-2))
        {
            right=mid-1;
            continue;
        }
        temp=0;
        tt=1;
        for(int i=0;i<r;i++)
        {
            tt*=mid;
            temp+=tt;
        }
        if(temp==sum)
            return mid;
        else if(temp<sum)
            left=mid+1;
        else
            right=mid-1;
    }
    return 0;
}

int main()
{
    freopen("new.in","r",stdin);

//    int T=0;
//
//    scanf("%d",&T);
//    while(T--)
    INT n;
    INT ans;
    INT ansk;
    int ansr;
    INT temp;
    while(scanf("%I64d",&n)!=EOF)
    {
        ans=n-1;
        ansr=1;
        ansk=n-1;

        for(int r=2;r<=40;r++)
        {
            temp=solve(r,n);
            if(temp==0)
                continue;
            if(r*temp<ans)
            {
                ans=r*temp;
                ansr=r;
                ansk=temp;
            }
            else if(r*temp==ans && r<ansr)
            {
                ansr=r;
                ansk=temp;
            }
        }
        for(int r=2;r<=40;r++)
        {
            temp=solve(r,n-1);
            if(temp==0)
                continue;
            if(r*temp<ans)
            {
                ans=r*temp;
                ansr=r;
                ansk=temp;
            }
            else if(r*temp==ans && r<ansr)
            {
                ansr=r;
                ansk=temp;
            }
        }
        printf("%d %I64d\n",ansr,ansk);
    }
	return 0;
}

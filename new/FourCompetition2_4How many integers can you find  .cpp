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


/**************************************************************
    Problem:
    Ordering:
    Thought:
    Result:
****************************************************************/

#define MOD 10007
#define NUM 100
#define MAXN 100

int a[11];

int euler(int n)
{
    int res=n;
	int i;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            res=res-res/i;
            while(n%i==0)
                n/=i;
        }
    }
    if(n>1)
        res=res-res/n;
    return res;
}

int main()
{
    freopen("new.in","r",stdin);

    int n,m;
    int minn;
    int ans;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        ans=0;

        for(int i=0;i<m;i++)
        {
            scanf("%d",&a[i]);
            minn=minn<a[i]?minn:a[i];
        }

        if(n<minn){ans+=minn-n;n=minn;}

        for(int i=n-1;i>=1;)
        {
            for(int j=0;j<m;j++)
            {
                if(i%a[j]!=0)
                {
 //cout<<"num="<<i<<endl;
                    ans++;
                    //i--;
                    continue;
                }
            }
        }
        printf("%d\n",ans);
    }
	return 0;
}

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

typedef long long LL;
typedef long double real;
typedef vector<int> VI;


/**************************************************************
    Problem:
    Ordering:
    Thought:
    Result:
****************************************************************/


#define INF 0x3f3f3f3f
#define MINN -0x3f3f3f3f
#define MAXN 0x3f3f3f3f
#define MOD 10007
#define NUM 10002

int a[NUM];

int main()
{
    freopen("hdu.in","r",stdin);
    //freopen("out.out","w",stdout);

    int n,num;
    int sum,b,e,maxn,temp;
    while(scanf("%d",&n) && n)
    {
        memset(a,0,sizeof(a));
        bool bl=false;
        sum=0;
        maxn=-INF;
        b=1;e=n;temp=1;
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>=0)bl=true;
            sum+=a[i];
            if(maxn<sum)
            {
                maxn=sum;
                b=temp;
                e=i;
            }
            if(sum<0)
            {
                sum=0;
                temp=i+1;
            }
        }
        if(bl)printf("%d %d %d\n",maxn,a[b],a[e]);
        else printf("0 %d %d\n",a[1],a[n]);
	}

	return 0;
}

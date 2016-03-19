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
#define MAXN 100000000
#define NUM 10000


struct Coin
{
    int p;
    int w;
}c[NUM+1];
int f[NUM+1];

int main()
{
    freopen("new.in","r",stdin);

    int T=0;
    int E,F;
    int N;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&E,&F);
        scanf("%d",&N);
        for(int i=0;i<N;i++)
            scanf("%d %d",&c[i].p,&c[i].w);

        int weight=F-E;
        for(int i=0;i<=weight;i++) f[i]=MAXN;
        f[0]=0;
        for(int i=0;i<N;i++)
        {
            for(int j=c[i].w;j<=weight;j++)
            {
                f[j]=min(f[j],f[j-c[i].w]+c[i].p);
            }
        }
        if(f[weight]==MAXN)printf("This is impossible.\n");
        else printf("The minimum amount of money in the piggy-bank is %d.\n",f[weight]);
    }

	return 0;
}

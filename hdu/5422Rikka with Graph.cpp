#include<iostream>
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
#define NUM 102

int g[NUM][NUM];

int main()
{
    freopen("hdu.in","r",stdin);
    //freopen("out.out","w",stdout);

    int n,m;
    int a,b;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        memset(g,INF,sizeof g);

        for(int i=0;i<m;i++)
        {
            scanf("%d%d",&a,&b);
            g[a][b]=g[b][a]=1;
        }
        if(g[1][n]==INF) printf("1 1\n",n);
        else printf("1 %d\n",n*(n-1)/2);
    }

	return 0;
}

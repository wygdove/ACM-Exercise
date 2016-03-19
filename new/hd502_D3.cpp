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
#define NUM 102

struct Sample
{
    int x,y;
    int d;
}g[NUM];
bool vis[NUM][NUM];

int cmp( const void *a ,const void *b)
{
	return (*(Sample *)a).d < (*(Sample *)b).d ? 1 : -1;
}

int main()
{
    freopen("new.in","r",stdin);
    //freopen("out.out","w",stdout);

    int n;
    while(scanf("%d",&n)!=EOF)
    {
        memset(g,0,sizeof(g));

        int cnt=1;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
        {
            scanf("%d",&g[cnt].d);
            g[cnt].x=i;g[cnt].y=j;
            cnt++;
        }
        qsort(g+1,n*n+1,sizeof(g[1]),cmp);
for(int i=1;i<=n*n;i++)printf("g[%d][%d]=%d\n",g[i].x,g[i].y,g[i].d);

        for(int i=1;i<=n*n;i++)
        {
            memset(vis,false,sizeof(vis));
            vis[g[i].x][g[i].y]=1;
        }
        printf("\n");

	}

	return 0;
}

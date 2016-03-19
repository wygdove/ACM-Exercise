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


#define INF 0x3f3f3f3f
#define MINN -0x3f3f3f3f
#define MAXN 0x3f3f3f3f
#define MOD 10007
#define NUM 1002

struct G
{
    int d;
    int p;
}g[NUM][NUM];

int low[NUM];
int lowcost[NUM];
bool vis[NUM];
int pre[NUM];

void Dijkstra(int n,int beg)
{
    for(int i=0; i<n; i++)
    {
        low[i]=INF;
        lowcost[i]=INF;
        vis[i]=false;
        pre[i]=-1;
    }
    low[beg]=0;
    lowcost[beg]=0;
    for(int j=0; j<n; j++)
    {
        int k=-1;
        int mind=INF;
        int minp=INF;
        for(int i=0; i<n; i++)
        {
            if(!vis[i] && (low[i]<mind || (low[i]==mind && lowcost[i]<minp)))
            {
                mind=low[i];
                minp=lowcost[i];
                k=i;
            }
        }
        if(k==-1)break;
        vis[k]=true;
        for(int i=0; i<n; i++)
        {
            if(!vis[i] && (low[i]>low[k]+g[k][i].d || (low[i]==low[k]+g[k][i].d && lowcost[i]>lowcost[k]+g[k][i].p)))
            {
                low[i]=low[k]+g[k][i].d;
                lowcost[i]=lowcost[k]+g[k][i].p;
                pre[i]=k;
            }
        }
    }
}

int main()
{
    freopen("hdu.in","r",stdin);

    int n,m;
    int a,b,dis,pri;
    int s,t;
    while(scanf("%d%d",&n,&m) && (n+m))
    {
        memset(g,INF,sizeof(g));

        for(int i=0;i<m;i++)
        {
            scanf("%d%d%d%d",&a,&b,&dis,&pri);
            if(g[a-1][b-1].d>=dis)
            {
                if(g[a-1][b-1].d==dis && g[a-1][b-1].p>pri)
                {
                    g[a-1][b-1].d=g[b-1][a-1].d=dis;
                    g[a-1][b-1].p=g[b-1][a-1].p=pri;
                }
                else if(g[a-1][b-1].d>dis)
                {
                    g[a-1][b-1].d=g[b-1][a-1].d=dis;
                    g[a-1][b-1].p=g[b-1][a-1].p=pri;
                }
            }
        }
        scanf("%d%d",&s,&t);
        Dijkstra(n,s-1);
        printf("%d %d\n",low[t-1],lowcost[t-1]);
    }

	return 0;
}


/**

hdu3790最短路径问题

Problem Description
给你n个点，m条无向边，每条边都有长度d和花费p，给你起点s终点t，要求输出起点到终点的最短距离及其花费，如果最短距离有多条路线，则输出花费最少的。


Input
输入n,m，点的编号是1~n,然后是m行，每行4个数 a,b,d,p，表示a和b之间有一条边，且其长度为d，花费为p。最后一行是两个数 s,t;起点s，终点。n和m为0时输入结束。
(1<n<=1000, 0<m<100000, s != t)


Output
输出 一行有两个数， 最短距离及其花费。


Sample Input

3 2
1 2 5 6
2 3 4 5
1 3
0 0


Sample Output

9 11
*/

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
#define NUM 1000010

/*
* 使用优先队列优化Dijkstra算法
* 复杂度O(ElogE)
* 注意对vector<Edge>E[NUM]进行初始化后加边
*/
struct qnode
{
    int v;
    int c;
    qnode(int _v=0,int _c=0):v(_v),c(_c) {}
    bool operator <(const qnode &r)const
    {
        return c>r.c;
    }
};
struct Edge
{
    int v,cost;
    Edge(int _v=0,int _cost=0):v(_v),cost(_cost) {}
};
vector<Edge>E[NUM];
bool vis[NUM];
int dist[NUM];
void Dijkstra(int n,int start)//点的编号从1开始
{
    memset(vis,false,sizeof(vis));
    for(int i=1; i<=n; i++)dist[i]=INF;
    priority_queue<qnode>que;
    while(!que.empty())que.pop();
    dist[start]=0;
    que.push(qnode(start,0));
    qnode tmp;
    while(!que.empty())
    {
        tmp=que.top();
        que.pop();
        int u=tmp.v;
        if(vis[u])continue;
        vis[u]=true;
        for(int i=0; i<E[u].size(); i++)
        {
            int v=E[tmp.v][i].v;
            int cost=E[u][i].cost;
            if(!vis[v]&&dist[v]>dist[u]+cost)
            {
                dist[v]=dist[u]+cost;
                que.push(qnode(v,dist[v]));
            }
        }
    }
}
void addedge(int u,int v,int w)
{
    E[u].push_back(Edge(v,w));
}

int main()
{
    freopen("hdu.in","r",stdin);
    //freopen("hdu.out","w",stdout);

    int n,m;
    int a,b,c;
    while(scanf("%d%d",&n,&m) && (n+m))
    {
        for(int i=1;i<=NUM;i++) E[i].clear();

        for(int i=0;i<m;i++)
        {
            scanf("%d%d%d",&a,&b,&c);
            addedge(a,b,c);
            addedge(b,a,c);
        }
        Dijkstra(n,1);
        printf("%d\n",dist[n]);
    }

    return 0;
}

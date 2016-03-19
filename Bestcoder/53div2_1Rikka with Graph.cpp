//#include<iostream>
//#include<fstream>
//#include<string>
//#include<algorithm>
//#include<math.h>
//#include<stack>
//#include<queue>
//#include<set>
//#include<map>
//#include<vector>
//#include<stdio.h>
//#include<stdlib.h>
//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//#include<cmath>
//
//using namespace std;
//
//typedef long long LL;
//typedef long double real;
//typedef vector<int> VI;
//
//
///**************************************************************
//    Problem:
//    Ordering:
//    Thought:
//    Result:
//****************************************************************/
//
//
//#define INF 0x3f3f3f3f
//#define MINN -0x3f3f3f3f
//#define MAXN 0x3f3f3f3f
//#define MOD 10007
//#define NUM 108
//
//
//int n,m;
//
//struct qnode
//{
//    int v;
//    int c;
//    qnode(int _v=0,int _c=0):v(_v),c(_c) {}
//    bool operator <(const qnode &r)const
//    {
//        return c>r.c;
//    }
//};
//struct Edge
//{
//    int v,cost;
//    Edge(int _v=0,int _cost=0):v(_v),cost(_cost) {}
//};
//vector<Edge>E[NUM];
//bool vis[NUM];
//int dist[NUM];
//void Dijkstra(int start)
//{
//    memset(vis,false,sizeof(vis));
//    for(int i=1; i<=n; i++)dist[i]=INF;
//    priority_queue<qnode>que;
//    while(!que.empty())que.pop();
//    dist[start]=0;
//    que.push(qnode(start,0));
//    qnode tmp;
//    while(!que.empty())
//    {
//        tmp=que.top();
//        que.pop();
//        int u=tmp.v;
//        if(vis[u])continue;
//        vis[u]=true;
//        for(int i=0; i<E[u].size(); i++)
//        {
//            int v=E[tmp.v][i].v;
//            int cost=E[u][i].cost;
//            if(!vis[v]&&dist[v]>dist[u]+cost)
//            {
//                dist[v]=dist[u]+cost;
//                que.push(qnode(v,dist[v]));
//            }
//        }
//    }
//}
//void addedge(int u,int v,int w)
//{
//    E[u].push_back(Edge(v,w));
//}
//
///*
//* 使用优先队列优化Dijkstra算法
//* 复杂度O(ElogE)
//* addedge(start,end,value);
//* dist初始化INF
//* 结点从1到n
//* for(int i=1;i<=NUM;i++) E[i].clear();
//* 注意对vector<Edge>E[NUM]进行初始化后加边
//*/
//
//map<int,int> mp;
//map<int,int>::iterator it;
//
//int main()
//{
//    freopen("bc.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//
//    int u,v;
//    int ansd,ansx;
//    while(scanf("%d%d",&n,&m)!=EOF)
//    {
//        mp.clear();
//        for(int i=1;i<=NUM;i++) E[i].clear();
//        memset(dist,INF,sizeof dist);
//
//        for(int i=0;i<m;i++)
//        {
//            scanf("%d%d",&u,&v);
//            addedge(u,v,1);addedge(v,u,1);
//        }
//for(int i=1;i<=n;i++){for(int j=1;j<=n;j++){printf("%d ",E[i][j].cost);}printf("\n");}
//        u=0;v=0;
//        for(int i=1;i<=n;i++)
//        {
//            for(int j=1;i!=j,j<=n;j++)
//            {
//                if(E[i][j].cost!=1)
//                {
//                    addedge(u,v,0);
//                    addedge(i,j,1);
//                    u=i;v=j;
//                }
//                else
//                {
//                    Dijkstra(1);
//                    if(dist[n]==INF)continue;
//                    if(mp[dist[n]]==0) mp[dist[n]]++;
//printf("mp[%d]=%d\n",dist[n],mp[dist[n]]);
//                }
//            }
//        }
//        ansd=INF;ansx=0;
//        for(it=mp.begin();it!=mp.end();it++)
//        {
////printf("mp[%d]=%d\n",(*it).first,(*it).second);
//            if(ansd>(*it).first)
//            {
//                ansd=(*it).first;
//                ansx=(*it).second;
//            }
//        }
//        if(ansd==INF&&ansx==0)
//        {
//            ansd=E[1][n].cost;
//            ansx=0;
//        }
//        printf("%d %d\n",ansd,ansx);
//    }
//
//	return 0;
//}

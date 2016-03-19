//#include<iostream>
//#include<memory.h>
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
//typedef __int64 INT;
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
//#define INF 0x3f3f3f3f
//#define MINN -0x3f3f3f3f
//#define MAXN 0x3f3f3f3f
//#define MOD 10007
//#define NUM 1002
//
//int G[NUM][NUM];
//int dis[NUM];
//bool vis[NUM];
//int n;
//
//void Dijkstra()
//{
//    for(int i=1;i<=n;i++)
//    {
//        dis[i]=G[0][i];
//        vis[i]=0;
//    }
//    for(int i=1;i<=n;i++)
//    {
//        int temp=INF;
//        int k;
//        for(int j=1;j<=n;j++)
//            if(!vis[j] && temp>dis[j])
//                temp=dis[k=j];
//        vis[k]=1;
//        for(int j=1;j<=n;j++)
//            if(!vis[j] && dis[j]>dis[k]+G[k][j])
//                dis[j]=dis[k]+G[k][j];
//    }
//}
//
//int main()
//{
//    freopen("hdu.in","r",stdin);
//
//    int T,S,D;
//    int a,b,c;
//    while(cin>>T>>S>>D)
//    {
//        memset(G,INF,sizeof(G));
////        for(int i=0;i<NUM;i++) for(int j=0;j<NUM;j++) G[i][j]=INF;
//        n=0;
//
//        for(int i=1;i<=T;i++)
//        {
//            scanf("%d%d%d",&a,&b,&c);
//            if(c<G[a][b]) G[a][b]=G[b][a]=c;
//            n=n>a?n:a;n=n>b?n:b;
//        }
//        n++;
//        for(int i=0;i<S;i++)
//        {
//            scanf("%d",&a);
//            G[a][0]=G[0][a]=0;
//        }
//        for(int i=0;i<D;i++)
//        {
//            scanf("%d",&a);
//            G[a][n]=G[n][a]=0;
//        }
//
//        Dijkstra();
//
//        for(int i=0;i<=n;i++)
//            printf("%d ",dis[i]);
//        printf("\n");
//    }
//    return 0;
//}
//
//
//
//////Dijkstra单源最短路，邻接矩阵形式
//////权值必须是非负
/////*
////* 单源最短路径，Dijkstra算法，邻接矩阵形式，复杂度为O(n^2)
////* 求出源beg到所有点的最短路径，传入图的顶点数，和邻接矩阵cost[][]
////* 返回各点的最短路径lowcost[], 路径pre[].pre[i]记录beg到i路径上的父结点，pre[beg]=-1
////* 可更改路径权类型，但是权值必须为非负
////*
////*/
////
////int cost[NUM][NUM];
////int lowcost[NUM];
////bool vis[NUM];
////int pre[NUM];
////
////int dis[NUM];
////
////void Dijkstra(int cost[][NUM],int lowcost[],int n,int beg)
////{
////    for(int i=0; i<=n; i++)
////    {
////        lowcost[i]=INF;
////        vis[i]=false;
////        pre[i]=-1;
////    }
////    lowcost[beg]=0;
////    for(int j=1; j<=n; j++)
////    {
////        int k=-1;
////        int Min=INF;
////        for(int i=0; i<n; i++)
////        {
////            if(!vis[i]&&lowcost[i]<Min)
////            {
////                Min=lowcost[i];
////                k=i;
////            }
////        }
////        if(k==-1)break;
////        vis[k]=true;
////        for(int i=1; i<=n; i++)
////        {
////            if(!vis[i]&&lowcost[k]+cost[k][i]<lowcost[i])
////            {
////                lowcost[i]=lowcost[k]+cost[k][i];
////                pre[i]=k;
////            }
////        }
////    }
////}
////
////int main()
////{
////    freopen("hdu.in","r",stdin);
////    //freopen("hdu.out","w",stdout);
////
////    int n,T,S,D;
////    int a,b,t;
////    int temp;
////    while(cin>>T>>S>>D)
////    {
////        n=0;
////        for(int i=1; i<=T; i++)
////        {
////            scanf("%d%d%d",&a,&b,&t);
////            cost[a+1][b+1]=t;
////            cost[b+1][a+1]=t;
////            n=n>a?n:a;
////            n=n>b?n:b;
////        }
////        n+=1;
////        for(int i=0; i<S; i++)
////        {
////            scanf("%d",&temp);
////            cost[1][temp+1]=0;
////            cost[temp+1][1]=0;
////        }
////        for(int i=0; i<D; i++)
////            scanf("%d",&dis[i]);
////for(int i=1; i<=n; i++){for(int j=1; j<=n; j++){printf("%d ",cost[i][j]);}printf("\n");}
////        Dijkstra(cost,lowcost,n,1);
////printf("\n");for(int i=1;i<=n;i++) printf("%d ",lowcost[i]);printf("\n");
////    }
////
////    return 0;
////}

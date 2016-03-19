//#pragma comment(linker, "/STACK:1024000000,1024000000")
//#include<iostream>
//#include<memory.h>
//#include<fstream>
////#include<string>
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
////#include<cstring>
//#include<cmath>
//
//using namespace std;
//
////for DS
////函数结果状态代码
//#define TRUE 1
//#define FALSE 0
//#define OK 1
//#define ERROR 0
//#define INFEASIBLE -1
//#define OVERFLOW -2
////Status是函数的类型，其值是函数结果状态代码
//typedef int Status;
//typedef int ElemType;
//
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
//    Author: wygdove
//****************************************************************/
//
//
//#define INF 0x3f3f3f3f
//#define MINN -0x3f3f3f3f
//#define MAXN 0x3f3f3f3f
//#define MOD 10007
//#define NUM 1024
//
//int g[NUM+1];
//
////并查集的实现
//int parent[NUM+1],rankt[NUM+1];
//
//void init()  //初始化
//{
//	int i;
//	for(i=0;i<=NUM;i++)
//	{
//		parent[i]=i;
//		rankt[i]=1;
//	}
//}
//int findt(int x) //查找
//{
//	if(x!=parent[x])
//		parent[x]=findt(parent[x]);
//	return parent[x];
//}
//void uniont(int x,int y) //合并
//{
//	x=findt(x),y=findt(y);
//	if(x!=y)
//        parent[x]=y;
//}
//
//int main()
//{
//    freopen("new.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int n,m;
//    int a,b;
//    while(scanf("%d",&n) && n)
//    {
//        scanf("%d",&m);
//        init();
//        memset(g,0,sizeof(g));
//        for(int i=0;i<m;i++)
//        {
//            scanf("%d%d",&a,&b);
//            g[a]++;g[b]++;
//            uniont(a,b);
//        }
//        bool bl=true;
//        int x=findt(1);
//        for(int i=1;i<=n;i++)
//            if(g[i]%2!=0 || findt(i)!=x)
//            {
//                bl=false;break;
//            }
//        if(bl) printf("1\n");
//        else printf("0\n");
//
//    }
//
//    return 0;
//}
//
//
//
//
//
////
///////*==================================================*\
//////| 欧拉路径O(E)
//////| INIT: adj[][]置为图的邻接表; cnt[a]为a点的邻接点个数;
//////| CALL: elpath(0); 注意:不要有自向边
//////\*==================================================*/
//////int adj[V][V], idx[V][V], cnt[V], stk[V], top;
//////int path(int v)
//////{
//////    for (int w ; cnt[v] > 0; v = w)
//////    {
//////        stk[ top++ ] = v;
//////        w = adj[v][ --cnt[v] ];
//////        adj[w][ idx[w][v] ] = adj[w][ --cnt[w] ];
//////// 处理的是无向图—-边是双向的，删除v->w后，还要处理删除w->v
//////    }
//////    return v;
//////}
//////bool elpath (int b, int n)  // begin from b
//////{
//////    int i, j;
//////    for (i = 0; i < n; ++i) // vertex: 0 ~ n-1
//////        for (j = 0; j < cnt[i]; ++j)
//////            idx[i][ adj[i][j] ] = j;
////////    printf("%d", b);
//////    bool bl=false;
//////    for (top = 0; path(b) == b && top != 0; )
//////    {
//////        b = stk[ --top ];
////////        printf("-%d", b);
//////        bl=true;
//////    }
////////    printf("\n");
//////    return bl;
//////}
////
////int g[NUM];
////
////int cost[NUM][NUM];
////bool vis[NUM];
////int lowc[NUM];
////int Prim(int cost[][NUM],int n)//点是0~n-1
////{
////int ans=0;
////memset(vis,false,sizeof(vis));
////vis[0]=true;
////for(int i=1;i<n;i++)lowc[i]=cost[0][i];
////for(int i=1;i<n;i++)
////{
////int minc=INF;
////int p=-1;
////for(int j=0;j<n;j++)
////if(!vis[j]&&minc>lowc[j])
////{
////minc=lowc[j];
////p=j;
////}
////if(minc==INF)return -1;//原图不连通
////ans+=minc;
////vis[p]=true;
////for(int j=0;j<n;j++)
////if(!vis[j]&&lowc[j]>cost[p][j])
////lowc[j]=cost[p][j];
////}
////return ans;
////}
////
////int main()
////{
////    freopen("new.in","r",stdin);
////    //freopen("out.out","w",stdout);
////
////    int n,m;
////    int a,b;
////    while(scanf("%d",&n) && n)
////    {
////        scanf("%d",&m);
////        for(int i=0;i<m;i++)
////        {
////            scanf("%d%d",&a,&b);
////            g[a-1]++;g[b-1]++;
////            cost[a-1][b-1]=1;
////        }
////        bool bl=true;
////        for(int i=0;i<n;i++)
////            if(g[i]%2!=0)bl=false;
////        if(Prim(cost,n)==-1)bl=false;
////        if(bl) printf("1\n");
////        else printf("0\n");
////
////    }
////
////    return 0;
////}

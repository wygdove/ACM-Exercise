//#pragma comment(linker, "/STACK:1024000000,1024000000")
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
//
//#define INF 0x3f3f3f3f
//#define MINN -0x3f3f3f3f
//#define MAXN 0x3f3f3f3f
//#define MOD 10007
//#define NUM 1502
////
////int n;
////int g[NUM][NUM];
////int linker[NUM];
////bool used[NUM];
////
////bool dfs(int i)
////{
////    for(int j = 0; j < n; j++)
////    {
////        if(g[i][j] && !used[j])
////        {
////            used[j] = true;
////            if(linker[j] == -1 || dfs(linker[j]))
////            {
////                linker[j] = i;
////                return true;
////            }
////        }
////    }
////    return false;
////}
////
////int hungary()
////{
////    int res = 0;
////    memset(linker,-1,sizeof(linker));
////    for(int i = 0; i < n; i++)
////    {
////        memset(used,false,sizeof(used));
////        if(dfs(i))res++;
////    }
////    return res;
////}
////
////
////int main()
////{
////    freopen("new.in","r",stdin);
////    //freopen("hdu.out","w",stdout);
////
////    int s,t,num;
////    while(scanf("%d",&n)!=EOF)
////    {
////        memset(g,0,sizeof(g));
////
////        for(int i=0;i<n;i++)
////        {
////            scanf("%d:(%d)",&s,&num);
////            for(int j=0;j<num;j++)
////            {
////                scanf("%d",&t);
////                g[s][t]=g[t][s]=1;
////            }
////        }
//////for(int i=0;i<n;i++){for(int j=0;j<n;j++)printf("%d ",g[i][j]);printf("\n");}
////
////        printf("%d\n",hungary()/2);
////    }
////
////    return 0;
////}
//
//struct Edge
//{
//    int u,v,w;
//    int next;
//}edge[NUM];
//int head[NUM];
//int cnt;
//int n;
//int linker[NUM];
//bool used[NUM];
//
//bool dfs(int u)
//{
//    for(int i = head[u]; i != -1; i = edge[i].next)
//    {
//        int v = edge[i].v;
//        if(!used[v])
//        {
//            used[v] = true;
//            if(linker[v] == -1 || dfs(linker[v]))
//            {
//                linker[v] = u;
//                return true;
//            }
//        }
//    }
//    return false;
//}
//int hungary()
//{
//    int res = 0;
//    memset(linker,-1,sizeof(linker));
//    for(int u = 0; u < n; u++)
//    {
//        memset(used,0,sizeof(used));
//        if(dfs(u))
//            res++;
//    }
//    return res;
//}
//
//void add(Edge x)
//{
//    edge[cnt].u = x.u;
//    edge[cnt].v = x.v;
//    edge[cnt].w = x.w;
//    edge[cnt].next = head[x.u];
//    head[x.u] = cnt++;
//
//    edge[cnt].v = x.u;
//    edge[cnt].u = x.v;
//    edge[cnt].w = x.w;
//    edge[cnt].next = head[x.v];
//    head[x.v] = cnt++;
//}
//
//int main()
//{
//    freopen("new.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int s,t,num;
//    while(scanf("%d",&n)!=EOF)
//    {
//        memset(edge,0,sizeof(edge));
//        memset(head,-1,sizeof(head));
//        Edge tmp;
//        cnt = 0;
//        for(int i=0;i<n;i++)
//        {
//            scanf("%d:(%d)",&s,&num);
//            for(int j=0;j<num;j++)
//            {
//                scanf("%d",&t);
//                tmp.u=s;
//                tmp.v=t;
//                add(tmp);
//            }
//        }
//        printf("%d\n",hungary()/2);
//    }
//    return 0;
//}

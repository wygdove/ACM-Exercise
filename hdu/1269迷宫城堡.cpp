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
//#define NUM 100
//
///*
//* Tarjan算法
//* 复杂度O(N+M)
//*/
//const int MAXN = 10002;//点数
//const int MAXM = 100002;//边数
//
//struct Edge
//{
//    int to,next;
//} edge[MAXM];
//
//int head[MAXN],tot;
//int Low[MAXN],DFN[MAXN],Stack[MAXN],Belong[MAXN];//Belong数组的值是1~scc
//int Index,top;
//int scc;//强连通分量的个数
//bool Instack[MAXN];
//int num[MAXN];//各个强连通分量包含点的个数，数组编号1~scc
//num数组不一定需要，结合实际情况
//
//void addedge(int u,int v)
//{
//    edge[tot].to = v;
//    edge[tot].next = head[u];
//    head[u] = tot++;
//}
//
//void Tarjan(int u)
//{
//    int v;
//    Low[u] = DFN[u] = ++Index;
//    Stack[top++] = u;
//    Instack[u] = true;
//    for(int i = head[u]; i != -1; i = edge[i].next)
//    {
//        v = edge[i].to;
//        if( !DFN[v] )
//        {
//            Tarjan(v);
//            if( Low[u] > Low[v] )Low[u] = Low[v];
//        }
//        else if(Instack[v] && Low[u] > DFN[v])
//            Low[u] = DFN[v];
//    }
//    if(Low[u] == DFN[u])
//    {
//        scc++;
//        do
//        {
//            v = Stack[--top];
//            Instack[v] = false;
//            Belong[v] = scc;
//            num[scc]++;
//        }
//        while( v != u);
//    }
//}
//
//void solve(int N)
//{
//    memset(DFN,0,sizeof(DFN));
//    memset(Instack,false,sizeof(Instack));
//    memset(num,0,sizeof(num));
//    Index = scc = top = 0;
//    for(int i = 1; i <= N; i++)
//        if(!DFN[i])
//            Tarjan(i);
//}
//
//void init()
//{
//    tot = 0;
//    memset(head,-1,sizeof(head));
//}
//
//
//int main()
//{
//    freopen("hdu.in","r",stdin);
//    freopen("hdu.out","w",stdout);
//
//    int n,m;
//    int a,b;
//    while(scanf("%d%d",&n,&m) && n && m)
//    {
//        for(int i=0; i<m; i++)
//        {
//            scanf("%d%d",&a,&b);
//        }
//    }
//
//
//    return 0;
//}

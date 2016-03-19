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
//#define NUM 102
//
//int g[NUM][NUM];
//int lowcost[NUM];
//bool vis[NUM];
//int pre[NUM];
//
//int pown[NUM];
//
//void Dijkstra(int g[][NUM],int lowcost[],int n,int beg)
//{
//    for(int i=0; i<n; i++)
//    {
//        lowcost[i]=INF;
//        vis[i]=false;
//        pre[i]=-1;
//    }
//    lowcost[beg]=0;
//    for(int j=0; j<n; j++)
//    {
//        int k=-1;
//        int Min=INF;
//        for(int i=0; i<n; i++)
//            if(!vis[i]&&lowcost[i]<Min)
//            {
//                Min=lowcost[i];
//                k=i;
//            }
//        if(k==-1)break;
//        vis[k]=true;
//        for(int i=0; i<n; i++)
//            if(!vis[i]&&lowcost[k]+g[k][i]<lowcost[i])
//            {
//                lowcost[i]=lowcost[k]+g[k][i];
//                pre[i]=k;
//            }
//    }
//}
//
//int main()
//{
//    freopen("hdu.in","r",stdin);
//    //freopen("hdu.out","w",stdout);
//
//    int T=0;
//    int n,m;
//    int st,ed,dis;
//    scanf("%d",&T);
//    while(T--)
//    {
//        memset(g,INF,sizeof(g));
//        memset(pown,0,sizeof(pown));
//
//        scanf("%d%d",&n,&m);
//        for(int i=0;i<m;i++)
//        {
//            scanf("%d%d%d",&st,&ed,&dis);
//            if(g[st][ed]>dis) g[st][ed]=g[ed][st]=dis;
//        }
//        for(int i=1;i<=n;i++)
//            scanf("%d",&pown[i]);
//
//        int ans=0;
//        Dijkstra(g,lowcost,n+1,0);
//        /**单纯求到各个点的最短路径最大值WrongAnswer
//        * 要用0-1背包
//        for(int i=0;i<=n;i++)
//        {
//            ans=ans>lowcost[i]?ans:lowcost[i];
//        }
//        if(ans==INF) printf("impossible\n");
//        else printf("%d\n",ans);
//        */
//    }
//
//	return 0;
//}

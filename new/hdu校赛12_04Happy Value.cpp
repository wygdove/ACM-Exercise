//#pragma comment(linker, "/STACK:1024000000,1024000000")
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
//#define mems0(s)  memset(s,0,sizeof(s))
//#define mems_1(s) memset(s,-1,sizeof(s))
//#define memsINF(s) memset(s,INF,sizeof(s))
//#define memsch(ch) memset(ch,'\0',sizeof(ch))
//
//#define lson l,m,rt<<1
//#define rson m+1,r,rt<<1|1
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
//const double eps = 1e-9;
//const double pi=acos(-1.0);
//#define INF 0x3f3f3f3f
//#define MINN -0x3f3f3f3f
//#define MAXN 0x3f3f3f3f
//#define MOD 10007
//#define NUM 108
//
//
///*
//* Prim求MST
//* 传参图邻接矩阵g[][]，标号从0开始，0~n-1
//* 返回最小生成树的权值，返回-1表示原图不连通
//* 初始化memset(g,INF,sizeof(g));
//*/
//bool vis[NUM];
//int lowc[NUM];
//int g[NUM][NUM];
//
//int Prim(int g[NUM][NUM],int n)//点是0~n-1
//{
//    int ans=0;
//    memset(vis,false,sizeof(vis));
//
//    vis[0]=true;
//    for(int i=1; i<n; i++)
//        lowc[i]=g[0][i];
//    for(int i=1; i<n; i++)
//    {
//        int minc=-INF;
//        int p=-1;
//        for(int j=0; j<n; j++)
//        {
//            if(!vis[j]&&minc<=lowc[j])
//            {
//                minc=lowc[j];
//                p=j;
//            }
//        }
//
//        if(minc==-INF) return -1;//原图不连通
//        ans+=minc;
//        vis[p]=true;
//        for(int j=0; j<n; j++)
//            if(!vis[j]&&lowc[j]<=g[p][j])
//                lowc[j]=g[p][j];
//    }
//    return ans;
//}
//
//
//int main()
//{
//    cin.sync_with_stdio(false);
//    cout.sync_with_stdio(false);
//
//    freopen("new.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int n;
//    while(cin>>n)
//    {
//        mems0(g);
//
//        for(int i=0;i<n;i++)
//            for(int j=0;j<n;j++)
//                cin>>g[i][j];
//        int ans=Prim(g,n);
//        printf("%d\n",ans);
//    }
//
//    fclose(stdin);
//    fclose(stdout);
//	return 0;
//}

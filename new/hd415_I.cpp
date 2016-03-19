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
//for DS
//函数结果状态代码
//#define TRUE 1
//#define FALSE 0
//#define OK 1
//#define ERROR 0
//#define INFEASIBLE -1
//#define OVERFLOW -2
//Status是函数的类型，其值是函数结果状态代码
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
//#define NUM 102
//
//
//int c[NUM];
//int s[NUM];
//int g[NUM][NUM];
//
//int main()
//{
//    freopen("new.in","r",stdin);
//    freopen("out.out","w",stdout);
//
//    int W=0;
//    int N,M,T,S,E,U,V,L;
//    scanf("%d",&W);
//    for(int cnt=1;cnt<=W;cnt++)
//    {
//        memset(c,0,sizeof(c));
//        memset(s,0,sizeof(s));
//        memset(g,INF,sizeof(g));
//
//        scanf("%d%d%d%d%d",&N,&M,&T,&S,&E);
//        for(int i=0;i<N;i++) scanf("%d",&c[i]);
//        for(int i=0;i<N;i++) scanf("%d",&s[i]);
//        for(int i=0;i<N;i++)
//        {
//            scanf("%d%d%d",&U,&V,&L);
//            if(g[U][V]>L) g[U][V]=g[V][U]=L;
//        }
//
//        printf("Case #%d:\n",cnt);
//    }
//
//	return 0;
//}

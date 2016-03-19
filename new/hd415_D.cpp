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
//#define NUM 102
//
//struct Sample
//{
//    int a,b;
//}s[NUM];
//int f[100002];
//
//int main()
//{
//    freopen("new.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int n,m;
//    while(scanf("%d",&n)!=EOF)
//    {
//        memset(s,0,sizeof(s));
//        memset(f,0,sizeof(f));
//
//        for(int i=0;i<n;i++)
//            scanf("%d%d",&s[i].a,&s[i].b);
//        scanf("%d",&m);
//        for(int i=0;i<n;i++)
//            for(int j=s[i].b;j<=m;j++)
//                f[j]=max(f[j],f[j-s[i].b]+s[i].a);
//
//        printf("%d\n",f[m]);
//    }
//
//	return 0;
//}

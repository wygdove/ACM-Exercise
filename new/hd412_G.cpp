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
//#define NUM 1000002
//
//
//
//int main()
//{
//    freopen("new.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int n,m;
//    map<int,int> ma;
//    while(scanf("%d%d",&n,&m)!=EOF)
//    {
//        int t;
//        for(int i=1;i<=n;i++)
//        {
//            scanf("%d",&t);
//            ma[t]++;
//        }
//
//        int ans=0;
//        for(int i=0;i<m;i++)
//        {
//            scanf("%d",&t);
//            if(t>=1 && t<=n)
//                if(ma.size()!=0)
//                {
//                    printf("%d\n",ma[t]);
//                    ma[t]=0;
//                }
//            else printf("0\n");
//        }
//    }
//
//	return 0;
//}

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
//#define NUM 100
//
//int com(int n, int r){/// return C(n,r)
//	if(n-r>r) r=n-r; ///C(n, r)=C(n,n-r)
//	int i,j,s=1;
//	for(i=0,j=1;i<r;++i) {
//		s*=(n-i);
//		for(;j<=r&&s%j==0;++j) s/=j;
//	}
//	return s;
//}
//
//
//int main()
//{
//    freopen("ds.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int T=0;
//    int n,ans;
//    while(scanf("%d",&T) && T)
//    {
//        for(int cnt=1;cnt<=T;cnt++)
//        {
//            ans=0;
//            scanf("%d",&n);
//            for(int i=0;i<=n;i+=2)
//            {
//                for(int j=0;j<=n-i;j+=2)
//                {
//
//                }
//            }
//
//            printf("Case %d: %d\n",cnt,ans);
//        }
//        printf("\n");
//    }
//
//	return 0;
//}

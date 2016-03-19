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
//int gcd(int a,int b)
//{
//    int t;
//    while(b!=0)
//    {
//        t=a%b;a=b;b=t;
//    }
//    return a;
//}
//
//int main()
//{
//    freopen("new.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int T=0;
//    scanf("%d",&T);
//    int p,e,i,d;
//    int cnt=1;
//    int ans;
//    int x=21252,a=5544,b=14421,c=1288;
//    int t1,t2,t3;
//    while(scanf("%d%d%d%d",&p,&e,&i,&d) && (p!=-1 && e!=-1 && i!=-1 && d!=-1))
//    {
//        ans=0;
//        ans=a*p+b*e+c*i-d+x;
//        ans%=x;
//        if(ans==0)ans=x;
////printf("%d\n",ans);
//        printf("Case %d: the next triple peak occurs in %d days.\n",cnt++,ans);
//    }
//	return 0;
//}

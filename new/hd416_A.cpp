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
//int n,m;
//int a[NUM],b[NUM],ne[NUM];
//void getNext()
//{
//    memset(ne,-1,sizeof(ne));
//
//	int i=0,j=-1;
//	ne[0]=-1;
//	while(i<m)
//	{
//		if(j==-1 || b[i]==b[j])
//		{
//			i++;j++;
//			if(b[i]!=b[j]) ne[i]=j;
//			else ne[i]=ne[j];
//		}
//		else j=ne[j];
//	}
//}
//int match()
//{
//	int i=0,j=0;
//	while(i<n)
//	{
//		if(j==-1 || a[i]==b[j])
//		{
//			i++;j++;
//		}
//		else j=ne[j];
//		if(j==m) return i-m+1;
//	}
//	return -1;
//}
//
//int main()
//{
//    freopen("new.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int T=0;
//    scanf("%d",&T);
//    while(T--)
//    {
//        memset(a,-1,sizeof(a));
//        memset(b,-1,sizeof(b));
//
//        scanf("%d%d",&n,&m);
//        for(int i=0;i<n;i++) scanf("%d",&a[i]);
//        for(int i=0;i<m;i++) scanf("%d",&b[i]);
//        getNext();
//        printf("%d\n",match());
//    }
//
//	return 0;
//}

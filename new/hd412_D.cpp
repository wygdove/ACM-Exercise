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
////�������״̬����
//#define TRUE 1
//#define FALSE 0
//#define OK 1
//#define ERROR 0
//#define INFEASIBLE -1
//#define OVERFLOW -2
////Status�Ǻ��������ͣ���ֵ�Ǻ������״̬����
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
//int a[NUM][NUM];
//
//int Max(int a,int b){return a>b?a:b;}
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
//        int n;
//        scanf("%d",&n);
//        for(int i=0;i<=n;i++)for(int j=0;j<=n;j++)a[i][j]=0;
//        for(int i=1;i<=n;i++)
//            for(int j=1;j<=i;j++)
//                scanf("%d",&a[i][j]);
//        for(int i=n-1;i>=1;i--)
//            for(int j=i;j>=1;j--)
//                a[i][j]+=Max(a[i+1][j],a[i+1][j+1]);
//       printf("%d\n",a[1][1]);
//    }
//
//	return 0;
//}

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
//int g[NUM][NUM];
//
//int main()
//{
//    freopen("new.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int n;
//    while(scanf("%d",&n)!=EOF)
//    {
//        memset(g,0,sizeof(g));
//
//        for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) scanf("%d",&g[i][j]);
//
//        int ans=-INF;
//        for(int i=1;i<=n;i++)
//            for(int j=1;j<=n;j++)
//            {
//                g[i][j]+=g[i-1][j]+g[i][j-1]-g[i-1][j-1];
//                for(int k=0;k<=i;k++)
//                    for(int l=0;l<=j;l++)
//                        ans=max(ans,g[i][j]-g[i][l]-g[k][j]+g[k][l]);
//            }
//        printf("%d\n",ans);
//    }
//
//	return 0;
//}

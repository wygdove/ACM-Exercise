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
//
//int main()
//{
//    freopen("new.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int n;
//    int s1,s2;
//    while(scanf("%d",&n)!=EOF)
//    {
//        memset(g,0,sizeof(g));
//        s1=0;s2=0;
//
//        for(int i=0;i<n;i++)
//            for(int j=0;j<n;j++)
//                scanf("%d",&g[i][j]);
//
////for(int i=0;i<n;i++)for(int j=0;j<n;j++)printf("%d\n",g[i][j]);
////
////        int i1,i2,j1,j2;
////        for(i1=0,i2=1;i1<n,i2<n;i1+=2,i2+=2)
////        {
////            for(j1=0,j2=1;j1<n,j2<n;j1+=2,j2+=2);
////            {
////                s1+=g[i1][j1];
////                s2+=g[i2][j2];
////printf("g[%d][%d]=%d g[%d][%d]=%d\n",i1,j1,g[i1][j1],i2,j2,g[i2][j2]);
////printf("s1=%d s2=%d\n",s1,s2);
////            }
////        }
////        for(int i=0;i<n;i+=2)for(int j=0;j<n;j+=2)
////        {
////            s1+=g[i][j];
////printf("g[%d][%d]=%d\n",i,j,g[i][j]);
////        }
////
////        for(int i=1;i<n;i+=2)for(int j=1;j<n;j+=2)
////        {
////            s2+=g[i][j];
////printf("g[%d][%d]=%d\n",i,j,g[i][j]);
////        }
////printf("s1=%d s2=%d\n",s1,s2);
////        printf("%d\n",s1>s2?s1:s2);
//
//
//
//	}
//
//	return 0;
//}

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
//int g[NUM];
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
//        for(int i=1;i<=n*n;i++)
//            scanf("%d",&g[i]);
//
//            for(int i=1;i<=n*n;i++)
//            {
//                if(i%2==0) s1+=g[i];
//                else s2+=g[i];
////printf("s1=%d s2=%d\n",s1,s2);
//            }
//
////        if(n%2==0)
////        {
////            for(int i=1;i<=n*n;i++)
////            {
////                if(i%2==0) s1+=g[i];
////                else s2+=g[i];
//////printf("s1=%d s2=%d\n",s1,s2);
////            }
////        }
////        else
////        {
//////            for(int i=1;i<=n*n;i++)
//////            {
//////                if(i%n==1 && (i/n)%2==0)
//////                {
//////                    if(i%2==0) s1+=g[i];
//////                    else s2+=g[i];
//////                }
//////                else if(i%n==1 && (i/n)%2==1)
//////                {
//////                    if(i%2==0) s2+=g[i];
//////                    else s1+=g[i];
//////                }
////            for(int i=1;i<=n*n;i++)
////            {
////
////            }
//// printf("s1=%d s2=%d\n",s1,s2);
////
////        }
//
//        printf("%d\n",s1>s2?s1:s2);
//	}
//
//	return 0;
//}

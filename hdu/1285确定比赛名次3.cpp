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
//****************************************************************/
//
//
//#define INF 0x3f3f3f3f
//#define MINN -0x3f3f3f3f
//#define MAXN 0x3f3f3f3f
//#define MOD 10007
//#define NUM 502
//
//int g[NUM][NUM];
//int in[NUM];
//
//int main()
//{
//    freopen("hdu.in","r",stdin);
//    //freopen("hdu.out","w",stdout);
//
//    int n,m;
//    int s,t;
//    while(cin>>n>>m)
//    {
//        memset(g,0,sizeof(g));
//
//        for(int i=0;i<m;i++)
//        {
//            scanf("%d%d",&s,&t);
//            g[s][t]++;
//            in[t]++;
//        }
//
//        for(int k=1;k<=n;k++)
//        for(int i=1;i<=n;i++)
//        {
// //for(int i=1;i<=n;i++)printf("%d ",in[i]);printf("\n");
//           if(!in[i])
//            {
//                printf("%d ",i);
//                for(int j=1;j<=n;j++)
//                {
//                    if(g[i][j]) g[i][j]--;
//                    in[j]--;
//                }
//            }
//        }
//        printf("\n");
//    }
//
//	return 0;
//}
////    while(cin>>n>>m)
////    {
////        memset(g,0,sizeof(g));
////        memset(a,0,sizeof(a));
////        memset(b,0,sizeof(b));
////
////        for(int i=1;i<=m;i++)
////        {
////            scanf("%d%d",&s,&t);
////            if(!g[s][t])
////            {
////                g[s][t]++;
////                a[t]++;
////            }
////        }
////
////        int num=0;
////        while(1)
////        {
////            int i=1;
////            if(!a[i])
////            {
////                while(1)
////                {
////                    i++;
////                    if(a[i]) break;
////                    if(i>n) break;
////                }
////            }
////            a[i]=-1;
////            b[num]=i;
////            num++;
////            for(int j=1;j<=n;j++)
////            {
////                if(g[i][j]>0)
////                {
////                    a[i]--;
////                    g[i][j]=-1;
////                }
////            }
////            if(num>n) break;
////        }
////
////        int i;
////        for(i=0;i<num-2;i++)
////            printf("%d ",b[i]);
////        printf("%d\n",b[i-2]);
////    }

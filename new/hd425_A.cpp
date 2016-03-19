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
//int c1[NUM][NUM],c2[NUM][NUM];
//int main()
//{
//    freopen("new.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int t;
//    int n,m;
//    scanf("%d",&t);
//    while(t--)
//    {
//        scanf("%d%d",&n,&m);
//
//        memset(c1,0,sizeof(c1));
//        memset(c2,0,sizeof(c2));
//
//        for(int i=0;i<=n;i++) c1[i][i]=1;
//        for(int i=2;i<=5;i+=3)
//        {
//            for(int j=0;j<=m;j++)
//            {
//                for(int k=0;k*i+j<=m&&k<=n;k++)
//                {
//                    for(int l=0;l+k<=n;l++)
//                    {
//                        c2[k*i+j][k+l]+=c1[j][l];
//                    }
//                }
//            }
//            for(int j=0;j<=m;j++)
//            {
//                for(int k=0;k<=n;k++)
//                {
//                    c1[j][k]=c2[j][k];
//                    c2[j][k]=0;
//                }
//            }
//        }
//        printf("%d\n",c1[m][n]);
//
//
////        for(int i=0;i<3;i++)
////            for(int j=m;j>=a[i];j--)
////                f[i][j]=f[i][j]+f[i+1][j-a[i]];
////for(int i=0;i<20;i++)for(int j=0;j<20;j++)printf("%d ",f[i][j]);printf("\n");
//    }
//
//	return 0;
//}

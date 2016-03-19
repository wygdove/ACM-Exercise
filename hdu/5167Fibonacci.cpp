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
//#define NUM 102
//
//int f[NUM];
//int num;
//
//void init()
//{
//    f[0]=0;f[1]=1;
//    for(int i=2;i<NUM;i++)
//    {
//        f[i]=f[i-1]+f[i-2];
//        if(f[i]>1000000000)
//        {
//            num=i;
//            break;
//        }
//    }
////cout<<"num="<<num<<endl;
////for(int i=0;i<num;i++) printf("f[%d]=%d\n",i,f[i]);
//
//}
//
//bool dfs(int n,int t)
//{
//    if(n==1) return 1;
//    for(int i=t;i>=3;i--)
//    {
//        if(n%f[i]==0)
//            if(dfs(n/f[i],i))
//                return 1;
//    }
//    return 0;
//}
//
//int main()
//{
//    freopen("hdu.in","r",stdin);
//    //freopen("hdu.out","w",stdout);
//
//    int T=0;
//    int n;
//
//    init();
//
//    scanf("%d",&T);
//    while(T--)
//    {
//        scanf("%d",&n);
//
//        if(n<7) {printf("Yes\n");continue;}
//
//        bool bl=dfs(n,num);
//        if(bl) printf("Yes\n");
//        else printf("No\n");
//    }
//
//	return 0;
//}
//
//
//
////
////    freopen("hdu.in","r",stdin);
////    //freopen("hdu.out","w",stdout);
////
////    int T=0;
////    int n;
////
////    f[0]=0;f[1]=1;
////    for(int i=2;i<NUM;i++)
////    {
////        f[i]=f[i-1]+f[i-2];
////        if(f[i]>1000000000)
////        {
////            num=i;
////            break;
////        }
////    }
//////for(int i=0;i<num;i++) printf("f[%d]=%d\n",i,f[i]);
////
////    scanf("%d",&T);
////    while(T--)
////    {
////        scanf("%d",&n);
////        bool bl=false;
////        for(int i=0;i<num;i++)
////        {
////            if(n==f[i]){bl=true;break;}
//////            else if(n/f[2]==f[i] && n%f[2]==0) {bl=true;break;}
//////            else if(n/f[3]==f[i] && n%f[3]==0) {bl=true;break;}
//////            else if(n/f[4]==f[i] && n%f[4]==0) {bl=true;break;}
//////            else if(n/f[5]==f[i] && n%f[5]==0) {bl=true;break;}
////            else
////            {
////                if(i==0) continue;
////                for(int j=0;j<num;j++)
////                    if(n/f[i]==f[j] && n%f[i]==0){bl=true;break;}
////            }
////        }
////        if(bl)printf("Yes\n");
////        else printf("No\n");
////    }
////
////	return 0;

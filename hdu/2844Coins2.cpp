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
//#define NUM 100002
//
//
//int cv[NUM];
//int num[NUM];
//int f[NUM];
//int V,N;
//
//void zeroOnePack(int cost,int value)
//{
//    for(int j=V;j>=cost;j--)
//        f[j]=max(f[j],f[j-cost]+value);
//}
//
//void completePack(int cost,int value)
//{
//    for(int j=cost;j<=V;j++)
//        f[j]=max(f[j],f[j-cost]+value);
//}
//
//void multiplePack(int cost,int value,int nums)
//{
//    if(cost*nums>=V)
//    {
//        completePack(cost,value);
//        return;
//    }
//    int k=1;
//    while(k<nums)
//    {
//        zeroOnePack(k*cost,k*value);
//        nums-=k;
//        k*=2;
//    }
//    zeroOnePack(nums*cost,nums*value);
//}
//
//int main()
//{
//    freopen("hdu.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    while(scanf("%d%d",&N,&V) && N && V)
//    {
//        memset(f,0,sizeof(f));
//        memset(cv,0,sizeof(cv));
//        memset(num,0,sizeof(num));
//
//        for(int i=1;i<=N;i++)
//            scanf("%d",&cv[i]);
//        for(int i=1;i<=N;i++)
//            scanf("%d",&num[i]);
//
//        for(int i=1;i<=N;i++)
//            multiplePack(cv[i],cv[i],num[i]);
//
////for(int i=0;i<=V;i++) printf("%d ",f[i]);printf("\n");
//        int ans=0;
//        for(int i=1;i<=V;i++)
//            if(f[i]==i) ans++;
//        printf("%d\n",ans);
//    }
//
//	return 0;
//}

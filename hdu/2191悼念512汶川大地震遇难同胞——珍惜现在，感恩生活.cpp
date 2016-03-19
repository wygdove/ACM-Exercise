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
//#define NUM 1002
//
//int c[NUM];
//int v[NUM];
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
//    int t;
//    scanf("%d",&t);
//    while(t--)
//    {
//        memset(f,0,sizeof(f));
//        memset(c,0,sizeof(c));
//        memset(v,0,sizeof(v));
//        memset(num,0,sizeof(num));
//
//        scanf("%d%d",&V,&N);
//        for(int i=1;i<=N;i++)
//        {
//            scanf("%d%d%d",&c[i],&v[i],&num[i]);
//            multiplePack(c[i],v[i],num[i]);
//        }
//        printf("%d\n",f[V]);
//    }
//
//	return 0;
//}

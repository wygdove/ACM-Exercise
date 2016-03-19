//#include<iostream>
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
//#define MOD 1000000007
//#define NUM 21
//
//long long a[NUM];
//
//long long solve(long long n)
//{
//    long long res=1;
//    for(int i=1;i<n;i++)
//    {
//        res<<=1;
//        res%=MOD;
//    }
//    return res-1;
//}
//
//int main()
//{
//    freopen("mu.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    a[0]=0;a[1]=0;a[2]=1;
//    for(int i=3;i<NUM;i++)
//        a[i]=pow(2,i-1)-1;
//
//    int T;
//    long long n,ans;
//    scanf("%d",&T);
//    while(T--)
//    {
//        ans=0;
//        scanf("%lld",&n);
////printf("a=%lld s=%lld\n",a[n],solve(n));
//
//        if(n<NUM) ans=a[n];
//        else ans=solve(n);
//        printf("%lld\n",ans%MOD);
//    }
//
//	return 0;
//}

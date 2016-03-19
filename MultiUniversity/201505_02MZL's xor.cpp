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
//#define NUM 500008
//
//int a[NUM];
//
//int main()
//{
//    freopen("hdu.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int T;
//    int n,m,z,l;
//    int ans;
//    scanf("%d",&T);
//    while(T--)
//    {
//        memset(a,0,sizeof(a));
//        a[1]=0;
//        ans=a[1];
//
//        scanf("%d%d%d%d",&n,&m,&z,&l);
//        for(int i=1;i<n;i++)
//        {
//            a[i]=(a[i-1]*m+z)%l;
//            //ans^=(a[i]+a[i-1]);
//        }
//        for(int i=0;i<n;i++)
//            for(int j=0;j<n;j++)
//                ans^=a[i]+a[j];
//        printf("%d\n",ans);
//
//    }
//
//    return 0;
//}

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
//#define MOD 10007
//#define NUM 102
//
//int f(LL n)
//{
//    int c=0 ;
//    for(c=0;n;++c)n&=(n-1);
//    return c ;
//}
//
//set<LL> st[NUM];
//
//int main()
//{
//    freopen("mu.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//
//    int j;
//    for(LL i=0;i<2e31;i++)
//    {
//        j=f[i];
//        st[j].insert(i);
//    }
//
//    int T;
//    int d;
//    scanf("%d",&T);
//    while(T--)
//    {
//        scanf("%d",&d);
//        printf("%d\t%d\n",d,f(d));
//    }
//
//	return 0;
//}

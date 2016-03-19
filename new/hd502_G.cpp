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
//#define NUM 22
//
//int f[NUM];
//
//int main()
//{
//    freopen("new.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    f[0]=0;f[1]=1;
//    for(int i=2;i<NUM;i++)
//        f[i]=f[i-1]+f[i-2];
//
//    int n;
//    double fn,temp;
//    while(scanf("%d",&n)!=EOF)
//    {
//        if(n<NUM)
//        {
//            printf("%d\n",f[n]);
//            continue;
//        }
//
//        fn=log10(1.0/sqrt(5))+n*log10((1+sqrt(5))/2);
//        temp=fn-(int)fn;
//        fn=pow(10,temp);
//        while(fn<1000) fn*=10;
////        while(fn>10000) fn/=10;
//        cout<<(int)fn<<endl;
//	}
//
//	return 0;
//}

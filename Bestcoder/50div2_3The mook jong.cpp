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
//#define NUM 61
//
//__int64 a[NUM];
//
//void init()
//{
//    a[0]=0;a[1]=1;a[2]=2;a[3]=3;a[4]=5;a[5]=8;a[6]=12;
//    for(int i=4;i<NUM;i++)
//    {
//        for(int j=1;j<i/3;j++)
//        {
//            a[i]+=(i-3*j)*(i-3*j+1)/2;
//        }
//        //a[i]=(i-3)*(i-2)/2+i;
//    }
//    //a[0]=0;a[1]=1;a[2]=2;a[3]=3;a[4]=5;a[5]=8;a[6]=12;
//}
//
//int main()
//{
//    freopen("bc.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    init();
//for(int i=1;i<NUM;i++)printf("%d\t%I64d\n",i,a[i]);printf("\n");
//    int n;
//    while(scanf("%d",&n)!=EOF)
//    {
//        printf("%I64d\n",a[n]);
//    }
//
//	return 0;
//}

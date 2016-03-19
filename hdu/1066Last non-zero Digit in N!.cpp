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
//    Result: Time Limit Exceeded
//****************************************************************/
//
//
//#define MINN -0x3f3f3f3f
//#define MAXN 0x3f3f3f3f
//#define MOD 10007
//#define NUM 1000000
//
//int num[NUM];
//
//void doit(int n)
//{
//    memset(num,0,sizeof(num));
//    num[0]=1;
//    int b=1;
//    for(int i=1;i<=n;i++)
//    {
//        int temp = 0;
//        for(int j=0;j<b;j++)
//        {
//            num[j]=num[j]*i+temp;
//            temp=num[j]/10;
//            num[j]=num[j]%10;
//            if(temp&&b<=j+1)
//                b++;
//        }
//    }
//    for(int i=0;i<b;i++)
//    {
//        if(num[i]!=0)
//        {
//            printf("%d\n",num[i]);
//            break;
//        }
//    }
//}
//
//int main()
//{
//    freopen("hdu.in","r",stdin);
//
//    int n;
//    while(scanf("%d",&n)!=EOF)
//    {
//        doit(n);
//    }
//	return 0;
//}

////#include<iostream>
////#include<memory.h>
////#include<fstream>
////#include<string>
////#include<algorithm>
////#include<math.h>
////#include<stack>
////#include<queue>
////#include<set>
////#include<map>
////#include<vector>
////#include<stdio.h>
////#include<stdlib.h>
////#include<cstdio>
////#include<cstdlib>
////#include<cstring>
////#include<cmath>
////
////using namespace std;
////
////typedef __int64 INT;
////typedef long long LL;
////typedef long double real;
////typedef vector<int> VI;
////
//// /**************************************************************
////    Problem:
////    Result:
////****************************************************************/
////
////#define NUM 1000000
////
////bool bl[NUM+1];
////
////void doit()
////{
////    int i;
////    int a,b,c,d,e;
////    for(i=1;i<NUM+1;i++)
////    {
////        if(i<10)
////        {
////            bl[i]=true;
////        }
////        else if(i<100)
////        {
////            a=i/10;
////            b=i%10;
////            if(a==b && a<b)
////                bl[i]=true;
////        }
////        else if(i<1000)
////        {
////            a=i/100;
////            b=(i-i/100)/10;
////            c=i%10;
////            if(a==c && a<b && b<c)
////                bl[i]=true;
////        }
////        else if(i<10000)
////        {
////            a=i/1000;
////            b=(i-i/1000)/100;
////            c=(i-i/100)/10;
////            d=i%10;
////            if(a==d && b==c && a<b && b<c && c<d)
////                bl[i]=true;
////        }
////        else if(i<100000)
////        {
////
////        }
////    }
////}
////
////int main()
////{
////    freopen("Bestcoder.in","r",stdin);
////
////    int T;
////    int n;
////    doit();
////    while(scanf("%d",&T)!=EOF)
////    {
////        scanf("%d",&n);
////    }
////
////	return 0;
////}
//int main()
//{
//    //freopen("input.txt","r",stdin);
//    //freopen("output.txt","w",stdout);
//    int a[7]={1,9,18,54,90,174,258};
//    int n,m;
//    cin>>n;
//    while(n--)
//    {
//        cin>>m;
//        cout<<a[m]<<endl;
//    }
//    return 0;
//}

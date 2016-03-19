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
//#define NUM 10000
//
//
//int n;
//int h[NUM];
//int w[NUM];
//double ss,ss2;
//
//void findh(double left,double right)
//{
//    double h2;
//    double ww,hh;
//    ss2=0;
////printf("ss=%lf\n",ss);
//    while(true) {
//        h2=(left+right)/2;
////printf("h2=%lf\t",h2);
//        ss2=0;
//        for(int i=0;i<n;i++)
//        {
//            if(h[i]<=h2)continue;
/////            ss2+=(1.0*w[i]/h[i]*(h[i]-h2))*(1.0*w[i]/h[i]*(h[i]-h2))*(h[i]-h2)/3;
//            hh=h[i]-h2;ww=1.0*w[i]/h[i]*hh;
//            ss2+=ww*ww*hh/3;
//        }
////printf("ss2=%lf\n",ss2);
//        if(fabs(ss2-ss)<=1e-1) {
//            break;
//        }
//        else if(ss2<ss) right=h2-0.1;
//        else left=h2+0.1;
//    }
//    printf("%d\n",(int)h2);
//}
//
//int main()
//{
//    freopen("bc.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int T;
//    scanf("%d",&T);
//    while(T--)
//    {
//        scanf("%d",&n);
//        for(int i=0;i<n;i++)scanf("%d",&h[i]);
//        for(int i=0;i<n;i++)scanf("%d",&w[i]);
//        double left=0,right=0;
//        for(int i=0;i<n;i++)
//        {
//            ss+=1.0*w[i]*w[i]*h[i]/3;
//            right=right>h[i]?right:h[i];
//        }
//        ss/=2;
//        findh(left,right);
//    }
//
//	return 0;
//}

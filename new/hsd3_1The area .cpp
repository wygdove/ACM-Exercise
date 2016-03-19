#include<iostream>
#include<memory.h>
#include<fstream>
#include<string>
#include<algorithm>
#include<math.h>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<vector>
#include<stdio.h>
#include<stdlib.h>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>

using namespace std;

typedef __int64 INT;
typedef long long LL;
typedef long double real;
typedef vector<int> VI;


/**************************************************************
    Problem:
    Ordering:
    Thought:
    Result:
****************************************************************/

#define NUM 100
#define MOD 10007

int main()
{
    freopen("new.in","r",stdin);

    int T=0;
    double x1,y1,x2,y2,x3,y3;
    double a,b,c;
    double k,t;
    double area;
    scanf("%d",&T);
    while(T--)
    {
        area=0;

        scanf("%lf%lf %lf%lf %lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);

        printf("%.2lf\n",area);
    }

	return 0;
}

//struct Point
//{
//    double x;
//    double y;
//}p[4];
//
//int main()
//{
//    freopen("new.in","r",stdin);
//
//    int T=0;
//    double a;
//    double area;
//    scanf("%d",&T);
//    while(T--)
//    {
//        memset(p,0,sizeof(p));
//        area=0;
//
//        for(int i=1;i<=3;i++)
//        {
//            scanf("%lf",&p[i].x,&p[i].y);
//        }
//
//        a=(p[1].y-p[2].y)/((p[1].x-p[2].x)*(p[1].x-p[2].x));
//
//        area=a*(p[3].x*p[3].x*p[3].x-p[1].x*p[1].x*p[1].x)/3+a*p[2].x*(p[3].x*p[3].x-p[1].x*p[1].x)+(a*p[2].x*p[2].x+p[2].y)*(p[3].x-p[1].x);
//
//        printf("%.2lf\n",area);
//    }
//
//	return 0;
//}

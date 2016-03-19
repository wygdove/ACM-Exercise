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

typedef long long LL;
typedef long double real;
typedef vector<int> VI;


/**************************************************************
    Problem:
    Ordering:
    Thought:
    Result:
****************************************************************/


#define INF 0x3f3f3f3f
#define MINN -0x3f3f3f3f
#define MAXN 0x3f3f3f3f
#define MOD 10007
#define NUM 102



int main()
{
    freopen("new.in","r",stdin);
    freopen("out.out","w",stdout);

    double a,b,c,d;
    double x,y;
    for(a=0.01;a<=20.00;a+=0.01)
    {
        for(b=0.01;b<=20.00;b+=0.01)
        {
            for(c=0.01;c<=20.00;c+=0.01)
            {
                for(d=0.01;d<=20.00;d+=0.01)
                {
                    x=a+b+c+d;
                    if(x>20.00) continue;
                    y=a*b*c*d;
                    if(x==y) printf("{%.2lf,%.2lf,%.2lf,%.2lf},",a,b,c,d);
                }
            }
        }
    }

	return 0;
}

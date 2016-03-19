#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<queue>
#include<cmath>
#include<string>
#define mem(a,b) memset(a,b,sizeof(a))
#define LL __int64
#define MAX 100010
using namespace std;

double a ,b ,c ,d ,l ,r;

double cal(double x)
{
    return fabs(a * x * x *x + b * x * x + c * x + d);
}

int main()
{
    while(~scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&l,&r))
    {
        double re = l;
        double ans = cal(l);
        while(r - re >= 0.01)
        {
            ans = max(ans,cal(re));
            re += 0.01;
        }
        ans = max(ans,cal(r));
        printf("%.2lf\n",ans);
    }
    return 0;
}
#include<iostream>
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
    freopen("hdu.in","r",stdin);
    //freopen("out.out","w",stdout);

    int x,y,w,n;
    int t,now,cnt;
    while(scanf("%d%d%d%d",&x,&y,&w,&n)!=EOF)
    {
        t=0;now=0;cnt=1;
        while(cnt<n)
        {
            if(now+w<=x)
            {
                now+=w;
                t+=w;
                cnt++;
            }
            else
            {
                t+=x-now+y;
                now=0;
                cnt++;
            }
        }

        printf("%d\n",t);
    }

	return 0;
}

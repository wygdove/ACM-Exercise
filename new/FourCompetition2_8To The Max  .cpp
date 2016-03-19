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

#define MOD 10007
#define NUM 100
#define MAXN 100

int a[NUM+2][NUM+2];

int main()
{
    freopen("new.in","r",stdin);

    int n=0;

    while(scanf("%d",&n)!=EOF)
    {
        int maxn=-0x3f3f3f3f;
        memset(a,0,sizeof(a));

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }


        for(int x=1;x<=n;x++)
        {
            for(int y=1;y<=n;y++)
            {

                a[x][y]=a[x][y]+a[x-1][y]+a[x][y-1]-a[x-1][y-1];
                for(int i=0;i<=x;i++)
                {
                    for(int j=0;j<=y;j++)
                    {
                        maxn=max(maxn,a[x][y]-a[x][j]-a[i][y]+a[i][j]);
                    }
                }


            }
        }

        printf("%d\n",maxn);
    }

	return 0;
}

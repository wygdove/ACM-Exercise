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

#define NUM 100
#define MOD 10007

/**************************************************************
    Problem:
    Ordering:
    Thought:
    Result:
****************************************************************/


double p[4][4];
double f[1010][4];

int main()
{
    freopen("work.in","r",stdin);

    int t;
    int m;
    int a,b,c;
	int i,j;
    while(scanf("%d",&t)!=EOF)
    {
        while(t--)
        {
            memset(p,0,sizeof(p));

            for(i=1;i<=3;i++)
            {
                for(j=1;j<=3;j++)
                {
                    scanf("%lf",&p[i][j]);
                }
            }

			scanf("%d",&m);
            while(m--)
			{
				scanf("%d%d%d",&a,&b,&c);

				f[0][1]=f[0][2]=f[0][3]=0.0;
				f[0][a]=1.0;
				for(i=1;i<=c;i++)
				{
					f[i][1]=f[i-1][1]*p[1][1]+f[i-1][2]*p[2][1]+f[i-1][3]*p[3][1];
					f[i][2]=f[i-1][1]*p[1][2]+f[i-1][2]*p[2][2]+f[i-1][3]*p[3][2];
					f[i][3]=f[i-1][1]*p[1][3]+f[i-1][2]*p[2][3]+f[i-1][3]*p[3][3];
                }

//for(i=1;i<=3;i++){for(j=1;j<=3;j++){printf("%.2lf ",p[i][j]);}cout<<endl;}
				printf("%.3lf\n",f[c][b]);
			}

        }
    }
	return 0;
}

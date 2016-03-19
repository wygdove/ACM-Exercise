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

#define NUM 30000

struct Gve
{
    int nend;
    int indegree;
}g[NUM+1];

int main()
{
    freopen("hdu.in","r",stdin);

    int T;
    int n,m;
    int i,j;
    int temp1,temp2;
    scanf("%d",&T);
    while(T--)
    {
        memset(g,0,sizeof(g));
        temp1=0;temp2=0;

        scanf("%d%d",&n,&m);
        for(i=1;i<=m;i++)
        {
            scanf("%d%d",&temp1,&temp2);
            g[temp1].nend=temp2;
            g[temp2].indegree++;
        }

        for(i=1;i<=n;i++)
        {
            if(g[i].indegree==0)
            {
                if(i!=1)
                    printf(" ");
                printf("%d",i);
                g[g[i].nend].indegree--;
            }
        }
        cout<<endl;
    }
	return 0;
}

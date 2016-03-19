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

#define NUM 500

int g[NUM][NUM];
int in[NUM];

int main()
{
    freopen("hdu.in","r",stdin);

    int n,m;
    int a,b;
    int i,j;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        if(n==1)
        {
            scanf("%d",&a);
            printf("%d\n",a);
            continue;
        }

        memset((g,0,sizeof(g));
        memset(in,0,sizeof(in));

        for(i=1;i<=m;i++)
        {
            scanf("%d%d",&a,&b);
            if(!g[a][b])//有可能有重边，对图的保存无影响，对入
            {
                g[a][b]=1;
                in[b]++;
            }


        }

        TopSort();
    }
	return 0;
}

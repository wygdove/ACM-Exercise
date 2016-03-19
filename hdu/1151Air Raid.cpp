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
    Ordering: 二分图匹配，最小路径覆盖
    Thought: 匈牙利算法，n-hungary()
    Result:
****************************************************************/


#define INF 0x3f3f3f3f
#define MINN -0x3f3f3f3f
#define MAXN 0x3f3f3f3f
#define MOD 10007
#define NUM 122

int n;
int g[NUM][NUM];//邻接矩阵
int linker[NUM];
bool used[NUM];

bool dfs(int i)
{
    for(int j = 0; j < n; j++)
        if(g[i][j] && !used[j])
        {
            used[j] = true;
            if(linker[j] == -1 || dfs(linker[j]))
            {
                linker[j] = i;
                return true;
            }
        }
    return false;
}

int hungary()
{
    int res = 0;
    memset(linker,-1,sizeof(linker));
    for(int i = 0; i < n; i++)
    {
        memset(used,false,sizeof(used));
        if(dfs(i))res++;
    }
    return res;
}

int main()
{
    freopen("hdu.in","r",stdin);
    //freopen("hdu.out","w",stdout);

    int T=0;
    int m;
    int s,t;
    scanf("%d",&T);
    while(T--)
    {
        memset(g,0,sizeof(g));

        scanf("%d%d",&n,&m);
        for(int i=0;i<m;i++)
        {
            scanf("%d%d",&s,&t);
            g[s-1][t-1]=1;
        }
        printf("%d\n",n-hungary());
    }

	return 0;
}

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


#define INF 0x3f3f3f3f
#define MINN -0x3f3f3f3f
#define MAXN 0x3f3f3f3f
#define MOD 10007
#define NUM 1002

//顶点编号从0开始的
//uN是匹配左边的顶点数，vN是匹配右边的顶点数
int uN,vN;//u,v的数目，使用前面必须赋值
int g[NUM][NUM];//邻接矩阵
int linker[NUM];
bool used[NUM];

bool dfs(int i)
{
    for(int j = 0; j < vN; j++)
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
    for(int i = 0; i < uN; i++)
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

    int k,gn,bn;
    int gnum,bnum;
    while(scanf("%d",&k) && k)
    {
        memset(g,0,sizeof(g));  ///初始化啊啊啊，会死的

        scanf("%d%d",&gn,&bn);
        for(int i=0; i<k; i++)
        {
            scanf("%d%d",&gnum,&bnum);
            g[gnum-1][bnum-1]=1;
        }
        uN=gn;vN=bn;
        printf("%d\n",hungary());
    }

    return 0;
}

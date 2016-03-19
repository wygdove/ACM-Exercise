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
#define NUM 502

/* ***********************************************************
二分图匹配（匈牙利算法的DFS实现）(邻接矩阵形式)
初始化：g[][]两边顶点的划分情况
建立g[i][j]表示i->j的有向边就可以了，是左边向右边的匹配
g没有边相连则初始化为0
uN是匹配左边的顶点数，vN是匹配右边的顶点数
调用：res=hungary();输出最大匹配数
优点：适用于稠密图，DFS找增广路，实现简洁易于理解
时间复杂度:O(VE)
*************************************************************/
//顶点编号从0开始的
int n;
//int uN,vN;//u,v的数目，使用前面必须赋值
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
    return n-res/2;
}

int main()
{
    freopen("hdu.in","r",stdin);
    //freopen("hdu.out","w",stdout);

    //int n;
    int s,t,num;
    while(cin>>n)
    {
        memset(g,0,sizeof(g));

        for(int i=0;i<n;i++)
        {
            scanf("%d: (%d)",&s,&num);
//printf("s=%d,num=%d\n",s,num);
            for(int j=0;j<num;j++)
            {
                scanf("%d",&t);
                g[s][t]=1;
            }
        }

        printf("%d\n",hungary());
    }

    return 0;
}

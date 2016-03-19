//#include<iostream>
//#include<memory.h>
//#include<fstream>
//#include<string>
//#include<algorithm>
//#include<math.h>
//#include<stack>
//#include<queue>
//#include<set>
//#include<map>
//#include<vector>
//#include<stdio.h>
//#include<stdlib.h>
//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//#include<cmath>
//
//using namespace std;
//
//typedef long long LL;
//typedef long double real;
//typedef vector<int> VI;
//
//
///**************************************************************
//    Problem:
//    Ordering:
//    Thought:
//    Result:
//****************************************************************/
//
//
//#define INF 0x3f3f3f3f
//#define MINN -0x3f3f3f3f
//#define MAXN 0x3f3f3f3f
//#define MOD 10007
//#define NUM 10
//
//int n,m;
//int g[NUM][NUM];
//
//
///* ***********************************************************
////二分图匹配（匈牙利算法的DFS实现）(邻接矩阵形式)
////初始化：g[][]两边顶点的划分情况
////建立g[i][j]表示i->j的有向边就可以了，是左边向右边的匹配
////g没有边相连则初始化为0
////uN是匹配左边的顶点数，vN是匹配右边的顶点数
////调用：res=hungary();输出最大匹配数
////优点：适用于稠密图，DFS找增广路，实现简洁易于理解
////时间复杂度:O(VE)
////*************************************************************/
////顶点编号从0开始的
//int uN,vN;//u,v的数目，使用前面必须赋值
//int g[NUM][NUM];//邻接矩阵
//int linker[NUM];
//bool used[NUM];
//bool dfs(int u)
//{
//    for(int v = 0; v < vN; v++)
//        if(g[u][v] && !used[v])
//        {
//            used[v] = true;
//            if(linker[v] == -1 || dfs(linker[v]))
//            {
//                linker[v] = u;
//                return true;
//            }
//        }
//    return false;
//}
//int hungary()
//{
//    int res = 0;
//    memset(linker,-1,sizeof(linker));
//    for(int u = 0; u < uN; u++)
//    {
//        memset(used,false,sizeof(used));
//        if(dfs(u))res++;
//    }
//    return res;
//}
//
//int main()
//{
//    freopen("mu.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int T;
//    int x,y;
//    scanf("%d",&T);
//    while(T--)
//    {
//        scanf("%d%d",&n,&m);
//        if(m==0) {printf("1\n");continue;}
//
//        memset(g,0,sizeof(g));
//        for(int i=0;i<m;i++)
//        {
//            scanf("%d%d",&x,&y);
//            g[x][y]++;
//        }
//    }
//
//	return 0;
//}

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
#define NUM 30

/*
* Prim求MST
* 传参图邻接矩阵g[][]，标号从0开始，0~n-1
* 返回最小生成树的权值，返回-1表示原图不连通
*/
bool vis[NUM];
int lowc[NUM];
int g[NUM][NUM];

int Prim(int g[NUM][NUM],int n)//点是0~n-1
{
    int ans=0;
    memset(vis,false,sizeof(vis));

    vis[0]=true;
    for(int i=1; i<n; i++)
        lowc[i]=g[0][i];
    for(int i=1; i<n; i++)
    {
        int minc=INF;
        int p=-1;
        for(int j=0; j<n; j++)
        {
            if(!vis[j]&&minc>lowc[j])
            {
                minc=lowc[j];
                p=j;
            }
        }

        if(minc==INF) return -1;//原图不连通
        ans+=minc;
//printf("ans=%d\n",ans);
        vis[p]=true;
        for(int j=0; j<n; j++)
            if(!vis[j]&&lowc[j]>g[p][j])
                lowc[j]=g[p][j];
    }
    return ans;
}


int main()
{
    freopen("hdu.in","r",stdin);
    //freopen("hdu.out","w",stdout);

    int T=0;
    char c;int n;
    char ch;int temp;
    while(scanf("%d",&T) && T)
    {
        memset(g,INF,sizeof(g));

        for(int i=0; i<T-1; i++)
        {
            getchar();
            scanf("%c%d",&c,&n);
//printf("c=%c,n=%d\n",c,n);
            g[c-'A'][c-'A']=0;
            for(int j=0;j<n;j++)
            {
                getchar();
                scanf("%c%d",&ch,&temp);
//printf("ch=%c,temp=%d\n",ch,temp);
                g[c-'A'][ch-'A']=g[ch-'A'][c-'A']=temp;
            }
        }
//for(int i=0;i<T;i++){for(int j=0;j<T;j++){ printf("%d ",g[i][j]);}printf("\n");}
        printf("%d\n",Prim(g,T));
    }

    return 0;
}

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
#define NUM 202

/*
* ��Դ���·����Dijkstra�㷨���ڽӾ�����ʽ�����Ӷ�ΪO(n^2)
* ���Դbeg�����е�����·��������ͼ�Ķ����������ڽӾ���cost[][]
* ���ظ�������·��lowcost[], ·��pre[].pre[i]��¼beg��i·���ϵĸ���㣬pre[beg]=-1
* �ɸ���·��Ȩ���ͣ�����Ȩֵ����Ϊ�Ǹ�
*
*/
int g[NUM][NUM];
int lowcost[NUM];
bool vis[NUM];
int pre[NUM];
void Dijkstra(int g[][NUM],int lowcost[],int n,int beg)
{
    for(int i=0; i<n; i++)
    {
        lowcost[i]=INF;
        vis[i]=false;
        pre[i]=-1;
    }
    lowcost[beg]=0;
    for(int j=0; j<n; j++)
    {
        int k=-1;
        int Min=INF;
        for(int i=0; i<n; i++)
            if(!vis[i]&&lowcost[i]<Min)
            {
                Min=lowcost[i];
                k=i;
            }
        if(k==-1)break;
        vis[k]=true;
        for(int i=0; i<n; i++)
            if(!vis[i]&&lowcost[k]+g[k][i]<lowcost[i])
            {
                lowcost[i]=lowcost[k]+g[k][i];
                pre[i]=k;
            }
    }
}


int main()
{
    freopen("hdu.in","r",stdin);
    //freopen("hdu.out","w",stdout);

    int n,m;
    int a,b,x;
    int s,t;
    while(cin>>n>>m)
    {
        memset(g,INF,sizeof(g));

        for(int i=0; i<m; i++)
        {
            scanf("%d%d%d",&a,&b,&x);
            if(g[a][b]>x) g[a][b]=g[b][a]=x;
        }
        scanf("%d%d",&s,&t);
//for(int i=0;i<n;i++){for(int j=0;j<n;j++)printf("%d ",g[i][j]);printf("\n");}

        Dijkstra(g,lowcost,n,s);

        int ans=lowcost[t];
        if(ans==INF) printf("-1\n");
        else printf("%d\n",ans);
    }

    return 0;
}

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

/*
* Prim��MST
* ����ͼ�ڽӾ���g[][]����Ŵ�0��ʼ��0~n-1
* ������С��������Ȩֵ������-1��ʾԭͼ����ͨ
* ��ʼ��memset(g,INF,sizeof(g));
*/
bool vis[NUM];
int lowc[NUM];
int g[NUM][NUM];

int Prim(int g[NUM][NUM],int n)//����0~n-1
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

        if(minc==INF) return -1;//ԭͼ����ͨ
        ans+=minc;
        vis[p]=true;
        for(int j=0; j<n; j++)
            if(!vis[j]&&lowc[j]>g[p][j])
                lowc[j]=g[p][j];
    }
    return ans;
}

int temp[NUM];

int main()
{
    freopen("hdu.in","r",stdin);
    //freopen("hdu.out","w",stdout);

    int T=0;
    int n,m,k;
    int p,q,c;
    int num;
    scanf("%d",&T);
    while(T--)
    {
        memset(g,INF,sizeof(g));

        scanf("%d%d%d",&n,&m,&k);
        while(m--)
        {
            scanf("%d%d%d",&p,&q,&c);
            if(g[p-1][q-1]>c) g[p-1][q-1]=g[q-1][p-1]=c;///��Ҫ
        }
        while(k--)
        {
            scanf("%d",&num);
            for(int i=0;i<num;i++)
                scanf("%d",&temp[i]);
            for(int i=0;i<num;i++)
                for(int j=0;j<num;j++)
                    g[temp[i]-1][temp[j]-1]=g[temp[j]-1][temp[i]-1]=0;
        }

        printf("%d\n",Prim(g,n));
    }
	return 0;
}

#pragma comment(linker, "/STACK:1024000000,1024000000")
#include<iostream>
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


#define mems0(s)  memset(s,0,sizeof(s))
#define mems_1(s) memset(s,-1,sizeof(s))
#define memsINF(s) memset(s,INF,sizeof(s))
#define memsch(ch) memset(ch,'\0',sizeof(ch))

#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1


/**************************************************************
    Problem:
    Ordering:
    Thought:
    Result:
    Author: wygdove
****************************************************************/


const double eps = 1e-9;
const double pi=acos(-1.0);
#define INF 0x3f3f3f3f
#define MINN -0x3f3f3f3f
#define MAXN 0x3f3f3f3f
#define MOD 10007
#define NUM 108

int n,k;
int g[NUM][NUM];
int cheese[NUM][NUM];
int temp;
int nx,ny;

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

void dfs(int x,int y)
{
printf("(%d,%d)\n",x,y,g[x][y]);

    for(int i=0;i<4;i++)
    {
        for(int j=1;j<=k;j++)
        {
            nx=x+dx[i]*j;ny=y+dy[i]*j;
            if(nx>=0&&nx<n&&ny>=0&&ny<n)
            {
                if(g[nx][ny]>g[x][y])
                {
                    temp=cheese[x][y]+g[nx][ny];
                    cheese[nx][ny]=cheese[nx][ny]>temp?cheese[nx][ny]:temp;
                    dfs(nx,ny);
                }
            }
        }
//        nx=x+dx[i];ny=y+dy[i];
//        if(nx>=0&&nx<n&&ny>=0&&ny<n)
//        {
//            if(g[nx][ny]>g[x][y])
//            {
//                temp=cheese[x][y]+g[nx][ny];
//                cheese[nx][ny]=cheese[nx][ny]>temp?cheese[nx][ny]:temp;
//                dfs(nx,ny);
//            }
//        }
    }
    return;
}

int main()
{
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);

    freopen("new.in","r",stdin);
    //freopen("out.out","w",stdout);

    while(scanf("%d%d",&n,&k)&&(n!=-1)&&(k!=-1))
    {
        mems0(g);
        mems0(cheese);

        for(int i=0;i<n;i++)for(int j=0;j<n;j++)
            scanf("%d",&g[i][j]);
        cheese[0][0]=g[0][0];
        dfs(0,0);
for(int i=0;i<n;i++){printf("\t");for(int j=0;j<n;j++){printf("%d ",cheese[i][j]);}printf("\n");}
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans=cheese[i][j]>ans?cheese[i][j]:ans;
            }
        }
        printf("%d\n",ans);
    }


    fclose(stdin);
    fclose(stdout);
	return 0;
}

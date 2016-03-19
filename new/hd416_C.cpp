#pragma comment(linker, "/STACK:1024000000,1024000000")
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

//for DS
//函数结果状态代码
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
//Status是函数的类型，其值是函数结果状态代码
typedef int Status;
typedef int ElemType;


typedef __int64 INT;
typedef long long LL;
typedef long double real;
typedef vector<int> VI;


/**************************************************************
    Problem:
    Ordering:
    Thought:
    Result:
    Author: wygdove
****************************************************************/


#define INF 0x3f3f3f3f
#define MINN -0x3f3f3f3f
#define MAXN 0x3f3f3f3f
#define MOD 10007
#define NUM 10



int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};

int m,n;
int g[NUM][NUM];
int d[NUM][NUM];
int sx,sy;
int gx,gy;
typedef pair<int,int> P;

int bfs()
{
    memset(d,INF,sizeof(d));

    queue<P> q;
    q.push(P(sx,sy));
    d[sx][sy]=0;

    while(q.size())
    {
        P p=q.front();q.pop();
        if(p.first==gx && p.second==gy) break;

        for(int i=0;i<4;i++)
        {
            int nx=p.first+dx[i],ny=p.second+dy[i];
            if(nx>=0 && nx<m && ny>=0 && ny<n && g[nx][ny]==0 && d[nx][ny]==INF)
            {
                q.push(P(nx,ny));
                d[nx][ny]=d[p.first][p.second]+1;
            }
        }
    }
    return d[gx][gy];
}

int main()
{
    freopen("new.in","r",stdin);
    //freopen("out.out","w",stdout);

    int T=0;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&m,&n);
        for(int i=0;i<m;i++) for(int j=0;j<n;j++)
        {
            scanf("%d",&g[i][j]);
            if(g[i][j]==2){sx=i;sy=j;}
            if(g[i][j]==3){gx=i;gy=j;}
        }
//        printf("%d\n",bfs());
        printf("%d\n",abs(gx-sx)+abs(gy-sy));
    }

	return 0;
}

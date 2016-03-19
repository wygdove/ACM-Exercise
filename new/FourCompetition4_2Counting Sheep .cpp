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

#define MOD 10007
#define MAXN 100
#define NUM 100

int h,w;
char ch[NUM+1][NUM+1];

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

void dfs(int x,int y)
{
    ch[x][y]='.';

    for(int i=0;i<4;i++)
    {
        int nx=x+dx[i],ny=y+dy[i];
        if(nx>=0 && nx<h && ny>=0 && ny<w && ch[nx][ny]=='#')
            dfs(nx,ny);
    }
}

int main()
{
    freopen("new.in","r",stdin);

    int T=0;
    scanf("%d",&T);
    while(T--)
    {
        memset(ch,'\0',sizeof(ch));

        scanf("%d%d",&h,&w);
        getchar();
        for(int i=0;i<h;i++)
            scanf("%s",&ch[i]);
//        for(int i=0;i<=h;i++)
//            for(int j=0;j<=w;j++)
//                scanf("%c",&ch[i][j]);
//for(int i=0;i<=h;i++){for(int j=0;j<=w;j++){printf("%c",ch[i][j]);}cout<<endl;}

        int ans=0;
        for(int i=0;i<=h;i++)
        {
             for(int j=0;j<=w;j++)
             {
                 if(ch[i][j]=='#')
                 {
                     dfs(i,j);
                     ans++;
                 }
             }
        }
        printf("%d\n",ans);
    }

	return 0;
}

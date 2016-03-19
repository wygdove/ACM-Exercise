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
#define NUM 100
#define MAXN 100

char ch[NUM+2][NUM+2];
int m,n;

void dfs(int x,int y)
{
    int nx,ny;
    ch[x][y]='*';
    for(int dx=-1;dx<=1;dx++)
    {
        for(int dy=-1;dy<=1;dy++)
        {
            nx=x+dx;ny=y+dy;
            if(nx>=1 && nx<=m && ny>=1 && ny<=n && ch[nx][ny]=='@')
                dfs(nx,ny);
        }
    }
    return;
}

int main()
{
    freopen("new.in","r",stdin);

    int ans;
    while(scanf("%d%d",&m,&n) && m!=0 && n!=0)
    {
        ans=0;

        getchar();
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cin>>ch[i][j];
            }
        }

        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(ch[i][j]=='@')
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

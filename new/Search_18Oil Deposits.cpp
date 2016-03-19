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

int n,m;
char ch[NUM][NUM];
int cnt;
int nx,ny;

void dfs(int x,int y)
{
    ch[x][y]='*';
    for(int dx=-1;dx<=1;dx++)
        for(int dy=-1;dy<=1;dy++)
    {
        nx=x+dx;ny=y+dy;
        if(nx>=0&&nx<n&&ny>=0&&ny<m&&ch[nx][ny]=='@')
            dfs(nx,ny);
    }
    return;
}

int main()
{
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);

    freopen("new.in","r",stdin);
    //freopen("out.out","w",stdout);

    while(scanf("%d%d",&n,&m)&&n&&m)
    {
        memsch(ch);
        cnt=0;

        getchar();
//        for(int i=0;i<n;i++)
//        {
//            for(int j=0;j<m;j++)
//            {
//                scanf("%c",&ch[i][j]);
//            }
//            getchar();
//        }
        for(int i=0;i<n;i++)
            scanf("%s",&ch[i]);
for(int i=0;i<n;i++){for(int j=0;j<m;j++){printf("%c",ch[i][j]);}printf("\n");}
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(ch[i][j]=='@')
                {
                    dfs(i,j);
                    cnt++;
                }
        printf("%d\n",cnt);
    }

    fclose(stdin);
    fclose(stdout);
	return 0;
}

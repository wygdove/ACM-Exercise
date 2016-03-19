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


char sa[NUM],sb[NUM];
int la,lb;
int ta[100][100];

void init()
{
    mems0(ta);
    char a='A',c='C',g='G',t='T',x='-';
    ta[a][a]=5;ta[a][c]=-1;ta[a][g]=-2;ta[a][t]=-1;ta[a][x]=-3;
    ta[c][a]=-1;ta[c][c]=5;ta[c][g]=-3;ta[c][t]=-2;ta[c][x]=-4;
    ta[g][a]=-2;ta[g][c]=-3;ta[g][g]=5;ta[g][t]=-2;ta[g][x]=-2;
    ta[t][a]=-1;ta[t][c]=-2;ta[t][g]=-2;ta[t][t]=5;ta[t][x]=-1;
    ta[x][a]=-3;ta[x][c]=-4;ta[x][g]=-2;ta[x][t]=-1;
}


int main()
{
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);

    freopen("new.in","r",stdin);
    //freopen("out.out","w",stdout);

    init();

    int T;
    char c;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%c%s",&la,&c,&sa);
        scanf("%d%c%s",&lb,&c,&sb);

        printf("\n%d\n",LCS());
    }

    fclose(stdin);
    fclose(stdout);
	return 0;
}

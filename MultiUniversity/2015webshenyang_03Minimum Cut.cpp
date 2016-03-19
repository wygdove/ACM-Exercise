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
#define NUM 20008

int td[NUM];
int gd[NUM];
bool vis[NUM];

int main()
{
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);

    freopen("mu.in","r",stdin);
    //freopen("out.out","w",stdout);

    int T;
    int n,m;
    int a,b;
    int ans;
    scanf("%d",&T);
    for(int cnt=1;cnt<=T;cnt++)
    {
        mems0(td);
        mems0(gd);
        mems0(vis);

        scanf("%d%d",&n,&m);
        for(int i=0;i<n-1;i++)
        {
            scanf("%d%d",&a,&b);
            td[a]++;td[b]++;
            if(td[a]>1)vis[a]=1;
            if(td[b]>1)vis[b]=1;
        }
        for(int i=0;i<m-n+1;i++)
        {
            scanf("%d%d",&a,&b);
            gd[a]++;gd[b]++;
        }
        ans=INF;
        for(int i=1;i<=n;i++)
        {
//printf("td[%d]=%d gd[%d]=%d\n",i,td[i],i,gd[i]);
            if(!vis[i])
                ans=ans<(td[i]+gd[i])?ans:(td[i]+gd[i]);
        }
        printf("Case #%d: %d\n",cnt,ans);

    }

    fclose(stdin);
    fclose(stdout);
	return 0;
}

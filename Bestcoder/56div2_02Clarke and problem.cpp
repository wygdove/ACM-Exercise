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
#define MOD 1000000007
#define NUM 1008

int a[NUM];
int n,p;
int cnt;

void dfs(int i,LL sum)
{
printf("sum=%lld\n",sum);
    if(i==n) return ;
    if(sum%p==0){cnt++;cnt%=MOD;}
    dfs(i+1,sum);
    dfs(i+1,sum+a[i]);
    return ;
}

int main()
{
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);

    freopen("bc.in","r",stdin);
    //freopen("out.out","w",stdout);

    int T;
    scanf("%d",&T);
    while(T--)
    {
        cnt=0;
        scanf("%d%d",&n,&p);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        dfs(0,(LL)0);
        printf("%d\n",cnt);
    }

    fclose(stdin);
    fclose(stdout);
	return 0;
}

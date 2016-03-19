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
int a[NUM];
int dp[NUM][NUM];
int ans;

int main()
{
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);

    freopen("bc.in","r",stdin);
    //freopen("out.out","w",stdout);

    while(scanf("%d%d",&n,&k)!=EOF)
    {
        mems0(a);mems0(dp);
        ans=0;

        for(int i=0;i<n;i++)scanf("%d",&a[i]);

        for(int )

        for(int i=0;i<n;i++)ans+=dp[i][k];
        printf("%d\n",ans);

    }

    fclose(stdin);
    fclose(stdout);
	return 0;
}

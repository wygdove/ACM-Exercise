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
#define NUM 1000

int ls,lt;
int s[NUM],t[NUM];
int dp[NUM];
///最长不下降公共子序列
int LCIS(){
    int Max;
    memset(dp,0,sizeof(dp));
    for(int i=0;i<ls;i++)
    {
        Max=0;
        for(int j=0;j<lt;j++)
        {
            if(s[i]>t[j] && Max<dp[j])
                Max=dp[j];
            if(s[i]==t[j])
                dp[j]=Max+1;
        }
    }
    Max=0;
    for(int i=0;i<lt;i++)
        if(Max<dp[i]) Max=dp[i];
    return Max;
}

int main()
{
    freopen("hdu.in","r",stdin);
    //freopen("out.out","w",stdout);

    int T;
    scanf("%d",&T);
    while(T--)
    {
        memset(dp,0,sizeof(dp));

        scanf("%d",&ls);
        for(int i=0;i<ls;i++) scanf("%d",&s[i]);
        scanf("%d",&lt);
        for(int i=0;i<lt;i++) scanf("%d",&t[i]);

        printf("%d\n",LCIS());

    }

	return 0;
}

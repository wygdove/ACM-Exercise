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
#define NUM 10008

int a[NUM];
double b[NUM];
double dp[NUM];


int main()
{
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);

    freopen("new.in","r",stdin);
    //freopen("out.out","w",stdout);


    int n,m;
    while(scanf("%d%d",&n,&m) && n+m)
    {
        mems0(a);mems0(b);mems0(dp);

        for(int i=0;i<m;i++)scanf("%d%lf",&a[i],&b[i]);

        for(int i=0;i<m;i++)
        {
            for(int j=n;j>=a[i];j--)
            {
                dp[j]=max(dp[j],1-(1-dp[j-a[i]])*(1-b[i]));
            }
        }
        printf("%.1lf%%\n",dp[n]*100);
    }

    fclose(stdin);
    fclose(stdout);
	return 0;
}

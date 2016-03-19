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
#define NUM 100008

__int64 h[NUM];
__int64 l[NUM],r[NUM];

int main()
{
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);

    freopen("new.in","r",stdin);
    //freopen("out.out","w",stdout);


    int n;
    __int64 ans;
    while(scanf("%d",&n)&&n)
    {
        mems0(h);mems0(l);mems0(r);
        ans=0;

        for(int i=1;i<=n;i++)
        {
            scanf("%I64d",&h[i]);
            l[i]=i;r[i]=i;
        }
        h[0]=-1;h[n+1]=-1;
        l[0]=1;r[n+1]=n;
        for(int i=1;i<=n;i++)
        {
            while(h[l[i]-1]>=h[i])
                l[i]=l[l[i]-1];
//            while(h[i]<=h[r[i]+1])
//                r[i]=r[r[i]+1];
        }
        for(int i=n;i>0;i--)
        {
            while(h[i]<=h[r[i]+1])
                r[i]=r[r[i]+1];
        }
        for(int i=1;i<=n;i++)
            ans=max(ans,h[i]*(r[i]-l[i]+1));

        printf("%I64d\n",ans);
    }

    fclose(stdin);
    fclose(stdout);
	return 0;
}

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
****************************************************************/


const double eps = 1e-9;
const double pi=acos(-1.0);
#define INF 0x3f3f3f3f
#define MINN -0x3f3f3f3f
#define MAXN 0x3f3f3f3f
#define MOD 10007
#define NUM 1008

int a[NUM];

int main()
{
	cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);

    freopen("hdu.in","r",stdin);
    //freopen("out.out","w",stdout);

    int T;
    int n;
    int q,l,r;
    int ans;
    scanf("%d",&T);
    while(T--)
    {
        mems0(a);

        scanf("%d",&n);
        for(int i=1;i<=n;i++)scanf("%d",&a[i]);
        scanf("%d",&q);
        while(q--)
        {
            scanf("%d%d",&l,&r);
            if(l>r)swap(l,r);
            ans=MINN;
            for(l;l<=r;l++)ans=ans>a[l]?ans:a[l];
            printf("%d\n",ans);
        }
    }

	return 0;
}

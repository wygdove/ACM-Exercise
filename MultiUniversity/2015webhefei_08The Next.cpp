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

LL d,y,temp;
int s1,s2;
set<LL> st[NUM];
set<LL>::iterator it;

int f(LL n)
{
    int c=0 ;
    for(c=0;n;++c)n&=(n-1);
    return c ;
}

int main()
{
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);

    freopen("mu.in","r",stdin);
    //freopen("out.out","w",stdout);

for(LL i=0;i<100;i++)
{
    st[f(i)].insert(i);
printf("%lld\t %d\n",i,f(i));
}
for(int i=0;i<20;i++)
{
    printf("%d\t",i);
    for(it=st[i].begin();it!=st[i].end();it++)
        printf("%d ",*it);
    printf("\n");
}

    int T;
    int cnt,x;
    scanf("%d",&T);
    for(int ct=1;ct<=T;ct++)
    {
        scanf("%I64d%d%d",&d,&s1,&s2);
        y=d+1;
        int lll=15;
        while(lll--)
        {
            cnt=f(y);
//printf("y=%lld\tcnt=%d\n",y,cnt);
            if(cnt>=s1&&cnt<=s2)break;
            else y++;
        }
        printf("Case #%d: %I64d\n",ct,y);
    }


    fclose(stdin);
    fclose(stdout);
	return 0;
}

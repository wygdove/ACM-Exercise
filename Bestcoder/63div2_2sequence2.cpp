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
int rcd[NUM];
int num[NUM];
bool bl;
int ans;

void select_combination(int l, int p)
{
    if(l==m)
    {
        bl=true;
        for(int i=0;i<m;i++)
            if(i!=m-1&&rcd[i]>=rcd[i+1]) bl=false;
        if(bl)ans++;
for(int i=0;i<m;i++)printf("%d ",rcd[i]);printf("\n");
        return;
    }
    for(int i=p;i<n;i++)
    {
        rcd[l]=num[i];
        if(l>0&&l<n &&rcd[l]<=rcd[l-1])continue;
        select_combination(l+1,i+1);
    }
}

int main()
{
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);

    freopen("bc.in","r",stdin);
    //freopen("out.out","w",stdout);

    while(scanf("%d%d",&n,&m)!=EOF)
    {
        mems0(num);mems0(rcd);
        ans=0;

        for(int i=0;i<n;i++)scanf("%d",&num[i]);
        select_combination(0, 0);

        printf("%d\n",ans);

    }

    fclose(stdin);
    fclose(stdout);
	return 0;
}

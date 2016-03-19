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
#define MAXN 100000008
#define MOD 10007
#define NUM 100008

int a[NUM],b[NUM];
int f[MAXN];

int main()
{
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);

    freopen("new.in","r",stdin);
    //freopen("out.out","w",stdout);

    int n,m;
    int sum;
    while(cin>>n>>m)
    {
        mems0(a);mems0(b);
        mems0(f);
        sum=0;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        for(int i=0;i<m;i++)cin>>b[i];
        for(int i=0;i<n;i++)
        {
            for(int j=sum;j>=b[i];j--)
            {
                f[j]=max(f[j],f[j-b[i]]+b[i]);
            }
        }
//for(int i=0;i<=sum;i++)printf("%d\n",f[i]);
        printf("%d\n",sum-f[sum]);
    }

    fclose(stdin);
    fclose(stdout);
	return 0;
}

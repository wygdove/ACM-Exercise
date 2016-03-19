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

typedef __int64 INT;
typedef long long LL;
typedef long double real;
typedef vector<int> VI;

/**************************************************************
    Problem:
    Ordering:
    Thought:
    Result:
****************************************************************/


#define NUM 1000
#define MOD 10007

struct bone
{
    int c;
    int v;
}b[NUM];

int f[NUM];

int main()
{
    freopen("new.in","r",stdin);

    int T=0;
    int N,V;
    scanf("%d",&T);
    while(T--)
    {
        memset(f,0,sizeof(f));
        memset(b,0,sizeof(b));

        scanf("%d %d",&N,&V);
        for(int i=1;i<=N;i++)
            scanf("%d",&b[i].v);
        for(int i=1;i<=N;i++)
            scanf("%d",&b[i].c);

        for(int i=1;i<=N;i++)
        {
            for(int j=V;j>=b[i].c;j--)
            {
                f[j]=max(f[j],f[j-b[i].c]+b[i].v);
//cout<<"f["<<j<<"]="<<f[j]<<endl;
            }
        }

        printf("%d\n",f[V]);

    }

	return 0;
}

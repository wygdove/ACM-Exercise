#pragma comment(linker, "/STACK:1024000000,1024000000")
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

//typedef __int64 INT;
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
#define MOD 10000007
#define NUM 100002

int a[NUM];

int main()
{
    freopen("nyoj.in","r",stdin);
    //freopen("out.out","w",stdout);

    int n,k;
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        memset(a,0,sizeof(a));

        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
    }

	return 0;
}

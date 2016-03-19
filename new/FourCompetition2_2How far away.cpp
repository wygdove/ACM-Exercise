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

#define MOD 10007
#define NUM 40000
#define MAXN 100

int a[NUM+1][201];

int main()
{
    freopen("new.in","r",stdin);

    int T=0;
    int x,y,far;
    int dx,dy;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&n,&m);
        for(int i=0;i<n-1;i++)
        {
            scanf("%d%d%d",&x,&y,&far);
            a[x][y]=far;
        }
        for(int i=0;i<m;i++)
        {
            scanf("%d%d",&dx,&dy);
        }


    }
	return 0;
}

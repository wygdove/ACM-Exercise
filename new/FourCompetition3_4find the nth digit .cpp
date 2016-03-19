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
#define MAXN 100
#define NUM 100


int main()
{
    freopen("new.in","r",stdin);

    int T=0;
    int n;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        for(int i=1;i<n;i++)
            n-=i;
        if(n%9==0)printf("9\n");
        else printf("%d\n",n%9);
    }

	return 0;
}

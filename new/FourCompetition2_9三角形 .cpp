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
#define NUM 10000
#define MAXN 100

int a[NUM+10];

void doit()
{
    a[1]=2;
    for(int i=2;i<NUM+10;i++)
    {
        a[i]=a[i-1]+6*(i-1);
    }
    return ;
}

int main()
{
    freopen("new.in","r",stdin);

    int T=0;
    int n;
    doit();
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        printf("%d\n",a[n]);
    }
	return 0;
}

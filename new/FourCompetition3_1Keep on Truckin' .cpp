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

    int a[3];
    while(scanf("%d%d%d",&a[0],&a[1],&a[2])!=EOF)
    {
        sort(a,a+3);
        if(a[2]<168){printf("CRASH %d\n",a[2]);continue;}
        if(a[1]<168){printf("CRASH %d\n",a[1]);continue;}
        if(a[0]<168){printf("CRASH %d\n",a[0]);continue;}
        printf("NO CRASH\n");
    }
	return 0;
}

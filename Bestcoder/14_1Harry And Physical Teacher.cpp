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

#define NUM 100
#define MOD 10007

/**************************************************************
    Problem:
    Ordering:
    Thought:
    Follow: kuangbin
    Link:
    Result:
****************************************************************/




int main()
{
    freopen("Bestcoder.in","r",stdin);

    //int T=0;

    //scanf("%d",&T);
    //while(T--)
    LL v,v0;
    while(scanf("%ld %ld",&v,&v0)!=EOF)
    {
        printf("%ld\n",v-v0);
    }

	return 0;
}

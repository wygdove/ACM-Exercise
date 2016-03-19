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

//Å·À­º¯Êý
int euler(int n)
{
    int res=n;
	int i;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            res=res-res/i;
            while(n%i==0)
                n/=i;
        }
    }
    if(n>1)
        res=res-res/n;
    return res;
}

int main()
{
    freopen("new.in","r",stdin);

    int T=0;
    int n;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        printf("%d\n",euler(n));
    }

	return 0;
}

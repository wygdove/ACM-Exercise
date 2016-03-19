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


#define MINN -0x3f3f3f3f
#define MAXN 0x3f3f3f3f
#define MOD 10007
#define NUM 100

int JudgePrime(int n)
{
   int i,flag=1;
    for (i=2;i<=sqrt(n);i++)
    if (n%i==0) {flag=0;break;}
    if (flag==1) return 1; else return 0;
}

int main()
{
    //freopen("Bestcoder.in","r",stdin);

    int T=0;
    int sum;
    int temp;
    while(scanf("%d",&T)!=EOF)
    {
        sum=0;
        while(T--)
        {
            scanf("%d",&temp);
            if(JudgePrime(temp)) sum+=temp;
        }
        printf("%d\n",sum);
    }

	return 0;
}

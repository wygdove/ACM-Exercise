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
#define NUM 100
#define MAXN 100

int a[MAXN];
int n,k;
int sum;

bool dfs(int i,int sum) // 已经从前i项得到了和sum，然后对于i项之后的进行分支
{
    // 如果前n项都计算过了，则返回sum是否与k相等
    if(i==n) return sum==k;
    // 不加上a[i]的情况
    if(dfs(i+1,sum)) return true;
    // 加上a[i]的情况
    if(dfs(i+1,sum+a[i])) return true;
    // 无论是否加上a[i]都不能凑成k就返回false
    return false;
}

int main()
{
    freopen("new.in","r",stdin);

    int T=0;
    scanf("%d",&T);
    while(T--)
    {
        sum=0;

        scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        scanf("%d",&k);

        if(dfs(0,0)) printf("Yes\n");
        else printf("No\n");
    }
	return 0;
}

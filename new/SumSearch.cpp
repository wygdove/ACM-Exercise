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

bool dfs(int i,int sum) // �Ѿ���ǰi��õ��˺�sum��Ȼ�����i��֮��Ľ��з�֧
{
    // ���ǰn�������ˣ��򷵻�sum�Ƿ���k���
    if(i==n) return sum==k;
    // ������a[i]�����
    if(dfs(i+1,sum)) return true;
    // ����a[i]�����
    if(dfs(i+1,sum+a[i])) return true;
    // �����Ƿ����a[i]�����ܴճ�k�ͷ���false
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

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

#define NUM 10010
#define MOD 10007

/**************************************************************
    Problem:
    Ordering:
    Thought:
    Result:
****************************************************************/


int c1[NUM],c2[NUM];
int prime[NUM+1];

void getPrime()
{
memset(prime,0,sizeof(prime));
for(int i=2;i<=NUM;i++)
{
if(!prime[i])prime[++prime[0]]=i;
for(int j=1;j<=prime[0]&&prime[j]<=NUM/i;j++)
{
prime[prime[j]*i]=1;
if(i%prime[j]==0) break;
}
}
}

int main()
{
    freopen("Bestcoder.in","r",stdin);

    int n;
    int ans;
	int i,j,k;
	getPrime();
for(int i=0;i<30;i++)cout<<prime[i]<<endl;//cout<<"prime["<<i<<"]="<<prime[i]<<endl;
    while(scanf("%d",&n)!=EOF)
    {
        if(n<6)
        {
            printf("0\n");
            continue;
        }
        ans=0;
        //for(int i=0;i)

    }
	return 0;
}

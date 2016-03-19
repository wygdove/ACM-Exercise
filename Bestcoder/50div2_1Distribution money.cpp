#include<iostream>
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

typedef long long LL;
typedef long double real;
typedef vector<int> VI;


/**************************************************************
    Problem:
    Ordering:
    Thought:
    Result:
****************************************************************/


#define INF 0x3f3f3f3f
#define MINN -0x3f3f3f3f
#define MAXN 0x3f3f3f3f
#define MOD 10007
#define NUM 102

map<int,int> mp;

int main()
{
    freopen("bc.in","r",stdin);
    //freopen("out.out","w",stdout);

    int n;
    int x,ma,mai;
    while(scanf("%d",&n)!=EOF)
    {
        mp.clear();
        ma=-INF;mai=-1;

        for(int i=0;i<n;i++)
        {
            scanf("%d",&x);
            mp[x]++;
            if(ma<mp[x])
            {
                ma=mp[x];mai=x;
            }
//printf("mp[%d]=%d\n",x,mp[x]);
        }
        if(n-ma>ma)mai=-1;
        printf("%d\n",mai);
    }

	return 0;
}

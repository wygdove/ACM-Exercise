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

int a[NUM];
map<int,int> mp;

int main()
{
    freopen("new.in","r",stdin);
    //freopen("out.out","w",stdout);

    int T;
    int n;
    scanf("%d",&T);
    while(T--)
    {
        mp.clear();

        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            mp[a[i]]++;
        }
        bool bl=true;
        for(int i=0;i<n;i++)
        {
            if(mp[a[i]]%2!=0)
            {
                bl=false;
                break;
            }
        }
        if(bl) printf("Good job!!\n");
        else printf("What a pity!\n");
    }

	return 0;
}

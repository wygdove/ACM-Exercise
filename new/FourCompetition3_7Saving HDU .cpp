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

struct XHD
{
    int p;
    int m;
    double pm;
}x[NUM+10];

int cmp( const void *a ,const void *b)
{
	return (*(XHD *)a).p < (*(XHD *)b).p ? 1 : -1;
}

int main()
{
    freopen("new.in","r",stdin);

    int v,n;
    int ans;
    while(scanf("%d",&v) && v)
    {
        ans=0;

        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d%d",&x[i].p,&x[i].m);
            //x[i].pm=(double)(x[i].p/x[i].m);
            ///Ñ½Ñ½£¬pmÊÇµ¥¼Û
        }
        qsort(x,n,sizeof(x[0]),cmp);
        for(int i=0;i<n;i++)
        {
            if(v>=x[i].m)
            {
                ans+=x[i].p*x[i].m;
                v-=x[i].m;
            }
            else
            {
                ans+=x[i].p*v;
                break;
            }
        }
        printf("%d\n",ans);
    }

	return 0;
}

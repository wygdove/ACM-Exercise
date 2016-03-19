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
#define NUM 300008

int n,m;
struct Edge
{
    int u,v;
    int dir;
}e[NUM];
int id[NUM];
int od[NUM];

int main()
{
    freopen("hdu.in","r",stdin);
    //freopen("out.out","w",stdout);

    int T;
    int a,b;
    scanf("%d",&T);
    while(T--)
    {
        memset(e,0,sizeof(e));
        memset(id,0,sizeof(id));
        memset(od,0,sizeof(od));

        scanf("%d%d",&n,&m);
        for(int i=0;i<m;i++)
        {
            scanf("%d%d",&a,&b);
            e[i].u=a;e[i].v=b;
            if(id[a]-od[a]>=1)
            {
                e[i].dir=1;
                od[a]++;id[b]++;
            }
            else
            {
                e[i].dir=0;
                id[a]++;od[b]++;
            }
        }
//        bool bl=true;
//        for(int i=1;i<=n;i++)
//        {
//            if(abs(id[i]-od[i])>1)
//            {
//                bl=false;
//                break;
//            }
//        }
//        if(!bl) printf("-1\n");
//        else
            for(int i=0;i<m;i++) printf("%d\n",e[i].dir);
printf("\n");
    }


    return 0;
}

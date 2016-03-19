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


#define INF 0x3f3f3f3f
#define MINN -0x3f3f3f3f
#define MAXN 0x3f3f3f3f
#define MOD 10007
#define NUM 100

struct Sample
{
    int id;
    int g;
    int ranki;
}s[NUM];

//按照data的值从小到大将结构体排序
int cmp( const void *a ,const void *b)
{
	return (*(Sample *)a).g < (*(Sample *)b).g ? 1 : -1;
}

int main()
{
    freopen("Bestcoder.in","r",stdin);
    //freopen("hdu.out","w",stdout);

    int T=0;
    int n;
    int temp;
    scanf("%d",&T);
    while(T--)
    {
        memset(s,0,sizeof(s));

        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            s[i].id=(i+1);
            for(int j=0;j<3;j++)
            {
                scanf("%d",&temp);
                s[i].g=s[i].g>temp?s[i].g:temp;
            }
        }
//for(int i=0;i<n;i++)printf("%d ",s[i].g);printf("\n");
        qsort(s,n,sizeof(s[0]),cmp);

        for(int i=0;i<n;i++)
            s[i].ranki=i+1;
        for(int i=1;i<=n;i++)
        {
            if(i!=1) printf(" ");
            for(int j=0;j<n;j++)
                if(s[j].id==i){printf("%d",s[j].ranki);break;}
        }
        printf("\n");
    }

	return 0;
}

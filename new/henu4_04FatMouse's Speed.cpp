#pragma comment(linker, "/STACK:1024000000,1024000000")
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


#define mems0(s)  memset(s,0,sizeof(s))
#define mems_1(s) memset(s,-1,sizeof(s))
#define memsINF(s) memset(s,INF,sizeof(s))
#define memsch(ch) memset(ch,'\0',sizeof(ch))

#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1


/**************************************************************
    Problem:
    Ordering:
    Thought:
    Result:
    Author: wygdove
****************************************************************/


const double eps = 1e-9;
const double pi=acos(-1.0);
#define INF 0x3f3f3f3f
#define MINN -0x3f3f3f3f
#define MAXN 0x3f3f3f3f
#define MOD 10007
#define NUM 1008

struct Sample
{
    int id;
    int w,s;
}m[NUM],m2[NUM];
int n;
int a[NUM],b[NUM];


//按照x从小到大排序，当x相等时按照y从大到小排序
int cmp( const void *a , const void *b )
{
	struct Sample *c=(Sample *)a;
	struct Sample *d=(Sample *)b;
	if(c->w!=d->w)return c->w - d->w;
	else return d->s - c->s;
}

int main()
{
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);

    freopen("new.in","r",stdin);
    //freopen("out.out","w",stdout);

    int cnt=0;
    while(scanf("%d%d",&m[cnt].w,&m[cnt].s)!=EOF)
    {
        m[cnt].id=cnt;
        cnt++;
    }
    n=cnt;
    qsort(m,n,sizeof(m[0]),cmp);
//for(int i=0;i<n;i++)printf("%d %d %d\n",m[i].w,m[i].s,m[i].id+1);
//for(int i=n-1;i>=0;i--)printf("%d %d %d\n",m[i].w,m[i].s,m[i].id+1);



    fclose(stdin);
    fclose(stdout);
	return 0;
}

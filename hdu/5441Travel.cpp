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

#define mes0(s)  memset(s,0,sizeof(s))
#define mes_1(s) memset(s,-1,sizeof(s))
#define mesINF(s) memset(s,INF,sizeof(s))

#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1


/**************************************************************
    Problem:
    Ordering:
    Thought:
    Result:
****************************************************************/


const double eps = 1e-9;
const double pi=acos(-1.0);
#define INF 0x3f3f3f3f
#define MINN -0x3f3f3f3f
#define MAXN 0x3f3f3f3f
#define MOD 10007
#define NUM 100008


//struct Edge
//{
//    int u,v,w;
//    Edge(int u,int v,int w):u(u),v(v),w(w){}
//    friend bool operator <(const Edge &x,const Edge &y)
//    {
//        return x.w<y.w;
//    }
//};

struct Edge
{
    int u,v,w;
    LL cx;
}e[NUM];
int n,m,q;
int parent[NUM],rankx[NUM];

bool cmp(Edge a,Edge b){return a.w<b.w;}

void init()  //初始化
{
	int i;
	for(i=1;i<NUM;i++)
	{
		parent[i]=i;
		rankx[i]=1;
	}
}
int findx(int x) //查找
{
	if(x!=parent[x])
		parent[x]=findx(parent[x]);
	return parent[x];
}
void uniont(int x,int y) //合并
{
	x=findx(x),y=findx(y);
	if(x!=y)
	{
		if(rankx[x]<rankx[y])
		{
			parent[x]=y;
			rankx[y]+=rankx[x];
		}
		else
		{
			parent[y]=x;
			rankx[x]+=rankx[y];
		}
	}
}


int findcx(int c)
{
    int left=1,right=m,mid;
    while(left<=right)
    {
        mid=(left+right)>>1;
        if(c<e[mid].w)right=mid-1;
        else left=mid+1;
    }
    if(c<e[mid].w)mid--;
    return mid;
}

int main()
{
	cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);

    freopen("hdu.in","r",stdin);
    //freopen("out.out","w",stdout);

    int T;
    int a,b,c;
    LL last,now;
    scanf("%d",&T);
    while(T--)
    {
        memset(e,0,sizeof e);

        scanf("%d%d%d",&n,&m,&q);
        for(int i=1;i<=m;i++)
        {
            scanf("%d%d%d",&a,&b,&c);
            e[i].u=a;e[i].v=b;e[i].w=c;
        }

        sort(e+1,e+m+1,cmp);
        init();
        for(int i=1;i<=m;i++)
        {
            a=findx(e[i].u);b=findx(e[i].v);
            if(a==b) e[i].cx=e[i-1].cx;
            else
            {
                e[i].cx=e[i-1].cx+rankx[a]*rankx[b]*2;
                uniont(e[i].u,e[i].v);
            }

//            if(a==b){e[i].cx=e[i-1].cx;continue;}
//
//            last=1LL*rankx[a]*(rankx[a]-1)+1LL*rankx[b]*(rankx[b]-1);
//            uniont(e[i].u,e[i].v);
//            a=findx(e[i].u);
//            now=1LL*rankx[a]*(rankx[a]-1);
//
//            if(i>0) e[i].cx=e[i-1].cx-last+now;
//            else e[i].cx=now;
        }
//for(int i=0;i<m;i++)printf("%d-%d : %d\t%d\n",e[i].u,e[i].v,e[i].w,e[i].cx);

        while(q--)
        {
            scanf("%d",&c);
            c=findcx(c);
            printf("%I64d\n",e[c].cx);
        }

    }

	return 0;
}

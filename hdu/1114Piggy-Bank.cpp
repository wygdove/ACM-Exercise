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
#define NUM 1000002

int p[NUM];
int w[NUM];
int f[NUM];

int main()
{
    freopen("hdu.in","r",stdin);
    //freopen("out.out","w",stdout);

	int t;
	int E,F;
	int N;
	scanf("%d",&t);
	while(t--)
	{
  		memset(f,INF,sizeof(f));
  		memset(p,0,sizeof(p));
  		memset(w,0,sizeof(w));

		scanf("%d%d%d",&E,&F,&N);
		for(int i=0;i<N;i++)
            scanf("%d%d",&p[i],&w[i]);

		f[0]=0;
		for(int i=0;i<N;i++)
		{
			for(int j=w[i];j<=F-E;j++)
			{
				f[j]=min(f[j],f[j-w[i]]+p[i]);
			}
		}

		if(f[F-E]==INF)
            printf("This is impossible.\n");
		else
            printf("The minimum amount of money in the piggy-bank is %d.\n",f[F-E]);
	}
	return 0;
}
























/*
#include<iostream>
using namespace std;

struct coin
{
	int p;
	int w;
}c[510];

int f[510];

int min(int a,int b)
{
	return a<b?a:b;
}

int main()
{
	int t;
	int E,F;
	int N;
	int temp;
	int i,j;
	cin>>t;
	while(t--)
	{
		memset(f,0,sizeof(f));

		cin>>E>>F;
		cin>>N;
		for(i=1;i<=N;i++)
			cin>>c[i].p>>c[i].w;

		for(i=1;i<=N;i++)
			temp+=c[i].w;
		if(temp>F-E)
		{
			cout<<"This is impossible.\n";
			continue;
		}

		for(i=1;i<=N;i++)
		{
			for(j=F-E;j>c[i].w;j--)
			{
				f[j]=min(f[j],f[j-c[i].w]+c[i].p);
			}
		}

		cout<<"The minimum amount of money in the piggy-bank is "<<f[F-E]<<".\n";
	}
	return 0;
}
*/

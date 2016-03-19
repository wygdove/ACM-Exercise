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
#define NUM 100002

int a[NUM];
int n;
int sum,b,e,maxn,temp;
///区间最大和hdu103
void RMS()
{
    sum=0;
    maxn=-INF;
    b=1;e=n;temp=1;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
        if(maxn<sum)
        {
            maxn=sum;
            b=temp;
            e=i;
        }
        if(sum<0)
        {
            sum=0;
            temp=i+1;
        }
    }
}


int main()
{
    freopen("hdu.in","r",stdin);
    //freopen("out.out","w",stdout);

    int T;
    scanf("%d",&T);
    for(int cnt=1;cnt<=T;cnt++)
    {
        scanf("%d",&n);
        RMS();
        if(cnt!=1)printf("\n");
        printf("Case %d:\n%d %d %d\n",cnt,maxn,b,e);
	}

	return 0;
}

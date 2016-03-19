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
#define NUM 100000

int a[NUM+10];
int dp[NUM+10];

int main()
{
    freopen("hdu.in","r",stdin);

    int T=0;
    int N;
    int s,e;
    int cnt=0;
    scanf("%d",&T);
    while(T--)
    {
        s=0;e=0;
        memset(a,0,sizeof(a));
        memset(dp,0,sizeof(dp));

        if(cnt!=0) printf("\n");
        printf("Case %d:\n",++cnt);

        scanf("%d",&N);
        for(int i=0;i<N;i++)
            scanf("%d",&a[i]);

        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                dp[j]=max(dp[j],dp[j]+a[i]);
            }
        }

        printf("%d\n",dp[N-1]);
    }

    return 0;
}

/*
//没看清题意，心急做题
//wrong answer
#include<iostream>
using namespace std;

int a[100010];
int dp[100010];

int max(int a,int b)
{
	return a>b?a:b;
}

int main()
{
	int T;
	int N;
	int count;
	int max1,max2;
	int begin,end;
	int i;
	while(cin>>T)
	{
		count=1;
		while(T-- && count++)
		{
			cin>>N;
			for(i=0;i<N;i++)
				cin>>a[i];
/*
			//看清题意，与 1231最大连续子序列 区别
			max1=-1e10;
			for(i=0;i<N;i++)
			{
				dp[i]=max(dp[i-1]+a[i],a[i]);
				if(max1<dp[i])
				{
					max1=dp[i];
					end=i;
				}
			}

			for(max2=0,i=end;i>=0;i--)
			{
				max2+=a[i];
				if(max2==max1)
				{
					begin=i;
					break;
				}
			}
* /
			cout<<"Case "<<count<<":\n";
			cout<<max1<<" "<<begin<<" "<<end<<endl;
			if(count!=T)
				cout<<endl;
		}
	}
	return 0;
}
*/

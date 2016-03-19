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
#define NUM 5000
#define MAXN 100

int JudgePrime(int n)
{
   int i,flag=1;
    for (i=2;i<=sqrt(n);i++)
    if (n%i==0) {flag=0;break;}
    if (flag==1) return 1; else return 0;
}


int main()
{
    freopen("new.in","r",stdin);

    int n=0;
    int a;
    int temp;
    int minp;
    int ans;
    while(scanf("%d",&n)!=EOF)
    {
        ans=0;
        minp=0;
        while(n--)
        {
            scanf("%d",&a);
            if(JudgePrime(a))
            {
                if(minp<a){minp=a;ans=a;}
                continue;
            }
            temp=a;
            for(int i=2;i<=(int)(a/2)+1;i++)
            {
                if(a%i!=0)continue;
                else
                {
                    a/=i;
                    if(JudgePrime(a))
                    {
                        if(minp<a){minp=a;ans=temp;}
                        break;
                    }
                }
            }
        }
        printf("%d\n",ans);
    }

	return 0;
}

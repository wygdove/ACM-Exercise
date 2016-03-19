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

#define NUM 100
#define MOD 10007



int main()
{
    freopen("new.in","r",stdin);

    int T=0;
    int a,b;
    int sum;
    int ans;
    int temp;
    scanf("%d",&T);
    while(T--)
    {
        ans=0;

        scanf("%d %d",&a,&b);
        if(a>b)
        {
            temp=a;a=b;b=temp;
        }
        for(;a<=b;a++)
        {
            sum=0;
            for(int i=1;i<a;i++)
            {
                if(a%i==0)sum+=i;
            }
            if(sum==a)ans++;
        }
        printf("%d\n",ans);

    }
	return 0;
}

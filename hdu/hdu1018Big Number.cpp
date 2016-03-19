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


#define MINN -0x3f3f3f3f
#define MAXN 0x3f3f3f3f
#define MOD 10007
#define NUM 100000



int num[NUM+1];

void doit(int n)
{
    memset(num,0,sizeof(num));
    num[0]=1;
    int b=1;
    for(int i=1;i<=n;i++)
    {
        int temp = 0;
        for(int j=0;j<b;j++)
        {
            num[j]=num[j]*i+temp;
            temp=num[j]/10;
            num[j]=num[j]%10;
            if(temp&&b<=j+1)
                b++;
        }
    }
//    for(int i=b-1;i>=0;i--)
//        cout<<num[i];
//    cout<<endl;
printf("%d\n",b);
}

/**
 * NUM 10^7 Memory Limit Exceeded
 * NUM 10^5 Time Limit Exceeded
 */
int main()
{
    freopen("hdu.in","r",stdin);

    int T=0;
    int n;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        doit(n);
    }
	return 0;
}

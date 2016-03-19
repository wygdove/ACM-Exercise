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
#define NUM 1000

long a[NUM+2];

int main()
{
//    freopen("BestCoder.in","r",stdin);

    int T=0;
    int n;
    long sum1,sum2;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        for(int i=1; i<=n; i++)
            scanf("%ld",&a[i]);
//        if(n==1 || n==2 || n==3) {printf("No\n");continue;}
//        if(n==2 && a[1]==a[2]) {printf("No\n");continue;}
//        else if(n==2 && a[1]!=a[2]) {printf("Yes\n");continue;}
        sum1=0;
        sum2=0;
        for(int i=1; i<=n; i++)
        {
//            sum1+=a[i];
//            sum2+=a[++i];
if(i%2==0) sum1+=a[i];
else sum2+=a[i];
        }
//cout<<"sum1="<<sum1<<" sum2="<<sum2<<endl;
        if(sum1!=sum2)
            printf("No\n");
        else
        {
            bool bl=false;
//            for(int i=1; i<=n/2; i++)
//                if(a[i]!=a[n-i+1]) bl=true;
            for(int i=1,j=n;i<=n,j>=1;i++,j--)
                if(a[i]!=a[j])bl=true;
            if(bl) printf("Yes\n");
            else printf("No\n");
        }
    }

    return 0;
}

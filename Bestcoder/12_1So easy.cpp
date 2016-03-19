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
    Result:
****************************************************************/

#define NUM 100
    __int64 n;

__int64 a[101];
__int64 b[101];

int cmp(const void* a,const void* b)
{
	return *(int*)a - *(int*)b;
}

int main()
{
    freopen("Bestcoder.in","r",stdin);

    int n;
    bool bl;
    int i;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%I64d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%I64d",&b[i]);
        }

        qsort(a,n,sizeof(a[0]),cmp);
        qsort(b,n,sizeof(b[0]),cmp);

        for(i=0;i<n;i++)
        {
            if(a[i]==a[i+1])
                a[i]=0;
            if(b[i]==b[i+1])
                b[i]=0;
        }

        qsort(a,n,sizeof(a[0]),cmp);
        qsort(b,n,sizeof(b[0]),cmp);

        bl=true;
        for(i=0;i<n;i++)
        {
            if(a[i]==0 || b[i]==0)
                continue;
            if(a[i]!=b[i])
            {
                printf("NO\n");
                bl=false;
                break;
            }
        }
        if(bl)
            printf("YES\n");
    }


	return 0;
}

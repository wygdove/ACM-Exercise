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

#define NUM 100

int a[110];
int b[110];

int cmp(const void* a,const void* b)
{
	return *(int*)a - *(int*)b;
}

int main()
{
    freopen("hdu.in","r",stdin);

    int n;
    int i;
    int ag;
    int bg;
    while(scanf("%d",&n) && n)
    {
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        ag=0;
        bg=0;

        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
            scanf("%d",&b[i]);

        qsort(a,n,sizeof(a[0]),cmp);
        qsort(b,n,sizeof(b[0]),cmp);

        for(i=0;i<n;i++)
        {
            if(a[i]>b[i])
                ag+=2;
            else if(a[i]==b[i])
            {
                ag+=1;
                bg+=1;
            }
            else if(a[i]<b[i])
                bg+=2;
        }
        cout<<ag<<" vs "<<bg<<endl;
    }

	return 0;
}

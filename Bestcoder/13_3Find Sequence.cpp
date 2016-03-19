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
    Result:
****************************************************************/

#define NUM 4194304

int a[NUM];

int cmp(const void* a,const void* b)
{
	return *(int*)a - *(int*)b;
}

int main()
{
    freopen("Bestcoder.in","r",stdin);

    int T=0;
    int n,m;
    int i;
    int ans;
    bool bl;

    scanf("%d",&T);
    //cin>>T;
//cout<<"T="<<T<<endl;
    while(T--)
    {
        memset(a,0,sizeof(a));
        bl=false;
        ans=0;
        n=0;
        m=0;

        scanf("%d%d",&n,&m);
//cout<<"n="<<n<<endl;
        if(n==1)
        {
            printf("1\n");
            continue;
        }

        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]==0)
                bl=true;
        }

        qsort(a,n,sizeof(a[0]),cmp);

        for(i=0;i<=n;i++)
        {
            if(a[i]==a[i+1])
                a[i]=0;
        }

        qsort(a,n,sizeof(a[0]),cmp);

        for(i=1;i<=n;i++)
        {
            if(a[i]!=0)
                ans++;
        }

        if(bl)
            printf("%d\n",ans+1);
        else
            printf("%d\n",ans);
    }

	return 0;
}

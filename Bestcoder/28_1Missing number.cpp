#pragma comment(linker, "/STACK:1024000000,1024000000")
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


#define INF 0x3f3f3f3f
#define MINN -0x3f3f3f3f
#define MAXN 0x3f3f3f3f
#define MOD 10007
#define NUM 1002

int a[NUM];
bool bl[NUM+2];

int main()
{
    freopen("Bestcoder.in","r",stdin);
    //freopen("hdu.out","w",stdout);

    int T=0;
    int n;
    scanf("%d",&T);
    while(T--)
    {
        memset(a,0,sizeof(a));
        memset(bl,false,sizeof(bl));

        scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        if(n==1)
        {
            if(a[0]>2) printf("%d %d\n",a[0]-2,a[0]-1);
            if(a[0]==1) printf("2 3\n");
            if(a[0]==2) printf("1 3\n");
            continue;
        }
        sort(a,a+n);
        for(int i=0;i<n+2;i++)
            bl[a[i]-a[0]]=true;

        if(bl[n]==false && bl[n+1]==false)
        {
            if(a[0]>2) printf("%d %d\n",a[0]-2,a[0]-1);
            else if(a[0]==2) printf("%d %d\n",a[0]-1,a[n-1]+1);
            else if(a[0]==1) printf("%d %d\n",a[n-1]+1,a[n-1]+2);
            continue;
        }

        int cnt=0;
        for(int i=0;i<n+2;i++)
        {
            if(cnt==2) break;
            if(!bl[i])
            {
                if(cnt==1) printf(" ");
                cnt++;
                printf("%d",a[0]+i);
            }
        }
        printf("\n");
    }

	return 0;
}
/**
1 2
2 3
2 5
7 8
6 7
*/

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

#define NUM 100
#define MOD 10007

/**************************************************************
    Problem:
    Ordering:
    Thought:
    Follow: kuangbin
    Link:
    Result:
****************************************************************/


bool bl[51][51];

int main()
{
    freopen("Bestcoder.in","r",stdin);

    int n,m;
    int a,b;
    int temp;
    int i,j;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        memset(bl,false,sizeof(bl));
        temp=0;

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%d",temp);
                if(temp)
                    bl[i][j]=true;
                a=a>i?a:i;
                b=b>j?b:j;
            }
        }

        i=0;j=0;
        while(i<n && j<m)
        {

        }
    }

	return 0;
}

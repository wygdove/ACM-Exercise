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



int main()
{
    freopen("hdu.in","r",stdin);

    int a,b;
    int temp;
    int i;
    while(scanf("%d%d",&a,&b)!=EOF && a+b)
    {
        temp=1;
        for(i=1;i<=b;i++)
        {
            temp=(temp*a)%1000;
        }
        printf("%d\n",temp);
    }

	return 0;
}

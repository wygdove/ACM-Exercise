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

#define NUM 1000
#define MOD 10007

char a[NUM+10];
int b;
int bigModInt(char *a,int b)
{
    int temp=0;
    for(int i=0;i<strlen(a);i++)
    {
        temp=temp*10+(a[i]-'0');
        temp%=b;
    }
    return temp;
}

int main()
{
    freopen("new.in","r",stdin);

    while(scanf("%s %d",&a,&b)!=EOF)
    {
        printf("%d\n",bigModInt(a,b));
    }

	return 0;
}

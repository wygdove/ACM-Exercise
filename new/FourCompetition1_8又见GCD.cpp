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


int gcd(int a, int b)
{
    int t;
    while(b)
    {
        t = a % b; a = b; b = t;
    }
    return a;
}


int main()
{
    freopen("new.in","r",stdin);

    int n;
    int a,b;
    int i;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        for(i=1;i<a;i++)
        {
            if(gcd(a,i)==b && i!=b)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}

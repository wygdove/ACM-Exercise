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
    Ordering: BigNum
    Thought:
    Result: Accepted
****************************************************************/

#define MOD 10007
#define NUM 1000
#define MAXN 100

string a[NUM+2];

string sum(string a,string b)
{
    if(a.length()>b.length())   //补齐位
        b=string(a.length()-b.length(),'0')+b;
    else
        a=string(b.length()-a.length(),'0')+a;
    int temp=0;
    for(int i=a.length()-1;i>=0;i--)  //模拟手算
    {
        temp+=a[i]-'0'+b[i]-'0';
        a[i]=temp%10+'0';
        temp/=10;
    }
    return temp?'1'+a:a;   //是否进位
}

void doit()
{
    a[1]='1';a[2]='1';
    for(int i=3;i<NUM+2;i++)
    {
        a[i]=sum(a[i-1],a[i-2]);
    }
}

int main()
{
    freopen("hdu.in","r",stdin);

    int T=0;
    int n;
    doit();
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        //printf("%s\n",a[n]);
        cout<<a[n]<<endl;
    }
	return 0;
}

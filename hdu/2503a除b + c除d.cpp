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
    freopen("hdu.in","r",stdin);

    int t;
    int a,b,c,d;
    int e,f;
    int gcdef;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        e=b*c+a*d;
        f=b*d;
        gcdef=gcd(e,f);
//cout<<"e="<<e<<" f="<<f<<endl;
//cout<<"gcdef="<<gcdef<<endl;
        if(gcdef==1)
            printf("%d %d\n",e,f);
        else
            printf("%d %d\n",e/gcdef,f/gcdef);
    }

	return 0;
}

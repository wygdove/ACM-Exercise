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

char a[52];
string b;

int main()
{
    freopen("hdu.in","r",stdin);

    int n;
    int i;
    int len;
    scanf("%d",&n);
    while(n--)
    {
        cin>>a>>b;
        len=strlen(a);
//cout<<"a="<<a<<endl;
//cout<<"b="<<b<<endl;
//cout<<"alen="<<len<<endl;
        for(i=0;i<len;i++)
        {
            if(i==len/2)//len/2+1
                cout<<b;
            cout<<a[i];
        }
        cout<<endl;
    }

	return 0;
}

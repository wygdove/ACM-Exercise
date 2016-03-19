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

    int t;
    LL a,b;
    LL sum;
    int cnt=1;
    scanf("%d",&t);
    while(t--)
    {
        cin>>a>>b;
        sum=0;
        for(a;a<=b;a++)
        {
            sum+=a*a*a;
        }
        cout<<"Case #"<<cnt<<": "<<sum<<endl;
        cnt++;
    }

	return 0;
}

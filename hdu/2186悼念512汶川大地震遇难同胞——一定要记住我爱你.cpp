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

    int C;
    int n;
    int a,b,c;
    int ans;
    scanf("%d",&C);
    while(C--)
    {
        scanf("%d",&n);

        a=n/2;
        b=(n-a)*2/3;
        c=n-a-b;

        ans=0;
        if(a<=10)
            ans+=1;
        else
        {
            if(a%10==0)
                ans+=a/10;
            else
                ans+=a/10+1;
        }
        if(b<=10)
            ans+=1;
        else
        {

            if(b%10==0)
                ans+=b/10;
            else
                ans+=b/10+1;
        }
        if(c<=10)
            ans+=1;
        else
        {

            if(c%10==0)
                ans+=c/10;
            else
                ans+=c/10+1;
        }
        cout<<ans<<endl;
    }

    return 0;
}

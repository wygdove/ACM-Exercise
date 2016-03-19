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

    double x1,x2,y1,y2;
    double ans;
    while(cin>>x1>>y1>>x2>>y2)
    {

        ans=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        printf("%.2lf\n",ans);
    }

	return 0;
}

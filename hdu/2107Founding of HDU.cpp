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

    int n;
    int temp;
    int ans;
    while(scanf("%d",&n)!=EOF && n)
    {
        ans=0;
        while(n--)
        {
            scanf("%d",&temp);
            if(ans<temp)
                ans=temp;
        }
        cout<<ans<<endl;
    }

	return 0;
}


/*
//wrong answer
#include<iostream>
using namespace std;

int a[110];

int main()
{
	int n;
	int max;
	int temp;
	int i;
	while(cin>>n && n)
	{
		for(i=0;i<n;i++)
		{
			cin>>temp;
			max=max>temp?max:temp;
		}
		cout<<max<<endl;
	}
	return 0;
}
*/

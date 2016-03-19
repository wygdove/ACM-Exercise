#include<iostream>
using namespace std;

int a[110][110];

int main()
{
	int n;
	int k;
	int i,j;
	while(cin>>n>>k && n+k)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				cin>>a[i][j];
			}
		}

		if(n==k)
		{
			cout<<"-1\n";
			continue;
		}

		for(
	}
	return 0;
}
#include<iostream>
using namespace std;

char s[110];
int d[100];
int c[100];

int dp[100];

int min(int a,int b)
{
	return a<b?a:b;
}

int main()
{
	int t;
	int n;
	int i,j;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
			cin>>s[i]>>d[i]>>c[i];

		memset(dp,0,sizeof(dp));

		for(i=0;i<n;i++)
		{
			for(j=d[i];j>=c[i];j--)
				f[j]=min(f[j],f[j-c[i]]);
		}

		for(i=0;i<n;i++)
	}
	return 0;
}
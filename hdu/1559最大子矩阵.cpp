#include<iostream>
using namespace std;

int a[1010][1010];

int main()
{
	int t;
	int m,n,x,y;
	int sum;
	int max;
	int i,j;
	cin>>t;
	while(t--)
	{
		cin>>m>>n>>x>>y;
		for(i=1;i<=m;i++)
			for(j=1;j<=n;j++)
				cin>>a[i][j];
		max=0;
		for(i=1;i<=m;i++)
		{
			for(j=1;j<=n;j++)
			{
				a[i][j]+=a[i-1][j]+a[i][j-1]-a[i-1][j-1];
				if(i>=x && j>=y)
				{
					sum=a[i][j]-a[i-x][j]-a[i][j-y]+a[i-x][j-y];
					if(max<sum)
						max=sum;
				}
			}
		}
		
		cout<<max<<endl;
	}
	return 0;
}

















/*
#include<iostream>
using namespace std;

int a[1010][1010];
int b[1010];

int main()
{
	int t;
	int m,n,x,y;
	int sum;
	int max;
	int i,j,p,q;
	cin>>t;
	while(t--)
	{
		cin>>m>>n>>x>>y;
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				cin>>a[i][j];

		sum=0;
		max=0;

		for(i=0;i<m-x;i++)	//wrong
		{
			for(j=0;j<n-y;j++)
			{
				for(p=i;p<i+x;p++)
				{
					for(q=j;q<j+y;q++)
					{
						sum+=a[p][q];
						if(max<sum)
							max=sum;
					}
				}
			}
		}

		cout<<max<<endl;
	}
	return 0;
}
*/

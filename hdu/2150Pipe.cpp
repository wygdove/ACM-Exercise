#include<isotream>
using namespace std;



int main()
{
	int n;
	int k;
	while(cin>>n)
	{
	}
	return 0;
}































/*
#include<iostream>
using namespace std;

int a[1010],b[1010];

struct Point
{
	int x;
	int y;
}p[35][110];

int main()
{
	int n;
	int k;
	int i,j;
	while(cin>>n)
	{
		for(i=0;i<n;i++)
		{
			cin>>k;
			for(j=0;j<k;j++)
				cin>>a[j]>>b[j];
			for(j=0;j<k-1;j++)
			{
				p[i][j].x=a[j+1]-a[j];
				p[i][j].y=b[j+1]-b[j];
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<k;j++)
			{
				if(p[i][j].x*p[i+1][j].y-p[i+1][j].x*p[i][j].y<0 || p[i+1][j].x*p[i][j].y-p[i][j].x*p[i+1][j].y<0)
				{
					cout<<"Yes\n";
					return 0;
				}
				else
				{
					cout<<"No\n";
					return 0;
				}
			}
		}
	}
	return 0;
}
*/



/*
#include<iostream>
using namespace std;

int x[35][110],y[35][110];

int main()
{
	int n;
	int k;
	int i,j;
	while(cin>>n)
	{
		cin>>k;
		for(i=0;i<n;i++)
		{
			for(j=0;j<k;j++)
				cin>>x[i][j]>>y[i][j];
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<k;j++)
				if(x[i][j]
		}
	}
	return 0;
}
*/
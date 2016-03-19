#include<iostream>
using namespace std;

int a[51][51];

void Set()
{
	int i,j;
	for(i=1;i<=50;i++)
	{
		a[i][1]=1;
		a[i][i]=1;
	}
	for(i=3;i<=50;i++)
	{
		for(j=2;j<i;j++)
			a[i][j]=a[i-1][j-1]+a[i-1][j];
	}
}

int main()
{
	int n;
	//bool bl=false;
	int i,j;
	Set();
	while(cin>>n)
	{
		//if(bl)
		//	cout<<endl;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
			{
				cout<<a[i][j];
				if(j!=i)
					cout<<" ";
				else
					cout<<endl;
			}
		}
		cout<<endl;
		//bl=true;
	}
	return 0;
}
#include<iostream>
using namespace std;

int main()
{
	int n,m;
	int i,j;
	while(cin>>n)
	{
		while(n--)
		{
			cin>>m;
			for(i=1;i<=m*3;i++)
			{
				for(j=1;j<=m;j++)
				{
					cout<<"HDU";
				}
				cout<<endl;
			}
		}
	}
	return 0;
}
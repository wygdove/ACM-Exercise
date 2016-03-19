#include<iostream>
using namespace std;

int main()
{
	int n;
	int i;
	while(cin>>n)
	{
		for(i=0;i<n;i++)
		{
			int m;
			int a[10];
			int j;
			int sum=0;
			cin>>m;
			for(j=0;j<m;j++)
			{
				cin>>a[j];
				sum+=a[j];
			}
			cout<<sum<<endl;
		}
	}
	return 0;
}
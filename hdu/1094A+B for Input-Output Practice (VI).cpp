#include<iostream>
using namespace std;

int main()
{
	int m;
	while(cin>>m)
	{
		int a[10];
		int j;
		int sum=0;
		for(j=0;j<m;j++)
		{
			cin>>a[j];
			sum+=a[j];
		}
		cout<<sum<<endl;
	}
	return 0;
}
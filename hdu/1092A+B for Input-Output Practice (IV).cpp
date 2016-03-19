#include<iostream>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
		if(n==0)
			return 0;
		else
		{
			int a[10];
			int i;
			int sum=0;
			for(i=0;i<n;i++)
			{
				cin>>a[i];
				sum+=a[i];
			}
			cout<<sum<<endl;
		}
	return 0;
}
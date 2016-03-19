#include<iostream>
using namespace std;

int main()
{
	int n;
	int sum;
	int i;
	while(cin>>n)
	{
		sum=0;
		for(i=0;i<=n/3;i++)
			sum+=(n-3*i)/2+1;
		cout<<sum<<endl;
	}
	return 0;
}
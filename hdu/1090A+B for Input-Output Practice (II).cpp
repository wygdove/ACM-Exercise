#include<iostream>
using namespace std;

int main()
{
	int a,b,n,i;
	while(cin>>n)
	{
		for(i=0;i<n;i++)
		{
			cin>>a>>b;
			cout<<a+b<<endl;
		}
	}
	return 0;
}
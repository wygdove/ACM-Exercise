#include<iostream>
using namespace std;

int main()
{
	int t;
	int a,b;
	while(cin>>t)
	{
		while(t--)
		{
			cin>>a>>b;
			if(a%b==0)
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
	}
	return 0;
}
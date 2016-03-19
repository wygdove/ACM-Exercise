#include<iostream>
using namespace std;

int main()
{
	int n;
	int temp;
	int ans;
	while(cin>>n)
	{
		ans=1;
		while(n--)
		{
			cin>>temp;
			if(temp%2!=0)
				ans*=temp;
		}
		cout<<ans<<endl;
	}
	return 0;
}
#include<iostream>
using namespace std;

int main()
{
	int t;
	char x;
	int y;
	while(cin>>t)
	{
		while(t--)
		{
			cin>>x>>y;
			if(x>='A' && x<='Z')
				cout<<y+(x-'A'+1)<<endl;
			if(x>='a' && x<='z')
				cout<<y-(x-'a'+1)<<endl;
		}
	}
	return 0;
}
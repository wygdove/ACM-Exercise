#include<iostream>
using namespace std;

char a[20];

int main()
{
	int n;
	int i;
	while(cin>>n)
	{
		while(n--)
		{
			cin>>a;
			cout<<"6";
			for(i=6;i<11;i++)
				cout<<a[i];
			cout<<endl;
		}
	}
	return 0;
}
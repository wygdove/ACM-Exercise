#include<iostream>
using namespace std;

int main()
{
	char a;
	int n;
	bool bl=false;
	int i,j;
	while(cin>>a && a!='@')
	{
		cin>>n;
		
		if(bl)
			cout<<endl;

		if(n==1)
		{
			cout<<a<<endl;
			continue;
		}

		for(i=0;i<n-1;i++)
		{
			for(j=1;j<=i+n;j++)
			{
				if(j==n-i || j==n+i)
					cout<<a;
				else
					cout<<" ";
			}
			cout<<endl;
		}
		for(i=1;i<=n*2-1;i++)
			cout<<a;
		cout<<endl;

		bl=true;
	}
	return 0;
}
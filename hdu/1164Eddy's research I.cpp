#include<iostream>
using namespace std;

int main()
{
	int x;
	int i;
	while(cin>>x)
	{
		for(i=2;i<=x;i++)
		{
			if(x<=1)
				break;
			if(x%i==0)
			{
				x=x/i;
				cout<<i;
				if(x>1)
					cout<<"*";
				i=1;
			}
		}
		if(x>1)
			cout<<x<<endl;
		else
			cout<<endl;
	}
	return 0;
}
















/*
//AC
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int x;
	double k;
	int i;
	while(cin>>x)
	{
		k=sqrt((double)x);
		for(i=2;i<=k;i++)
		{
			if(x%i==0)
			{
				cout<<i<<"*";
				x=x/i;
				i=1;
				k=sqrt((double)x);
			}
		}
		cout<<x<<endl;
	}
	return 0;
}
*/
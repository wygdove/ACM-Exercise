#include<iostream>
using namespace std;

int main()
{
	int n;
	int a,b,c;
	int i;
	while(cin>>n)
	{
		for(i=0;i<n;i++)
		{
			cin>>a>>b>>c;
			cout<<"Scenario #"<<i+1<<":\n";
			if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
				cout<<"yes\n";
			else
				cout<<"no\n";
			//if(i!=n-1)
				cout<<endl;
		}
	}
	return 0;
}
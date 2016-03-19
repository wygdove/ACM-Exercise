#include<iostream>
using namespace std;

int main()
{
	int w,h;
	int i,j;
	while(cin>>w>>h)
	{
		cout<<"+";
		for(i=1;i<=w;i++)
			cout<<"-";
		cout<<"+";
		cout<<endl;
		for(i=1;i<=h;i++)
		{
			cout<<"|";
			for(j=1;j<=w;j++)
				cout<<" ";
			cout<<"|";
			cout<<endl;
		}
		cout<<"+";
		for(i=1;i<=w;i++)
			cout<<"-";
		cout<<"+";
		cout<<endl;
		cout<<endl;
	}
	return 0;
}
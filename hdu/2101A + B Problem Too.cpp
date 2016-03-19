#include<iostream>
using namespace std;

int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		if(a+b<86)
			cout<<"no\n";
		else
			if((a+b)%86==0)
				cout<<"yes\n";
			else
				cout<<"no\n";
	}
	return 0;
}
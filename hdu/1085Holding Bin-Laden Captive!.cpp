#include<iostream>
using namespace std;

int main()
{
	int n1,n2,n5;
	while(cin>>n1>>n2>>n5 &&(n1+n2+n5))
	{
		if(n1==0)
			cout<<"1\n";
		else
			if(n2==0)
				cout<<n1+1<<endl;
			else
				if(n1==1 && n2==1)
					cout<<"4\n";
				else
					cout<<n1+n2*2+n5*5+1<<endl;
	}
	return 0;
}
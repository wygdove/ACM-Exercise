//wrong 
#include<iostream>
using namespace std;

int main()
{
	int t;
	int n,a,b;
	int i;
	cin>>t;
	while(t--)
	{
		cin>>n>>b;
		a=n;
		b%=9973;
		for(i=0;;i++)
		{
			a+=9973;
			if(a%b==0)
				break;
		}
		cout<<(a/b)%9973<<endl;
	}
	return 0;
}



/*
#include<iostream>
using namespace std;

int main()
{
	int t;
	long n,a,b;
	cin>>t;
	while(t--)
	{
		cin>>n>>b;
		a=n*9973;	//a=n%9973
		cout<<(a/b)%9973<<endl;
	}
	return 0;
}
*/



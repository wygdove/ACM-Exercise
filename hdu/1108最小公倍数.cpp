#include<iostream>
using namespace std;

int gcd(int a, int b)
{
	int t;
	while(b)
	{ 
		t = a % b; a = b; b = t;
	}
	return a; 
}

int main()
{
	int a,b;
	int c;
	while(cin>>a>>b)
	{
		c=gcd(a,b);
		cout<<a*b/c<<endl;
	}
	return 0;
}



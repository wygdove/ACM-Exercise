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
	while(cin>>a>>b)
	{
		cout<<a+b-gcd(a,b)<<endl;
	}
	return 0;
}

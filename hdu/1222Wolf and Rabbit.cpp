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
	int p;
	int m,n;
	cin>>p;
	while(p--)
	{
		cin>>m>>n;
		if(gcd(m,n)>1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
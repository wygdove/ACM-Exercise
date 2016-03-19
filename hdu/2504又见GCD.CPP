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
	int n;
	int a,b;
	int i; 
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		for(i=1;i<a;i++)
		{
			if(gcd(a,i)==b && i!=b)
			{
				cout<<i<<endl;
				break;
			}
		}
	}
	return 0;
}
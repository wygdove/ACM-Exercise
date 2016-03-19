#include<iostream>
using namespace std;

struct Time
{
	int h;
	int m;
	int s;
}a,b,c;

int main()
{
	int n;
	while(cin>>n)
	{
		while(n--)
		{
			cin>>a.h>>a.m>>a.s>>b.h>>b.m>>b.s;
			c.s=(a.s+b.s)%60;
			c.m=(a.m+b.m+(a.s+b.s)/60)%60;
			c.h=a.h+b.h+(a.m+b.m+(a.s+b.s)/60)/60;

			cout<<c.h<<" "
				<<c.m<<" "
				<<c.s<<endl;
		}
	}
	return 0;
}
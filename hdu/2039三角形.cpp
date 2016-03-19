#include<iostream>
using namespace std;

int main()
{
	int m;
	double a,b,c;	//double!!!!!!题目说正数没说整数,int错误
	int t;
	cin>>m;
	while(m--)
	{
		cin>>a>>b>>c;
		if(a<b)
		{
			t=a;
			a=b;
			b=t;
		}
		if(a<c)
		{
			t=a;
			a=c;
			c=t;
		}
		if(b<c)
		{
			t=b;
			b=c;
			c=t;
		}
		if(a-b<c && b+c>a)	//||
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}


#include<iostream>
using namespace std;

int main()
{
	int m;
	double a,b,c;
	cin>>m;
	while(m--)
	{
		cin>>a>>b>>c;
		if(a+b>c && a+c>b && b+c>a)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
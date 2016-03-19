#include<iostream>
using namespace std;

int main()
{
	int n;
	double temp;
	int a,b,c;
	while(cin>>n && n)
	{
		a=0;
		b=0;
		c=0;
		while(n--)
		{
			cin>>temp;
			if(temp<0)
				a++;
			if(temp==0)
				b++;
			if(temp>0)
				c++;
		}
		cout<<a<<" "<<b<<" "<<c<<endl;
	}
	return 0;
}
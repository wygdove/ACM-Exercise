#include<iostream>
using namespace std;

int main()
{
	int m,n;
	int x,y;
	int t;
	int i;
	while(cin>>m>>n)
	{
		if(m>n)
		{
			t=m;
			m=n;
			n=t;
		}
		x=0;
		y=0;
		for(i=m;i<=n;i++)		//考虑周全，给定m，n限定整数段，不一定m<n!!!!!
		//for(i=m<n?m:n;i<=m>n?m:n;i++)	//Time Limit Exceeded
		{
			if(i%2==0)
				x+=i*i;
			else
				y+=i*i*i;
		}
		cout<<x<<" "<<y<<endl;
	}
	return 0;
}
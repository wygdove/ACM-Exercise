#include<iostream>
using namespace std;

int main()
{
	int n,m;
	int a,b,c;
	bool bl;
	int i;
	while(cin>>n>>m)
	{
		bl=true;
		for(i=n;i<=m;i++)
		{
			a=i/100;
			b=(i%100)/10;
			c=i%10;
			if(i==a*a*a+b*b*b+c*c*c)
			{
				if(!bl)
					cout<<" ";
				cout<<i;//<<" "	//����֮���ÿո����
				bl=false;
			}
		}

		if(bl)
			cout<<"no";
		cout<<endl;	
	}
	return 0;
}
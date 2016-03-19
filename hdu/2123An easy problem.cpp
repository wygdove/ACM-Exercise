#include<iostream>
using namespace std;

int main()
{
	int c;
	int n;
	int i,j;
	while(cin>>c)
	{
		while(c--)
		{
			cin>>n;
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=n;j++)
				{
					cout<<i*j;
					if(j!=n)
						cout<<" ";
				}
				cout<<endl;
			}
		}
	}
	return 0;
}
#include<iostream>
using namespace std;

long a[10000];

void Set()
{
	int i;
	a[0]=0;
	for(i=1;i<10000;i++)
		a[i]=a[i-1]+i*i*i;
}

int main()
{
	int t;
	int x;
	int i;
	Set();
	while(cin>>t)
	{
		while(t--)
		{
			cin>>x;
			for(i=0;i<10000;i++)
			{
				if(x>a[i] && x<=a[i+1])
				{
					cout<<i+1<<endl;
					break;
				}
			}
		}
	}
	return 0;
}
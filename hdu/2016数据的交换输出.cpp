#include<iostream>
using namespace std;

int a[110];

int main()
{
	int n;
	int min;
	int i;
	while(cin>>n && n)
	{
		memset(a,0,sizeof(a));
		min=1e10;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(min>a[i])
				min=a[i];
		}
		cout<<min;
		for(i=1;i<n;i++)
		{
			if(a[i]!=min)
				cout<<" "<<a[i];
			else
				cout<<" "<<a[0];
		}
		cout<<endl;

	}
	return 0;
}
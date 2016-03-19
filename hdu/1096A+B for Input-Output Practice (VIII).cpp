#include<iostream>
using namespace std;
int main()
{
    int n,m;
	int i,j;
	int a[100];
	int sum;
    while(cin>>n)
    {
		for(i=0;i<n;i++)
		{
			cin>>m;
			sum=0;
			for(j=0;j<m;j++)
			{
				cin>>a[j];
				sum+=a[j];
			}
			cout<<sum<<endl;
			if(i!=n-1)
				cout<<endl;
		}
	}
	return 0;
}

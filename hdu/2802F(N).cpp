#include<iostream>
using namespace std;

int a[10000];

int main()
{
	memset(a,0,sizeof(a));
	int i;
	a[1]=1;
	a[2]=7;
	for(i=3;i<=4018;i++)
	{
		a[i]=a[i-2]-(i-1)*(i-1)*(i-1)+i*i*i;
		if(a[i]>2009)
			a[i]=a[i]%2009;
	}

	int n;
	while(cin>>n && n)
	{
		cout<<a[n%4018]<<endl;
	}
	return 0;
}
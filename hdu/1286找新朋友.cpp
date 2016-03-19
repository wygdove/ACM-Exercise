//如果i和n的最大公约数大于1
//i的倍数和n的最大公约数也大于1
#include<iostream>
using namespace std;

int a[33000];

int main()
{
	int cn;
	int n;
	int ans;
	int i,j;
	cin>>cn;
	while(cn--)
	{
		cin>>n;
		memset(a,0,sizeof(a));
		ans=0;
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			{
				for(j=1;i*j<n;j++)
					a[i*j]=1;
			}
		}
		for(i=0;i<n;i++)
			if(a[i])
				ans++;
		cout<<n-ans-1<<endl;
	}
	return 0;
}












/*
//Time Limit Exceeded
#include<iostream>
using namespace std;

int gcd(int a, int b)
{
	int t;
	while(b)
	{ 
		t = a % b; a = b; b = t;
	}
	return a; 
}

int main()
{
	int cn;
	long n;
	long ans;
	int i;
	cin>>cn;
	while(cn--)
	{
		cin>>n;
		ans=0;
		for(i=2;i<n;i++)
		{
			if(gcd(i,n)>1)
				ans++;
		}
		cout<<n-ans-1<<endl;
	}
	return 0;
}
*/
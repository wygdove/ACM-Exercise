//欧拉函数euler
//在数论，对正整数n，欧拉函数式小于或等于n的数中与n互质的数的数目。
#include<iostream>
using namespace std;

int main()
{
	int t;
	int n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
	}
	return 0;
}



/*
#include<iostream>
using namespace std;

int num[10000000];

int gcd(int a, int b)
{
	int t;
	while(b)
	{ 
		t = a % b; a = b; b = t;
	}
	return a; 
}

void Set(int n)
{
	int i;
	for(i=1;i<10000000;i++)
	{
		a[i]=gcd(i,n);	//尝试打表，但每次n都变化，也不能节省时间
	}
}

int main()
{
	int t;
	int n,m;
	int ans;
	int min;
	int i;
	while(cin>>t)
	{
		while(t--)
		{
			cin>>n>>m;

			Set(n);
			ans=0;
			min=

			for(i=1;i<
		}
	}
	return 0;
}
*/



/*

//认真读题再着手做，认真读题再着手做！！！	

//Time Limit Exceeded
#include<iostream>
#include<algorithm>
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
	int t;
	int n,m;
	int ans;
	int i;
	while(cin>>t)
	{
		while(t--)
		{
			cin>>n>>m;
			ans=0;
			for(i=1;i<=n;i++)
				if(gcd(i,n)>=m)
					ans++;
			cout<<ans<<endl;
		}
	}
	return 0;
}
*/
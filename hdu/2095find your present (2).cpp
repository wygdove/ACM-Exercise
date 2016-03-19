//用异或
#include<iostream>
using namespace std;

int main()
{
	int n;
	int a;
	int b;
	while(cin>>n && n)
	{
		if(n%2==0)
			break;
		cin>>b;
		n--;
		while(n--)
		{
			cin>>a;
			b=b^a;
		}
		cout<<b<<endl;
	}
	return 0;
}





/*
//Memory Limit Exceeded
//用数组
#include<iostream>
using namespace std;

int a[500001];

int main()
{
	int n;
	int i,j;
	int count;
	int t;
	while(cin>>n && n)
	{
		if(n%2==0)
			break;
		t=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			count=0;
			for(j=0;j<n;j++)
			{
				if(a[i]==a[j])
					count++;
				if(count>1)
					break;
			}
			if(count==1)
				t=i;
		}
		cout<<a[t]<<endl;
	}
	return 0;
}
*/
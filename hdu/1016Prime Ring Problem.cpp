#include<iostream>
using namespace std;

bool prime(int n)
{
	int p[51];
	int i;
	memset(p,0,51);
	for(i=3;i<=50;i++)
	{
		for(j=2;j<=50;j++)
		{
			if(i%j==0
		}
	}
}

int sushu(int n)
{
	for (int i=2;i<n;i++)
	{
		if (n%i==0)
			break;
		else
			if(n==i)  
				return n;
	}
}



int main()
{
	int n;
	int count=0;
	while(cin>>n)
	{
		count++;
		cout<<"Case "<<count<<":\n";
		dfs
		cout<<endl;
	}
	return 0;
}
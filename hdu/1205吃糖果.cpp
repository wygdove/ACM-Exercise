




















/*
//wrong УЛХЊЖЎЬтвт
#include<iostream>
using namespace std;

int a[1000010];

int main()
{
	int t;
	int n;
	bool b;
	int i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		b=true;
		for(i=0;i<n;i++)
		{
			if(a[i]==a[i+1])
				b=false;
		}
		if(b)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}
*/
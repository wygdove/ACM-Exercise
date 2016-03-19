#include<iostream>
using namespace std;

int a[110];

int main()
{
	int n,m;
	int i;
	while(cin>>n>>m && n!=0 && m!=0)
	{
		for(i=0;i<n;i++)
			cin>>a[i];
		i=i-1;
		while(i>=0 && m<a[i]) //寻找插入点
		{ 
			a[i+1]=a[i]; //后挪一个位置
			i--;
		}
		a[i+1]=m; //插入
		for(i=0;i<n+1;i++)
		{
			cout<<a[i];
			if(i!=n)
				cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
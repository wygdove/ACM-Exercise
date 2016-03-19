#include<iostream>
using namespace std;

int a[1001];

int cmp(const void* a,const void *b)
{
	return *(int*)a - *(int*)b;
}

int main()
{
	int t,n;
	int i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
			cin>>a[i];
		qsort(a,n,sizeof(a[0]),cmp);
		for(i=0;i<n;i++)
		{
			cout<<a[i];
			if(i!=n-1)
				cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
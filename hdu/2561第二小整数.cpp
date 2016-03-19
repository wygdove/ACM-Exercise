#include<iostream>
using namespace std;

int a[100];

int cmp(const void *a,const void *b)
{
	return *(int*)a - *(int*)b;
}

int main()
{
	int c;
	int n;
	int i;
	cin>>c;
	while(c--)
	{
		memset(a,10000,sizeof(a));

		cin>>n;
		for(i=0;i<n;i++)
			cin>>a[i];

		qsort(a,100,sizeof(a[0]),cmp);

		cout<<a[1]<<endl;
	}
	return 0;
}
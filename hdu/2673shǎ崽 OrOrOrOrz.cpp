#include<iostream>
using namespace std;

int a[10010];
int b[10010];

int cmp1(const void* a,const void* b)
{
	return *(int*)b - *(int*)a;
}

int cmp2(const void* a,const void* b)
{
	return *(int*)a - *(int*)b;
}

int main()
{
	int n;
	int i;
	while(cin>>n)
	{
		memset(a,-1,sizeof(a));
		memset(b,-1,sizeof(b));
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=a[i];
		}
		qsort(a,n,sizeof(a[0]),cmp1);
		qsort(b,n,sizeof(b[0]),cmp2);
		for(i=0;i<n/2;i++)
		{
			if(a[i]!=-1)
			{
				cout<<a[i];
				a[i]=-1;
				if(i!=n/2)
					cout<<" ";
			}
			if(b[i]!=-1)
			{
				cout<<b[i];
				b[i]=-1;
				if(i!=n/2-1)
					cout<<" ";
			}
		}
		if(n%2!=0)
			cout<<" "<<a[n/2]<<endl;
		else
			cout<<endl;
	}
	return 0;
}
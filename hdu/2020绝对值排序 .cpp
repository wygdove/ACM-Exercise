#include<iostream>
#include<math.h>
using namespace std;

int a[101];

/*int cmp(const void* a,const void *b)
{
	return *(int*)b - *(int*)a;
}qsort(a,n,sizeof(a[0]),cmp);*/

int main()
{
	int n;
	int t;
	int i,j;
	while(cin>>n && n!=0)
	{
		for(i=0;i<n;i++)
			cin>>a[i];
		//qsort(a,n,sizeof(a[0]),cmp);//不能处理绝对值
		//bubble sort
		for(i=1;i<n;i++)
		{
			for(j=0;j<n-i;j++)
			{
				if(abs(a[j]) < abs(a[j+1]))
				{
					t=a[j];
					a[j]=a[j+1];
					a[j+1]=t;
				}
			}
		}
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
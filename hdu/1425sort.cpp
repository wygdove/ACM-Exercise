#include<iostream>
#include<stdlib.h>
using namespace std;

int a[1000020];

int cmp(const void* a,const void *b)
{
	return *(int*)b - *(int*)a;
}

int main()
{
	int n=0,m=0;
	int i;
	while(scanf("%d%d",&n,&m)!=EOF)	
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
				
		}
		qsort(a,n,sizeof(a[0]),cmp);
		for(i=0;i<m;i++)
		{
			printf("%d",a[i]);
			if(i!=m-1)
				cout<<" ";
		}
                cout<<endl;
	}	
	return 0;
}
/*
#include<iostream>
using namespace std;

int a[1000020];

int cmp(const void* a,const void *b)
{
	return *(int*)b - *(int*)a;
}

int main()
{
	int n=0,m=0;
	int i;
	while(scanf("%d%d",&n,&m)!=EOF && n>0 && m<n && m>0&&m<1000000)	
	{
		for(i=1;i<=n;)//wrong
		{
			scanf("%d",&a[i]);
			if(a[i]<500000 && a[i]>-500000)
				i++;
		}
		//i=1;
		//while(i<n && scanf("%d",&a[i])!=EOF && a[i]<500000 && a[i]>-500000)
		//	i++;
		qsort(a,n,sizeof(a[0]),cmp);
		for(i=0;i<m;i++)
		{
			printf("%d",a[i]);
			if(i!=m-1)
				cout<<" ";
		}
		cout<<endl;
	}	
	return 0;
}
*/
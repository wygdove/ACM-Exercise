#include<iostream>
#include<math.h>
using namespace std;

int a[110];
int c1[10010],c2[10010];

int main()
{
	int n;
	int sum,count;
	int r;
	int i,j,k;
	while(cin>>n)
	{
		sum=0;
		count=0;
		for(i=1;i<=n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		
		memset(c1,0,sizeof(c1));
		memset(c2,0,sizeof(c2));

		for(i=0;i<2;i++)
		{
			c1[i*a[1]]=1;
		}

		for(i=2;i<=n;i++)
		{
			for(j=0;j<=sum;j++)
			{
				for(k=0;k<=1;k++)
				{
					c2[j+k*a[i]]+=c1[j];
					c2[abs(j-k*a[i])]+=c1[j];
				}
			}
			for(j=0;j<=sum;j++)
			{
				c1[j]=c2[j];
				c2[j]=0;
			}
		}
		
		for(i=1;i<=sum;i++)
			if(c1[i]==0)
				count++;
		cout<<count<<endl;
		
		r=0;
		for(i=1;i<=sum;i++)
		{
			if(c1[i]==0)
			{
				cout<<i;
				r++;
				if(r!=count)
					cout<<" ";
				else
					cout<<endl;
			}
		}
	}
	return 0;
}



















/*
//wrong answer
#include <iostream>
using namespace std;

int c1[110],c2[110];
int a[110];

int main()
{	
	int n=0;
	int i,j,k;
	while (scanf("%d",&n)!=EOF)
	{	
		for(i=0;i<n;i++)
			cin>>a[i];
		for (i=0;i<=n;i++)
		{	
			c1[i]=1;	
			c2[i]=0;	
		}
		for (i=2;i<=n;i++)
		{	
			for (j=0;j<=n;j++)
			{
				for (k=0;k+j<=n;k+=a[i-1])
				{	
					c2[j+k]+=c1[j];
				}
			}
			for (j=0;j<=n;j++)
			{	
				c1[j]=c2[j];	
				c2[j]=0;	
			}
		}
		cout<<c1[n]<<endl;
	}
	return 0;
}
*/
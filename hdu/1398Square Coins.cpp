#include<iostream>
using namespace std;

int c1[310],c2[310];

int main()
{
	int n;
	int i,j,k;
	while(cin>>n && n)
	{
		for(i=0;i<=n;i++)
		{
			c1[i]=1;
			c2[i]=0;
		}
		//memset(c1,1,sizeof(c1));
		//memset(c2,0,sizeof(c2));
		for(i=2;i<=17;i++)
		{
			for(j=0;j<=n;j++)	
			{
				for(k=0;k+j<=n;k+=i*i)
				{
					c2[j+k]+=c1[j];
				}
			}
			for(j=0;j<=n;j++)
			{
				c1[j]=c2[j];
				c2[j]=0;
			}
		}
		cout<<c1[n]<<endl;
	}
	return 0;
}
#include<iostream>
using namespace std;

int a[1010],b[1010];
int c1[1010],c2[1010];

int main()
{
	int n,m;
	int sum;
	int i,j,k;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		sum=0;
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));

		for(i=1;i<=n;i++)
		{
			cin>>a[i]>>b[i];
			sum+=b[i];
		}

		memset(c1,0,sizeof(c1));
		memset(c2,0,sizeof(c2));

		c1[0]=1;

		for(i=1;i<=n;i++)
		{
			for(j=0;j<=sum;j++)
			{
				for(k=a[i];k+j<=sum && k<=b[i];k++)
				{
					c2[k+j]+=c1[j];
				}
			}
			for(j=0;j<=sum;j++)
			{
				c1[j]=c2[j];
				c2[j]=0;
			}
		}
		cout<<c1[m]<<endl;
	}
	return 0;
}

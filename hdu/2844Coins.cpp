#include<iostream>
using namespace std;

int f[10010];

int i,j;

int max(int a,int b)
{
	return a>b?a:b;
}

void ZeroOnePack(int a,int c,int m)
{
	for(j=m;j>=a;j--)
		f[j]=max(f[j],f[j-a]+c);
}

void CompletePack(int a,int c,int m)
{
	for(j=a;j<=m;j++)
		f[j]=max(f[j],f[j-a]+c);
}

void MultiplePack(int a,int c,int m)
{
	int k;

	if(a*c>=m)
		CompletePack(a,a,m); 
	else
	{
		k=1;
		while(k<c)
		{
			ZeroOnePack(k*a,k*a,m);
			c-=k;
			k*=2;
		}
		ZeroOnePack(a*c,a*c,m);
	}
}


int a[100010];
int c[1010];

int main()
{
	int n,m;
	int sum;

	while(cin>>n>>m && n+m)
	{
		memset(f,0,sizeof(f));

		for(i=1;i<=n;i++)
			cin>>a[i];
		for(i=1;i<=n;i++)
			cin>>c[i];

		for(i=1;i<=n;i++)
			MultiplePack(a[i],c[i],m);

		sum=0;
		for(i=1;i<=m;i++)
		{
			if(f[i]==i)
				sum++;
		}
		cout<<sum<<endl;
	}
	return 0;
}

//me


























/*
#include<iostream>
using namespace std;

int a[1010];
int c[1010];

int f[100010];

int max(int a,int b)
{
	return a>b?a:b;
}

int main()
{
	int n,m;
	int sum;
	int k;
	int i,j;

	while(cin>>n>>m && n+m)
	{
		for(i=1;i<=n;i++)
			cin>>a[i];
		for(i=1;i<=n;i++)
			cin>>c[i];

		memset(f,0,sizeof(f));

		for(i=1;i<=n;i++)
		{
			if(a[i]*c[i]>m)
			{
				for(j=a[i];j<=m;j++)
					f[j]=max(f[j],f[j-a[i]]+a[i]);
			}
			else
			{
				k=1;
				while(k<c[i])
				{
					for(j=m;j>=k*a[i];j--)
					{
						f[j]=max(f[j],f[j-k*a[i]]+k*a[i]);
						c[i]-=k;
						k*=2;
					}
				}
				for(j=m;j>=a[i]*c[i];j--)
				{
					f[j]=max(f[j],f[j-a[i]*c[i]]+a[i]*c[i]);
				}
			}
		}

		sum=0;
		for(i=1;i<=m;i++)
		{
			if(f[i]==i)
				sum++;
		}
		cout<<sum<<endl;
	}
	return 0;
}
*/

/*
#include<iostream>
using namespace std;

int a[1010];
int c[1010];

int f[100010];

int i,j;

int max(int a,int b)
{
	return a>b?a:b;
}

void fn3(int v,int w,int m)
{
	for(j=v;j<=m;j++)
		f[j]=max(f[j],f[j-v]+w);
}

void fn2(int v,int w,int m)
{
	for(j=v;j<=m;j++)
		f[j]=max(f[j],f[j-v]+w);
}

void fn1(int v,int w,int m,int c)
{
	if(v*c>m)
		fn2(v,w,m);
	else
	{
		int k=1;
		while(k<c)
		{
			fn3(k*v,k*w,m);
			c-=k;
			k*=2;
		}
		fn3(c*v,c*w,m);
	}
}

int main()
{
	int n,m;
	int sum;

	while(cin>>n>>m && n+m)
	{
		for(i=1;i<=n;i++)
			cin>>a[i];
		for(i=1;i<=n;i++)
			cin>>c[i];

		memset(f,0,sizeof(f));

		for(i=1;i<=n;i++)
		{
			fn1(a[i],a[i],m,c[i]);
		}

		sum=0;
		for(i=1;i<=m;i++)
		{
			if(f[i]==i)
				sum++;
		}
		cout<<sum<<endl;
	}
	return 0;
}
*/
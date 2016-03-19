#include<iostream>
using namespace std;

struct Good
{
	int a;
	int b;
	int val;
}g[110];

int f[110];
int i,j;

int max(int a,int b)
{
	return a>b?a:b;
}


int main()
{
	int n,v1,v2,k;
	int ans;
	while(cin>>n>>v1>>v2>>k)
	{
		for(i=1;i<=n;i++)
			cin>>g[i].a>>g[i].b>>g[i].val;

		memset(f,0,sizeof(f));

		for(i=1;i<=n;i++)
		{
		}

		ans=0;
		for(i=1;i<=n;i++)
		{
			if(ans<f[i])
				ans=f[i];
			cout<<"f["<<i<<"]="<<f[i]<<endl;
		}
		cout<<"\nans="<<ans<<endl;
	}
	return 0;
}

/*
void ZeroOnePack(int a,int b,int v)
{
	for(j=b;j>=a;j--)
		f[j]=max(f[j],f[j-a]+b);
}

void CompletePack(int a,int b,int v)
{
	for(j=a;j<=v;j++)
		f[j]=max(f[j],f[j-a]+b);
}

void MultiplePack(int a,int b,int v)
{
	int k;

	if(a*b>=v)
		CompletePack(a,a,v); 
	else
	{
		k=1;
		while(k<v)
		{
			ZeroOnePack(k*a,k*a,v);
			b-=k;
			k*=2;
		}
		ZeroOnePack(a*b,a*b,v);
	}
}
*/
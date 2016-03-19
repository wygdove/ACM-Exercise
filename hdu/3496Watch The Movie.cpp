#include<iostream>
using namespace std;

struct DVD
{
	int t;
	int v;
}d[110];

int f[110][1100];

int max(int a,int b)
{
	return a>b?a:b;
}

int main()
{
	int T;
	int N,M,L;
	int ans;
	int i,j,k;
	cin>>T;
	while(T--)
	{
		memset(f,-1,sizeof(f));
		f[0][0]=0;

		cin>>N>>M>>L;
		for(i=1;i<=N;i++)
			cin>>d[i].t>>d[i].v;

		for(i=1;i<=N;i++)
		{
			for(j=M;j>=1;j--)
			{
				for(k=L;k>=d[i].t;k--)
				{
					if(f[j-1][k-d[i].t]!=-1)
						f[j][k]=max(f[j][k],f[j-1][k-d[i].t]+d[i].v);
				}
			}
		}

		ans=0;
		for(i=0;i<=L;i++)
		{
			//cout<<f[M][i]<<endl;
			if(ans<f[M][i])
				ans=f[M][i];
		}
		//cout<<endl;
		cout<<ans<<endl;
	}
	return 0;
}
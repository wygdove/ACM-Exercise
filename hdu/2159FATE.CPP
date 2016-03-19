#include<iostream>
using namespace std;

int a[110];
int b[110];
int f[110][110];

int max(int a,int b)
{
	return a>b?a:b;
}

int main()
{
	int N,M,K,S;
	int i,j,k;
	while(cin>>N>>M>>K>>S)
	{
		for(i=1;i<=K;i++)
			cin>>a[i]>>b[i];

		memset(f,0,sizeof(f));

		for(i=1;i<=K;i++)
		{
			for(j=1;j<=S;j++)
			{
				for(k=b[i];k<=M;k++)
					f[j][k]=max(f[j][k],f[j-1][k-b[i]]+a[i]);
			}
		}

		for(i=0;i<=M;i++)
			if(N<=f[S][i])
				break;
		if(i==M+1)
			cout<<"-1\n";
		else
			cout<<M-i<<endl;
	}
	return 0;
}

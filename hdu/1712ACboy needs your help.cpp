#include<iostream>
using namespace std;

int a[110][110];
int dp[110];

int max(int a,int b)
{
	return a>b?a:b;
}

int main()
{
	int N,M;
	int i,j,k;
	while(cin>>N>>M && N+M)
	{
		for(i=1;i<=N;i++)
			for(j=1;j<=M;j++)
				cin>>a[i][j];

		memset(dp,0,sizeof(dp));
		for(i=1;i<=N;i++)
		{
			for(j=M;j>=0;j--)
			{
				for(k=1;k<=j;k++)
				{
					dp[j]=max(dp[j],dp[j-k]+a[i][k]);
				}
			}
		}

		cout<<dp[M]<<endl;
	}
	return 0;
}


/*
����ı�������

f[k][v]=max{f[k-1][v],f[k-1][v-c[i]]+w[i]|��Ʒi������k}


for ���е���k
    for v=V..0
        for ���е�i������k
            f[v]=max{f[v],f[v-c[i]]+w[i]}

*/
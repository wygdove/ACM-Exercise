#include<iostream>
using namespace std;

int a[110][110];
int dp1[110][110];
int dp2[110][110];
bool bl[110][110];

int main()
{
	int n;
	int i,j;
	while(cin>>n)
	{
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				cin>>a[i][j];

		memset(bl,true,sizeof(bl));

		memset(dp1,0,sizeof(dp1));
		memset(dp2,0,sizeof(dp2));

		dp1[1][1]=a[1][1];
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				dp1[i+1][j]=dp1[i][j]+a[i+1][j];
				dp1[i][j+1]=dp1[i][j]+a[i][j+1];
			}
		}


		cout<<endl;
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				cout<<"dp1["<<i<<"]["<<j<<"]="<<dp1[i][j]<<endl;
					//<<"dp2["<<i<<"]["<<j<<"]="<<dp2[i][j]<<" "
		cout<<endl;
	}
	return 0;
}





























/*
#include<iostream>
using namespace std;

int a[110][110];
int dp1[110][110];
int dp2[110][110];
bool bl[110][110];

int main()
{
	int n;
	int i,j;
	while(cin>>n)
	{
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				cin>>a[i][j];

		memset(bl,true,sizeof(bl));

		memset(dp1,0,sizeof(dp1));

		dp1[1][1]=a[1][1];
		for(i=1;i<n;i++)
		{
			for(j=1;j<n;j++)
			{
					//if(a[i+1][j]>a[i][j+1])
					//{
						dp1[i+1][j]=a[i+1][j]+dp1[i][j];
						bl[i+1][j]=false;
					//}
					//else
					//{
						dp1[i][j+1]=a[i][j+1]+dp1[i][j];
						bl[i][j+1]=false;
					//}
			}
		}
/*
		memset(dp2,0,sizeof(dp2));

		dp2[n][n]=a[n][n];
		for(i=n;i>1;i--)
		{
			for(j=n;j>1;j--)
			{
					if(bl[i-1][j])
					{
						if(a[i-1][j]>a[i][j-1])
							dp2[i][j-1]=a[i-1][j]+dp2[i][j];
						else
						{
							if(bl[i][j-1])
								dp2[i][j-1]=a[i][j-1]+dp2[i][j];
							else
								dp2[i-1][j]=a[i-1][j]+dp2[i][j];
						}
					}
			}
		}* /

		cout<<endl;
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				cout<<"dp1["<<i<<"]["<<j<<"]="<<dp1[i][j]<<endl;
					//<<"dp2["<<i<<"]["<<j<<"]="<<dp2[i][j]<<endl;
		cout<<endl;
		//cout<<dp1[n][n]+dp2[1][1]<<endl;
	}
	return 0;
}
*/
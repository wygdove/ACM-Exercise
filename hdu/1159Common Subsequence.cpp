#include<iostream>
using namespace std;

char a[1010];
char b[1010];
int dp[1010][1010];

int max(int a,int b)
{
	return a>b?a:b;
}

int main()
{
	int sa,sb;
	int i,j;
	while(cin>>a>>b)
	{
		sa=strlen(a);
		sb=strlen(b);
		
		for(i=0;i<sa;i++)
		{
			for(j=0;j<sb;j++)
			{
				if(a[i]==b[j])
					dp[i+1][j+1]=dp[i][j]+1;
				else
					dp[i+1][j+1]=max(dp[i+1][j],dp[i][j+1]);
			}
		}

		cout<<dp[sa][sb]<<endl;
	}
	return 0;
}



























/*
//wrong
//asdlkfjlksd
//sldkfjlksjdf
//9
/*
asdlkfjlksd
sldkfjlksjdf
9
sdkfjlksd
* /
#include<iostream>
using namespace std;

char a[10010];
char b[10010];

int main()
{
	int ans;
	int begin;
	int i,j;
	while(cin>>a>>b)
	{
		ans=0;
		begin=0;

		for(i=0;i<strlen(a);i++)
		{
			for(j=begin;j<strlen(b);)
			{
				j++;
				if(a[i]==b[j-1])
				{
					ans++;
					begin=j;
					goto A;
				}
			}
A:;
		}

		cout<<ans<<endl;
	}
	return 0;
}




		//cout<<"a: "<<a<<endl;
		//cout<<"b: "<<b<<endl;
					//cout<<"a["<<i<<"]="<<a[i]<<"  b["<<j-1<<"]="<<b[j-1]<<endl;
					//cout<<"ans="<<ans<<endl;;
*/
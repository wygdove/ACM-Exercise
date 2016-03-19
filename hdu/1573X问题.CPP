
#include<iostream>
using namespace std;

int main()
{
	int t;
	int n,m;
	int a[11],b[11];
	int i;
	int x;
	int count;
	int ans;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		memset(a,-1,sizeof(a));
		memset(b,-1,sizeof(b));
		for(i=0;i<m;i++)
			cin>>a[i]>>b[i];
		ans=0;
		for(x=1;x<=n;x++)
		{
			count=0;
			for(i=0;i<m;i++)
			{
				if(x%a[i]==b[i])
					count++;
			}
			if(count==m)
				ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
#include<iostream>
using namespace std;

int x[1010];

int main()
{
	int t;
	int n,k;
	int ans;
	int i;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(i=1;i<=n;i++)
			cin>>x[i];
		ans=0;
		for(i=1;i<=n;i++)
			if(x[i]>x[k])
				ans++;
		cout<<ans<<endl;
	}
	return 0;
}
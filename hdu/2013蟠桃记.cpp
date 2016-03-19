#include<iostream>
using namespace std;

int main()
{
	int n;
	int ans;
	while(cin>>n)
	{
		ans=1;
		while(--n)	//n-- 时相差一天
		{
			ans=(ans+1)*2;
		}
		cout<<ans<<endl;
	}
	return 0;
}
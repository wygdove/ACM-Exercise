#include<iostream>
using namespace std;

int main()
{
	int n;
	int ans;
	while(cin>>n)
	{
		ans=1;
		while(--n)	//n-- ʱ���һ��
		{
			ans=(ans+1)*2;
		}
		cout<<ans<<endl;
	}
	return 0;
}
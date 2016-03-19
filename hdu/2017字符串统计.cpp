#include<iostream>
using namespace std;

char s[10000000];

int main()
{
	int n;
	int ans;
	int i;
	cin>>n;
	getchar();
	while(n--)
	{
		gets(s);
		ans=0;
		for(i=0;i<strlen(s);i++)
			if(s[i]>='0' && s[i]<='9')
				ans++;
		cout<<ans<<endl;
	}
	return 0;
}
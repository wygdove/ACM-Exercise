#include<iostream>
using namespace std;

char s[110];
int b[110];

int main()
{
	int t;
	int ans;
	int len;
	int i;
	cin>>t;
	while(t--)
	{
		cin>>s;

		len=strlen(s);
		ans=len;
		memset(b,0,sizeof(b));

		for(i=0;i<len;i++)
		{
			if(s[i]>='A' && s[i]<='Z')
				b[i]=1;
		}
	}
	return 0;
}
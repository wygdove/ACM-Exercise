#include<iostream>
using namespace std;

char s[300000];

int main()
{
	int n;
	int len;
	bool bl;
	int i;
	while(cin>>n)
	{
		getchar();
		while(n--)
		{
			gets(s);
			len=strlen(s);
			bl=true;
			for(i=0;i<len/2;i++)
			{
				if(s[i]!=s[len-(i+1)])
					bl=false;
			}
			if(bl)
				cout<<"yes\n";
			else
				cout<<"no\n";
		}
	}
	return 0;
}
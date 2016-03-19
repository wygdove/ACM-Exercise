#include<iostream>
using namespace std;

char s[110];

int main()
{
	int n;
	int a,e,i,o,u;
	bool bl=false;
	int j;
	while(cin>>n)
	{
		getchar();
		while(n--)
		{
			gets(s);
			a=0;e=0;i=0;o=0;u=0;
			for(j=0;j<strlen(s);j++)
			{
				switch(s[j])
				{
					case 'a':a++;break;
					case 'e':e++;break;
					case 'i':i++;break;
					case 'o':o++;break;
					case 'u':u++;break;
				}
			}
			if(bl)
				cout<<endl;
			cout<<"a:"<<a<<endl
				<<"e:"<<e<<endl
				<<"i:"<<i<<endl
				<<"o:"<<o<<endl
				<<"u:"<<u<<endl;
			bl=true;
		}
	}
	return 0;
}
#include<iostream>
using namespace std;

int main()
{
	char s[1000];
	int i;
	while(gets(s))
	{
		if(s[0]=='#')
			break;
		for(i=0;i<strlen(s);i++)
		{
			if(s[i]==' ')
				cout<<"%20";
			else if(s[i]=='!')
				cout<<"%21";
			else if(s[i]=='$')
				cout<<"%24";
			else if(s[i]=='%')
				cout<<"%25";
			else if(s[i]=='(')
				cout<<"%28";
			else if(s[i]==')')
				cout<<"%29";
			else if(s[i]=='*')
				cout<<"%2a";
			else
				cout<<s[i];
		}
		cout<<endl;
	}
	return 0;
}
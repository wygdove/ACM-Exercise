#include<iostream>
using namespace std;

char s[110];

int main()
{
	int i;
	while(gets(s))
	{
		//printf("%s",s[0]-32);
		cout<<(char)(s[0]-'a'+'A');
		for(i=1;i<strlen(s);i++)
		{
			if(s[i]==' ')
			{
				//printf(" %s",s[i+1]-32);
				cout<<s[i]<<(char)(s[i+1]-'a'+'A');
				i++;
			}
			else
				cout<<s[i];
		}
		cout<<endl;
	}
	return 0;
}
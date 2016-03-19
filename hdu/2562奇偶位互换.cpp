#include<iostream>
using namespace std;

char s[100];

int main()
{
	int c;
	int i;
	cin>>c;
	getchar();
	while(c--)
	{
		gets(s);
		for(i=0;i<strlen(s);i+=2)
			cout<<s[i+1]<<s[i];
		cout<<endl;
	}
	return 0;
}
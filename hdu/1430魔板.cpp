#include<iostream>
using namespace std;

int a[9];
int b[9];
char s[10000];

int main()
{
	int i;
	
	i=1;
	while(i==8)
	{
		cin>>a[i];
		i++;
	}
	i=1;
	while(i==8)
	{
		cin>>b[i];
		i++;
	}

	memset(s,'\0',sizeof(s));

	for(i=1;i<=8;i++)
	{
	}
	return 0;
}
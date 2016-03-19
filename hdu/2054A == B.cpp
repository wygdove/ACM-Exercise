//wrong answer
#include<iostream>
using namespace std;

char a[100000000];
char b[100000000];

int main()
{
	//int a,b;
	while(cin>>a>>b)
	{
		if(strcmp(a,b))//a==b
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
	return 0;
}
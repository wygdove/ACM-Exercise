#include<iostream>
using namespace std;

int main()
{
	int n;
	int num=1;
	int i;
	char s[55];
	cin>>n;
	getchar();
	while(n--)
	{
		//num=1;
		gets(s);
		cout<<"String #"<<num<<endl;
		for(i=0;i<strlen(s);i++)
			if(s[i]!='Z')
				cout<<(char)(s[i]+1);
			else
					cout<<"A";
		cout<<endl<<endl;
		num++;
	}
	return 0;
}
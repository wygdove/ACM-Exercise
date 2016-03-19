
#include<iostream>
using namespace std;

char s[10001];
int len;

int main()
{
	int t;
	int n;
	int i;
	cin>>t;
	while(t--)
	{
		cin>>s;
		len=strlen(s);	
		for(i=0;i<len;i++)
		{
			n=0;
			if(s[i]=='#')
			{
				 cout<<" ";
				 continue;
			}
			else
			{
				while(s[i]!='#'&&s[i]!='-'&&s[i]!='\0')
				{
					n=n*10+s[i]-'0';
					i++; 
				}
				if(n)
				{
					printf("%c",n+64);
					i--;
				}
			}
		}
		cout<<endl;
	}
	return 0;
}



/*
#include<iostream>
using namespace std;

char s[10001];
int len;

char a[27];
int b[10001];

void make_set()
{
	int i;
	for(i=0;i<26;i++)
	{
		a[i]='A'+i;
	}
	//cout<<"a: "<<a<<endl;
}

int main()
{
	int i;
	int n;
	int c;
	cin>>c;
	while(c--)
	{
		//cin.getline(s,10001);
		cin>>s;
		//cout<<s<<endl;
		len=strlen(s);
		make_set();
		b[i]=0;
		for(i=0;i<len;i++)
		{
			if(s[i]=='#')
			{
				cout<<" ";
				continue;
			}
			if(s[i]=='-')
				continue;
			if(s[i]=='\0')
			{
				cout<<endl;
				continue;
			}


			while(s[i]!='#' && s[i]!='-' && s[i]!='\0')
			{
				n=n*10+s[i]-'0';
				i++;
			}
			if(n)
			{
				cout<<a[n+64];
				i--;
			}


			//b[i]=(int)(s[i]-'0');
			//cout<<a[b[i]];
		}
	}
	return 0;
}
*/
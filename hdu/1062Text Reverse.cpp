#include<iostream>
using namespace std;

int main()
{
	char s[1000];
	char tem[1000];
	int i;
	int t;
	int n;
	cin>>n;
	getchar();
	while(n--)
	{
		gets(s);
		t=0;
		for(i=0;i<=strlen(s);i++)
		{
			if(s[i]==' ')
			{
				tem[t++]='\0';
				cout<<strrev(tem)<<" ";
				t=0;
			}
			else
			{
				if(s[i]=='\0')
				{
					tem[t++]='\0';
					cout<<strrev(tem);
					t=0;
				}
				else
				{
					tem[t++]=s[i];
				}
			}
		}
		cout<<endl;
	}
	return 0;
}



/*
//AC
#include <iostream>
using namespace std;

int main()
{
	char s[1000];
	char word[1000];
	int n;
	cin>>n;
	getchar();
	while(n--)
	{
		int pos=0;
		//gets(s);
		cin.getline(s,1000);
		for(int i=0;i<=strlen(s);i++)
		{
			if(s[i]==' ')
			{
				word[pos++]='\0';
				cout<<strrev(word)<<" ";
				pos=0;
			}
			else 
				if(s[i]=='\0')
				{
					word[pos++]='\0';
					cout<<strrev(word);
					pos=0;
				}
				else
				{
					word[pos++]=s[i];
				}
		}
		cout<<endl;
	}
	return 0;
}
*/





















/*#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	cout<<s<<endl;
	return 0;
}
*/

/*
#include<iostream>
#include<String>
using namespace std;

char str[1001];
//string str;

int main()
{
	int t;
	int i,j;
	int a,b;
	int len;
	//while(cin>>t)
	cin>>t;
	//{
		for(i=t;i>=0;i--)
		{
			cin.getline(str,1001);
			len=strlen(str);
			////getline(cin,str);
			//len=StrLength(str);
			cout<<"str:"<<str<<" len:"<<len<<endl;
			a=0;b=0;
			for(j=0;j<len;j++)
			{
				if(str[j]==' ')
				{
					for(a=j-1;a>=b;a--)
					{
						cout<<str[a];
					}
					cout<<" ";
				}
				b=j;
			}
		}
	//}
	return 0;
}


*/


/*
#include<iostream>
#include<string>
using namespace std;

char str[1001];

int main()
{
	int t,n;
	int len;
	int j;
	int a,b;
	cin>>t;
	n=t+1;
		while(n--)
		{
			cin.getline(str,1001);
			len=strlen(str);
			//cout<<str<<endl;	//输出方式不对

			/*for(j=0;str[j]!='\0';j++)	//输出
			{
				cout<<str[j];
			}
			if(n!=t)
			cout<<endl;*
			a=0;b=0;
			for(j=0;j<len;j++)
			{
				if(str[j]==' ')
				{
					for(a=j-1;a>=b;a--)
					{
						//cout<<str[a];
						printf("%d",str[a]);
					}
					cout<<" ";
				}
				b=j+1;
			}
			if(j==len-2)
				{
					for(a=len-2;a>=b;n--)
						//cout<<str[a];
						printf("%d",str[a]);
					break;
				}
			}
			cout<<endl;
	return 0;
}
*/
/*
#include<iostream>
using namespace std;

int main()
{
	int t;
	char s[1000];
	int i,j,a;
	cin>>t;
	while(t--)
	{
		cin.getline(s,1001);
		cout<<s<<endl;
		a=0;
		for(i=0;i<t;i++)
		{
			if(s[i]==' ' || s[i]=='\0')
			{
				for(j=i-1;j>=a;j--)
					cout<<s[j];
				a=j;
				cout<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
*/

/*

//可能输入问题
#include<iostream>
using namespace std;

int main()
{
	int t;
	char str[1001];
	int len;
	int i,j;
	int n,m;
	while(cin>>t)
	//cin>>t;
	{
		for(i=0;i<t;i++)
		{
			//cin>>str;
			cin.getline(str,1001);
			len=strlen(str);
			cout<<str<<endl<<len<<endl;
			n=0;m=0;
			for(j=0;j<len;j++)
			{
				cout<<str[j]<<endl;
				if(str[j]==' ')
				{
					for(n=j-1;n>=m;n--)
						cout<<str[n];
					cout<<' ';
					m=j+1;
				}
				if(j==len-2)
				{
					for(n=len-2;n>=m;n--)
						cout<<str[n];
					break;
				}
			}
			cout<<endl;
		}
	}
	return 0;
}

  */



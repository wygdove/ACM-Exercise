#include<iostream>
using namespace std;

int a[500000];

int main()
{
	int n;
	int len;
	int i;
	while(cin>>n)
	{
		i=0;
		len=0;
		memset(a,0,sizeof(a));

		while(1)
		{
			a[i]=n%2;
			i++;
			n=n/2;
			if(!n)
			{
				len=i-1;
				break;
			}
		}
		for(i=len;i>=0;i--)
			cout<<a[i];
		cout<<endl;
	}
	return 0;
}











/*
#include<iostream>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		while(n)
		{
			cout<<n%2;//反序问题
			n=n/2;
		}
		cout<<endl;
	}
	return 0;
}


*/

/*
#include<iostream>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
		cout<<oct<<n<<endl;
	return 0;
}
*/

/*
十进制 dec

二进制 bin
八进制 oct
十六进制 hex
*/
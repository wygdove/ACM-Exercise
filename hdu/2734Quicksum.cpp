#include<iostream>
using namespace std;

int main()
{
	int i,j;
	int sum;
	char a[27];
	for(i=1;i<27;i++)
		a[i]='A'+i-1;
	char s[260];
	while(gets(s))
	{
		sum=0;
		if(s[0]=='#')
			break;
		for(i=0;i<=strlen(s);i++)
		{
			if(s[i]==' ')
				sum+=i*0;
			for(j=1;j<27;j++)
			{
				if(s[i]==a[j])
					sum+=(i+1)*j;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
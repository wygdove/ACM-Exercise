#include<iostream>
using namespace std;

int main()
{
	char s[1001][16];
	int a[1001];
	int n;
	int i,j;
	int max;
	while(cin>>n)
	{
		if(n==0)
			return 0;
		else
		{
			if(n==1)
			{
				do
				{
					cin.getline(s[1],16);
					cout<<s[1];
				}while(n--);
				cout<<endl;
				continue;
			}
			else
			{
				if(n>0 && n<=1000)
				{
					for(i=0;i<=n;i++)
					{
						cin.getline(s[i],16);
					}
					for(i=1,max=0;i<=n;i++)
					{
						for(j=i+1,a[i]=0;j<=n;j++)
						{
							if(strcmp(s[i],s[j])==0)
								a[i]+=1;
						}
						if(a[i]>max)
							max=a[i];
					}
					for(i=1;i<=n;i++)
						if(a[i]==max)
							cout<<s[i]<<endl;
				}
			}
		}
	}
	return 0;
}

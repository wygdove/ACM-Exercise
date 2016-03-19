#include<iostream>
using namespace std;

int main()
{
	int n=0;
	char str[10000];
	int i,j;
	int num;
	while(cin>>n)
	{
		if(n>=1 && n<=100)
		{
			for(i=1;i<=n;i++)
			{
				num=1;
				cin>>str;
				//cin.getline(str,10000);
				for(j=0;j<strlen(str);j++)
				{
					if(str[j]==str[j+1])
						num++;
					else
					{
						if(num>1)
							cout<<num;
						cout<<str[j];
						num=1;
					}
				}
				cout<<endl;
			}
		}
	}
	return 0;
}


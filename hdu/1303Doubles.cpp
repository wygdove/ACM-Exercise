#include<iostream>
using namespace std;

int a[1000];

int main()
{
	int ans;
	int num;
	int i,j;
	while(cin>>a[0] && a[0]!=-1)
	{
		i=1;
		while(cin>>a[i])
		{
			if(a[i])
				i++;
			else
			{
				num=i;	//num=i-1
				break;
			}
		}

		/*
		for(i=0;i<num;i++)	//·¢ÏÖ num=i-1 ´íÎó
			cout<<a[i]<<endl;
		cout<<endl;
		*/

		ans=0;

		for(i=0;i<num;i++)
		{
			for(j=0;j<num;j++)
			{
				if(a[i]*2==a[j])
					ans++;
			}
		}

		cout<<ans<<endl;

		memset(a,0,sizeof(a));
	}
	return 0;
}
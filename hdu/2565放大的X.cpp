#include<iostream>
using namespace std;

int main()
{
	int t;
	int n;
	int i,j;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(j>i && i+j>n+1)
					continue;
				if(j==i || i+j==n+1)
					cout<<"X";
				else
					cout<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}









/*
#include<iostream>
using namespace std;

int main()
{
	int t;
	int n;
	int i,j;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(j>i && i+j>n+1)	//Presentation Error
					continue;		//每行最后的X后没有空格
									//可以将下边输出的空格换成点就可以看出差别
				if(j==i || i+j==n+1)
					cout<<"X";
				else
					if(i+j-1==n)
					{
						cout<<"X";
						//continue;	//都不能达到控制目的
						//break;
					}
					else
						cout<<".";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
*/

/*
				if(j==i || i+j-1==n)	//Presentation Error
					cout<<"X";			//不是原因
				else
					cout<<" ";

*/
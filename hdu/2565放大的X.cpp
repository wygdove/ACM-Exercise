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
					continue;		//ÿ������X��û�пո�
									//���Խ��±�����Ŀո񻻳ɵ�Ϳ��Կ������
				if(j==i || i+j==n+1)
					cout<<"X";
				else
					if(i+j-1==n)
					{
						cout<<"X";
						//continue;	//�����ܴﵽ����Ŀ��
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
					cout<<"X";			//����ԭ��
				else
					cout<<" ";

*/
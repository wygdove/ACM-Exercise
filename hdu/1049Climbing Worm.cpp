#include<iostream>
using namespace std;

int main()
{
	int n,u,d;
	int x;
	int min;
	while(cin>>n>>u>>d && n)
	{
		x=0;	//��ʼ��
		min=1;
		while(1)	//ģ���������
		{
			x=x+u;	//ÿ����uӢ��
			if(x>=n)	//�ж��Ƿ�����ȥ��
				break;
			min++;	//ÿ����uӢ��һ����
			x=x-d;	//ÿ����Ϣ�»�dӢ��
			min++;	//ÿ����Ϣһ����
		}
		cout<<min<<endl;
	}
	return 0;
}


/*
һֻ����nӢ��ľ��У�
��ÿ��ÿ��������uӢ�磬
Ȼ����Ϣһ���ӣ�
��Ϣ�����»�dӢ�磬
��ֻ����������Ҫ�����ӣ�
������Ӹպõ��ﾮ�ߣ�����Ϊ����ȥ�ˡ�

����
������ԣ�
����n��u��d��
n==0 ����
*/
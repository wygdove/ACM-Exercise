
/*
#include<iostream>
using namespace std;

int main()
{
	int n;
	int p;
	int i,j,k;
	return 0;
}

*/





//������֣�ĸ������
#include<iostream>
using namespace std;

int main()
{
    int c1[125],c2[125];
    int n;
	int i,j,k;
    while(cin>>n)
    {
        for(i=0;i<=n;i++)	//��ʼ����һ�����ʽ��ϵ��
        {
            c1[i]=1;
            c2[i]=0;
        }
        for(i=2;i<=n;i++)
        {						//�ӵڶ������ʽ��ʼ����Ϊ�������Ƹ���������n�����ʽ
            for(j=0;j<=n;j++)
            {						//���۳˵ı��ʽ���һ�����ʽ��һ�������һ��
                for(k=0;k+j<=n;k+=i)
                {						//kΪ��j��������ָ������i�����ʽÿ���ۼ�i
                    c2[j+k]+=c1[j];
                }
            }
            for(j=0;j<=n;j++)
            {					//������������һ�����ʽ�����һ��
                c1[j]=c2[j];
                c2[j]=0;
            }
        }
		cout<<c1[n]<<endl;
    }
    return 0;
}

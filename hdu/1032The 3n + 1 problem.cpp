#include<iostream>
#include<mem.h>
using namespace std;

int doit(int x)
{
	if(x==1)	//���Ӵ��������Ϊ1 2 4��1 1 4
		return 2;//��ȷΪ1 2 2��1 1 2
	int n=1;
	do
	{
		n++;
		if(x%2!=0)
			x=3*x+1;
		else
			x=x/2;
	}while(x!=1);
	return n;
}

int x[1000000];

int main()
{
	int a,b;
	int max;
	int i;
	while(cin>>a>>b)
	{
		cout<<a<<" "<<b<<" ";
		if(a>b)
			swap(a,b);
		memset(x,0,sizeof(x));
		for(i=0;i<=b-a;i++)
			x[i]=doit(a+i);
		max=0;
		for(i=0;i<=b-a;i++)
			if(max<x[i])
				max=x[i];
		cout<<max<<endl;
	}
	return 0;
}
/*
*/








/*
//�������⣬�Լ������a��b��ѭ�������ֵ
//��ĿҪ���a��b������ѭ�������ֵ
#include<iostream>
using namespace std;

int doit(int x)
{
	int n=1;
	do
	{
		n++;
		if(x%2!=0)
			x=3*x+1;
		else
			x=x/2;
	}while(x!=1);
	return n;
}

int main()
{
	int a,b;
	int an,bn;
	while(cin>>a>>b)
	{
		cout<<a<<" "<<b<<" ";
		an=doit(a);
		bn=doit(b);
		if(an>bn)
			cout<<an<<endl;
		else
			cout<<bn<<endl;
	}
	return 0;
}
*/

/*
//����������
#include<iostream>
using namespace std;

int main()
{
	int n;
	int ans;
	while(cin>>n)
	{
		ans=1;
		do
		{
			//cout<<n<<endl;
			ans++;
			if(n%2!=0)
			{
				n=3*n+1;
				//ans++;
			}
			else
			{
				n=n/2;
				//ans++;
			}
		}while(n!=1);
		//cout<<endl;
		cout<<ans<<endl;
	}
	return 0;
}

*/


#include<iostream>
using namespace std;

int main()
{
	int n;
	long ans;
	int i;
	while(cin>>n)
	{
		if(n==0)
		{
			cout<<"1\n";
			continue;
		}
		if(n>40)
		{
			cout<<"0\n";
			continue;
		}
		ans=1;
		for(i=1;i<=n;i++)
		{
			ans*=i%2009;
			ans%=2009;
		}
		cout<<ans<<endl;
	}
	return 0;
}


/*
			t=1;
			n=n+1;
			while(n--&&n>0)
			{
				t=(t*n)%2009;
				t=t%2009;
			}
			printf("%d\n",t);
*/
/*
		if(n<=40)
		{
		 t=1;
		for(i=1;i<=n;i++)
		{   t*=(i%2009);
		    t%=2009;
		}
		}
		cout<<(n<=40?sum:0)<<endl;

*/
/*
�������뵽�ľ���2009�Ժ�Ľ׳˶�������2009������ӣ�
���Զ�2009ȡģ����0��
���ۣ�10��9�η������Ż��˵ģ�
������㣬��ʵ2009=41x7x7 Ҳ���ǵ�40�Ժ���0�ˣ�
*/
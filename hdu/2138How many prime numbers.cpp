#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n;
	int a;
	bool b;
	int k;
	int i;
	int ans=0;
	while(scanf("%d",&n)!=EOF)	//cin>>n
	{
		ans=0;
		while(n--)
		{
			scanf("%d",&a);	//cin>>a;
			b=true;
			k=sqrt(a);	//ֱ��i<=sqrt(a)��ʱ
			for(i=2;i<=k;i++)
			{
				if(a%i==0 && a!=i)
					b=false;
					//break;	//�������������ִ���¾�
			}
			if(b)
				ans++;
		}
		//cout<<ans<<endl;
		printf("%d\n",ans);
	}
	return 0;
}
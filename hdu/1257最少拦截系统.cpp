#include<iostream>
using namespace std;

int a[30010];
int dp[30010];

int main()
{
	int N;
	int i;
	while(cin>>N)
	{
		for(i=0;i<N;i++)
			cin>>a[i];

		for(i=1;i<N;i++)
		{
		}
	}
	return 0;
}



























/*
#include<iostream>
using namespace std;

int main()
{  
	int n;
	int ans;
	int temp;
	int i,j;
	int a[10002];
	while(cin>>n)
	{
		for(i=0;i<=10001;i++)
			a[i]=300000;
		for(i=0;i<n;i++)
		{  
			cin>>temp;
			j=0;
			while(a[j]<temp)
				j++;
			a[j]=temp;
		}
		ans=0;
		for(i=0;i<10001;i++)
			if(a[i]<300000) 
				ans++;
		cout<<ans<<endl;
	}
	return 0;
}
*/





/*
//̰��
#include<iostream>
using namespace std;

int a[100000];

int main()
{
	int n;
	int ans;
	int i;
	while(cin>>n)
	{
		ans=0;

		for(i=0;i<n;i++)
			cin>>a[i];

		for(i=0;i<n;i++)
		{
			for(j=0;j<ans;j++)
			{
				if(a<
			}
		}

	}
	return 0;
}
*/



/*
//��̬�滮
#include<iostream>
using namespace std;

int a[100000];
int f[100000];

int main()
{
	int n;
	int ans;
	int i,j;
	while(cin>>n)
	{
		ans=0;
		memset(f,0,sizeof(f));

		for(i=0;i<n;i++)
			cin>>a[i];

		for(i=0;i<n;i++)
		{
			f[i]=1;
			for(j=i-1;j>=0;j--)
			{
				if(a[i]>a[j] && f[j]+1>f[i])
					f[i]=f[j]+1;
				if(ans<f[i])
					ans=f[i];
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
*/



/*
//wrong answer
#include<iostream>
using namespace std;

int a[10000];

int main()
{
	int n;
	int ans;
	int i;
	while(cin>>n)
	{
		ans=1;
		memset(f,0,sizeof(f));
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=1;i<n;i++)
		{
			if(a[i]>a[i-1])
				ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
*/




/*
����
�������߶ȵݼ�ʱ��������һ��װ�����ء�
���ǿ��Ի���˼·��һ�£���ʲô�������Ҫ��������װ�ã�
������һ������ǰ��ĳ�������ʱ������������������һ��װ���
����ʱ��Ҫ����һ��װ�á�
*/
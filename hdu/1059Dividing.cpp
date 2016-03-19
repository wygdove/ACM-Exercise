/*
//用模板
#include<iostream>
using namespace std;

int n[7];
int f[40010];

int max(int a,int b)
{
	return a>b?a:b;
}

int main()
{
	int s;
	int count=1;
	int i,j;
	while(1)
	{
		s=0;

		for(i=1;i<=6;i++)
		{
			cin>>n[i];
			s+=n[i];
		}

		if(s==0)
			break;

		if(count>1)
			cout<<endl;
		cout<<"Collection #"<<count<<":\n";

		memset(f,0,sizeof(f));

		for(i=1;i




	}
	return 0;
}
*/



/*
#include<iostream>
using namespace std;

int w[20010];
int f[40010];

int max(int a,int b)
{
	return a>b?a:b;
}

int main()
{
	int n[7];
	int v;
	int count=1;
	int sum;
	int k;
	int i,j;
	while(cin>>n[1]>>n[2]>>n[3]>>n[4]>>n[5]>>n[6] && n[1]+n[2]+n[3]+n[4]+n[5]+n[6])
	{
		sum=0;
		k=1;

		for(i=1;i<=6;i++)
		{
			sum+=i*n[i];
			for(j=1;j<=n[i];j++)//j<<=1,j=j<<1; 位运算，相当于j*2,但快很多
			{
				w[k++]=i*j;
				n[i]-=j;
			}
			if(n[i]>0)
				w[k++]=n[i]*i;
		}

		cout<<"Collection #"<<count<<":\n";

		memset(f,0,sizeof(f));

		v=sum/2;
		for(i=1;i<k;i++)
		{
			for(j=v;j>=w[i];j--)
			{
				f[j]=max(f[j],f[j-w[i]]+w[i]);
			}
		}

		if(f[v]==sum-v)
			cout<<"Can be divided.\n\n";
		else
			cout<<"Can't be divided.\n\n";

		count++;
	}
	return 0;
}
*/


//Time Limit Exceeded
#include<iostream>
using namespace std;

int w[20010];
int f[40010];

int max(int a,int b)
{
	return a>b?a:b;
}

int main()
{
	int n[7];
	int v;
	int count=1;
	int s;
	int sum;
	int k;
	int i,j;
	while(1)
	{
		s=0;
		sum=0;
		k=1;

		for(i=1;i<=6;i++)
		{
			cin>>n[i];
			s+=n[i];
		}

		if(s==0)
			break;

		for(i=1;i<=6;i++)
		{
			sum+=i*n[i];
			for(j=1;j<=n[i];j++)//j<<=1,j=j<<1; 位运算，相当于j*2,但快很多
			{
				w[k++]=i*j;
				n[i]-=j;
			}
			if(n[i]>0)
				w[k++]=n[i]*i;
		}

		cout<<"Collection #"<<count<<":\n";

		memset(f,0,sizeof(f));

		v=sum/2;
		for(i=1;i<k;i++)
		{
			for(j=v;j>=w[i];j--)
			{
				f[j]=max(f[j],f[j-w[i]]+w[i]);
			}
		}

		if(f[v]==sum-v)
			cout<<"Can be divided.\n\n";
		else
			cout<<"Can't be divided.\n\n";

		count++;
	}
	return 0;
}

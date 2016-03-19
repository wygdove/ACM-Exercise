//уря╜╩╥╧Фби
#include<iostream>
using namespace std;

int f[50];

int main()
{
	int a,b,n;
	int num;
	int i;
	while(cin>>a>>b>>n && (a+b+n))
	{
		f[1]=1;
		f[2]=1;
		for(i=3;i<=49;i++)
		{
			f[i]=(a*f[i-1]+b*f[i-2])%7;
			if(f[i]==f[i-1] && f[i]==1)
				break;
		}
		num=i-2;
		n%=num;
		if(n==0)
			cout<<f[num]<<endl;
		else
			cout<<f[n]<<endl;
	}
	return 0;
}
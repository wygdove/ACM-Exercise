#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int p,q,e,l;
	int a;
	int n,fn,d;
	int ans;
	int i,j;
	while(cin>>p>>q>>e>>l)
	{
		//memset(a,0,sizeof(a));
		//for(i=0;i<l;i++)
		//	cin>>a[i];
		n=p*q;
		fn=(p-1)*(q-1);
		//d=(1%fn)/(e%fn);
		for(i=1;;i++)
			if((i*e)%fn==1%fn)
				break;
		d=i;
		//ans=1;
		for(i=0;i<l;i++)
		{
			cin>>a;
			ans=1;
			for(j=1;j<=d;j++)
				ans=(ans*a)%n;
			//ans=ans%n;
			//cout<<ans;
			cout<<(char)ans;
		}
		cout<<endl;
	}
	return 0;
}
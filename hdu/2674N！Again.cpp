
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
最容易想到的就是2009以后的阶乘都包含有2009这个因子，
所以对2009取模都是0。
结论，10的9次方纯属吓唬人的！
再深入点，其实2009=41x7x7 也就是到40以后都是0了！
*/
#include<iostream>
using namespace std;

int main()
{
	long n;
	int i;
	while(cin>>i)
	{
		n=1;
		if(i>=0 && i<=10000)
		{
			for(;i>0;i--)
				n*=i;
		}
		printf("%d\n",n);
	}
	return 0;
}
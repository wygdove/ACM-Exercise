#include<iostream>
using namespace std;

int main()
{
	double x;
	while(cin>>x)
	{
		if(x<0)
			printf("%.2lf\n",-x);
		else
			printf("%.2lf\n",x);
	}
	return 0;
}
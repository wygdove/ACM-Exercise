#include<iostream>
using namespace std;

int main()
{
	double r;
	while(cin>>r)
		printf("%.3lf\n",r*r*r*4*3.1415927/3);
		//cout<<r*r*r*4*3.1415927/3<<endl;
	return 0;
}
#include<iostream>
using namespace std;

#define num 1000000

int a[num];

void doit()
{
	int i;
	a[0]=0;
	a[1]=1;
	a[2]=1;
	for(i=3;i<num;i++)
		a[i]=a[i-1]+a[i-2];
}

//char s[num];

int main()
{
	int n;
	//int i;
	doit();
	while(cin>>n)
	{
		cout<<a[n]<<endl;
	}
	return 0;
}

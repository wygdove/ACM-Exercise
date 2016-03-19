#include<iostream>
using namespace std;

int main()
{
	int n;
	int temp;
	int sum;
	int count=0;
	int i;
	while(cin>>n && n>0)
	{
		count++;
		sum=0;
		for(i=0;i<n;i++)
		{
			cin>>temp;
			sum+=temp;
		}
		cout<<"Sum of #"<<count<<" is "<<sum<<endl;
	}
	return 0;
}
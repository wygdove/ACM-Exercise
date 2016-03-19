#include<iostream>
using namespace std;

int main()
{
	int t;
	int n;
	double temp;
	double max;
	int i;
	while(cin>>t)
	{
		while(t--)
		{
			cin>>n;
			max=0;
			for(i=0;i<n;i++)
			{
				cin>>temp;
				if(max<temp)
					max=temp;
			}
			printf("%.2lf\n",max);
		}
	}
	return 0;
}
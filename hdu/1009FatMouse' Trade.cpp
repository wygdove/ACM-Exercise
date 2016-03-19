#include<iostream>
#include<iomanip>
using namespace std;

int J[1001],F[1001];

int main()
{
	int i,j;
	int m,n;
	int t;
	double s;

	while(cin>>m>>n && m!=-1 && n!=-1)
	{

		for(i=0;i<n;i++)
			cin>>J[i]>>F[i];


		for(i=0;i<n;i++)
		{
			for(j=0;j<n-1;j++)
			{
				if(J[j]*F[j+1]<J[j+1]*F[j])  	// J[j]/f[j] < J[j+1]/F[j+1]
				{
					t=J[j];
					J[j]=J[j+1];
					J[j+1]=t;
					t=F[j];
					F[j]=F[j+1];
					F[j+1]=t;
				}
			}
		}

		//for(i=0;i<n;i++)
		//	cout<<J[i]<<" "<<F[i]<<endl;


		s=0;
		for(i=0;i<n;i++)
		{
		    if(F[i]>m) 
			{
				s=s+(double)m*J[i]/F[i];
				break;
			}
			if(F[i]<=m) 
			{
				s+=J[i];
				m-=F[i];
			}
		}

		printf("%.3lf\n",s);
		//cout<<setiosflags(ios::showpoint)
		//	<<setprecision(5)
		//	<<s<<endl;
	}
	return 0;
}
































/*
#include<iostream>
using namespace std;

int j[1010],f[1010];

int main()
{
	int m,n;
	int i;
	while(cin>>m>>n && m!=-1 && n!=-1)
	{
		for(i=0;i<n;i++)
			cin>>j[i]>>f[i];
	}
	return 0;
}
*/
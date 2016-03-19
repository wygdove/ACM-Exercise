#include<iostream>
#include<math.h>
using namespace std;

double x[4],y[4];

int main()
{
	int n;
	double a,b,c;
	double k,t;
	double area1,area2;
	int i;
	cin>>n;
	while(n--)
	{
		for(i=1;i<=3;i++)
		{
			//cin>>x[i]>>y[i];
			scanf("%lf%lf",&x[i],&y[i]);
		}

		k=(y[3]-y[2])/(x[3]-x[2]);
		t=y[2]-k*x[2];

		a=(y[2]-y[1])/pow((x[2]-x[1]),2);
		b=-2*a*x[1];
		c=y[1]-a*pow(x[1],2)-b*x[1];

		area1=0;
		area2=0;	
		area1= 1.0/3*a*pow(x[3],3) + 1.0/2*(b-k)*pow(x[3],2) + (c-t)*x[3];
		area2= 1.0/3*a*pow(x[2],3) + 1.0/2*(b-k)*pow(x[2],2) + (c-t)*x[2];

		//cout<<area2-area1<<endl;
		printf("%.2lf\n",area1-area2);
	}
	return 0;
}
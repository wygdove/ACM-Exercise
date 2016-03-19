#include<iostream>
#include<math.h>
using namespace std;

int x[110],y[110];

int main()
{
	int n;
	double ans;
	double tem;
	int i;
	while(cin>>n && n)
	{
		for(i=0;i<n;i++)
			cin>>x[i]>>y[i];
		ans=0;
		tem=0;
		for(i=0;i<n-1;i++)
		{
			tem=((x[0]-x[i+1])*(y[i]-y[i+1])-(x[i]-x[i+1])*(y[0]-y[i+1]))/2.0;
			ans+=tem;
		}
		ans=fabs(ans);
		printf("%.1f\n",ans);
	}
	return 0;
}


























/*
//三角形面积分割时不行的，因为是凹凸多边形的时候就无能为力了！
#include<iostream>
#include<math.h>
using namespace std;

int x[110],y[110];
int m[110];

double area(int i)
{
	double a,b,c;
	double t;
	double s;
	a=sqrt(pow((x[i]-x[0]),2)+pow((y[i]-y[0]),2));
	b=sqrt(pow((x[i+1]-x[i]),2)+pow((y[i+1]-y[i]),2));
	c=sqrt(pow((x[i+1]-x[0]),2)+pow((y[i+1]-y[0]),2));
	s=(a+b+c)/2;
	t=sqrt(s*(s-a)*(s-b)*(s-c));
	return t;
}

int main()
{
	int n;
	double ans;
	int i;
	while(cin>>n && n)
	{
		for(i=0;i<n;i++)
			cin>>x[i]>>y[i];
		ans=0;
		for(i=1;i<n-1;i++)
			ans+=area(i);

		//cout<<ans<<endl;
		printf("%.1f\n",ans);
	}
	return 0;
}
*/


















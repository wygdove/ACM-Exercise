/**/
#include<iostream>
#include<math.h>
using namespace std;

double x[110],y[110],x2[110],y2[110];
double k[110];

bool getpos(int i,int j)
{
	double b=y[j]-k[j]*x[j];
	double t1=(y[i]-k[j]*x[i]-b);
	double t2=(y2[i]-k[j]*x2[i]-b);
	return (t1*t2<=0);
}

int main()
{
	int n;
	int sum;
	int i,j;
	while(cin>>n && n)
	{
		sum=0;
		for(i=0;i<n;i++)
		{
			cin>>x[i]>>y[i]>>x2[i]>>y2[i];
			k[i]=(y2[i]-y[i])/(x2[i]-x[i]);
			for(j=0;j<i;j++)
			{
				if(getpos(i,j) && getpos(j,i))
					sum++;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}




/*
//wrong
#include<iostream>
using namespace std;

double x[110],y[110];

int main()
{
	int n;
	double a,b,c,d;
	int i;
	//int j;
	int ans;
	while(cin>>n)
	{
		ans=0;
		for(i=0;i<n;i++)
		{
			cin>>a>>b>>c>>d;
			x[i]=c-a;
			y[i]=d-b;
		}
		for(i=0;i<n;i++)
		{
			if(x[i]==x[i+1] && y[i]==y[i+1])
			{
				ans++;
				continue;
			}
			if(x[i]*y[i+1]-x[i+1]*y[i]<0 || x[i+1]*y[i]-x[i]*y[i+1]<0)
			{
				ans++;
			}
		}
		if(n>2)
		{
			if(x[0]==x[n] && y[0]==y[n])
				ans++;
			else if(x[0]*y[n]-x[n]*y[0]<0 || x[n]*y[0]-x[0]*y[n]<0)
				ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
*/
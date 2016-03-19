
//³¬Ê±
#include<iostream>
#include<math.h>
using namespace std;

int x[50010],y[50010];

int main()
{
	int n;
	double tem;
	double max;
	int i,j,k;
	while(cin>>n)
	{
		for(i=0;i<n;i++)
			scanf("%d%d",&x[i],&y[i]);
			//cin>>x[i]>>y[i];
		max=0;
		tem=0;
		for(i=0;i<n;i++)
		{
			for(j=0;i!=j,j<n-1;j++)
			{
				for(k=0;j!=k,k<n;k++)
				{
					tem=((x[i]-x[k])*(y[j]-y[k])-(x[j]-x[k])*(y[j]-y[k]))/2.0;
					if(max<tem)
						max=tem;
				}
			}
		}
		printf("%.2f\n",max);
	}
	return 0;
}





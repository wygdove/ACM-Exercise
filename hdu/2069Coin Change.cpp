#include<iostream>
using namespace std;

int c1[255][105],c2[255][105];
int coin[6] = {0,1,5,10,25,50};

int main()
{
    int n;
    int i,j,k;
	int l;
	
    memset(c1,0,sizeof(c1));
    memset(c2,0,sizeof(c2));
    for(i = 0;i <= 100;i+=coin[1])
	{
        c1[i][i]=1;
		c2[i][i]=0;
    }
	
    n=250;
    for(i=2;i<=5;i++)
	{
        for(j=0;j<=n;j++)
		{
            for(k=0;k+j<=n;k+=coin[i])
			{
                for(l=0;l+k/coin[i]<=100;l++)
				{
                    c2[k+j][l+k/coin[i]]+=c1[j][l];
                }
            }
        }
        for(k=0;k<=n;k++)
		{
            for(l=0;l<=100;l++)
			{
                c1[k][l]=c2[k][l];
                c2[k][l]=0;
            }
        }
    }
    while(cin>>n)
	{
        int sum=0;
        for(i=0;i<=100;i++)
		{
            sum+=c1[n][i];
        }
		cout<<sum<<endl;
    }

    return 0;
}






















/*
#include<iostream>
using namespace std;

int main()
{
	int n;
	int a,b,c,d,e;
	int s;
	while(cin>>n)
	{
		s=0;
		for(a=0;a<=100;a++)
			for(b=0;b*5<=n;b++)
				for(c=0;c*10<=n;c++)
					for(d=0;d*25<=n;d++)
						for(e=0;e*50<=n;e++)
							if(a+5*b+10*c+25*d+50*e==n && a+b+c+d+e<=100)
								s++;
		cout<<s<<endl;
	}
	return 0;
}
*/

/*
//测试数据在101之后不符
#include <iostream>
using namespace std;

int c1[260],c2[260];

int main()
{	
	int a[6]={1,5,10,25,50};
	int n=0;
	int i,j,k;
	while (scanf("%d",&n)!=EOF)
	{	
		if(n==0)
		{
			cout<<"1"<<endl;
			break;
		}
		for (i=0;i<=n;i++)
		{	
			c1[i]=1;	
			c2[i]=0;	
		}
		for (i=2;i<=5;i++)
		{	
			for (j=0;j<=n;j++)
			{
				for (k=0;k+j<=n;k+=a[i-1])
				{	
					c2[j+k]+=c1[j];
				}
			}
			for (j=0;j<=n;j++)
			{	
				c1[j]=c2[j];	
				c2[j]=0;	
			}
		}
		cout<<c1[n]<<endl;
	}
	return 0;
}
*/
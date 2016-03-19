#include<iostream>
#include<math.h>
using namespace std;

int gcd(int a,int b)
{
    int t;
    while(b)
    {
        t=a%b;
        a=b;
        b=t;
    }
    return a;
}

int main()
{
	int l;
	int sx,sy,px,py;
	int x,y;
	while(cin>>l && l)
	{
		//cin>>sx>>sy>>px>>py;
		scanf("%d%d%d%d",&sx,&sy,&px,&py);

		if(abs(sx)>l || abs(sy)>l || abs(px)>l || abs(py)>l)
		{
			cout<<"Out Of Range\n";
			continue;
		}

		x=abs(px-sx);
		y=abs(py-sy);

		if(gcd(x,y)==1)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}













/*
//判断是否有其它点在直线上
//Time Limit Exceeded
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int l;
	int sx,sy,px,py;
	double k;
	bool bl;
	int i,j;
	while(cin>>l && l)
	{
		//cin>>sx>>sy>>px>>py;
		scanf("%d%d%d%d",&sx,&sy,&px,&py);

		if(abs(sx)>l || abs(sy)>l || abs(px)>l || abs(py)>l)
		{
			cout<<"Out Of Range\n";
			continue;
		}

		bl=false;
		if(px!=sx)
		{
			k=(py-sy)/(px-sx);
			for(i=sx+1;i<=l;i++)
			{
				for(j=sx+1;j<=l;j++)
				{
					if(i!=px && j!=py)
						if(i-sy==k*(j-sx))
							bl=true;
				}
				if(bl)
					break;
			}
			if(!bl)
			{
				for(i=sx-1;i>=-l;i--)
				{
					for(j=sx-1;j>=-l;j--)
					{
						if(i!=px && j!=py)
							if(i-sy==k*(j-sx))
								bl=true;
					}
					if(bl)
						break;
				}
			}
		}
		else
		{
			if(py+1==sy || py-1==sy)
				bl=true;
		}

		if(bl)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}
*/
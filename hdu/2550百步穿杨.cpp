#include<iostream>
#include<algorithm>
using namespace std;

struct Arrow
{
	int len;
	int num;
}a[50];

/*
int cmp( const void *a , const void *b )
{
	struct Arrow *c = (Arrow *)a;
	struct Arrow *d = (Arrow *)b;
		return c->len - d->len;
}*/


bool cmp(Arrow b,Arrow d)
{
	return b.len<d.len;
}



//char x[100];
char x='-';

int main()
{
	int t;
	int n;
	//int i;
	int i,j,k;
	//memset(x,'-',sizeof(x));
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
			cin>>a[i].len>>a[i].num;

		//qsort(a,50,sizeof(a[0]),cmp);
		sort(a,a+n,cmp);
		
		
		//for(i=0;i<n;i++)
		//	cout<<a[i].len<<" "<<a[i].num<<endl;
		for(i=0;i<n;i++)
		{
			for(j=0;j<a[i].num;j++)
			{
				cout<<">+";
				for(k=0;k<a[i].len-2;k++)
				{
					cout<<x;
				}
				cout<<"+>";
				cout<<endl;
			}
			cout<<endl;
		}
	}
	return 0;
}
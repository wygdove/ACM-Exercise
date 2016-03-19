#include<iostream>
using namespace std;

struct Rice
{
	int p;
	int h;
}r[1010];


//按照p从小到大排序，当p相等时按照h从大到小排序
int cmp( const void *a , const void *b )
{
	struct Rice *c = (Rice *)a;
	struct Rice *d = (Rice *)b;
	if(c->p != d->p)
		return c->p - d->p;
	else
		return d->h - c->h;
}


int main()
{
	int c;
	int n,m;
	int i;
	double sum;
	cin>>c;
	while(c--)
	{
		cin>>n>>m;
		for(i=0;i<m;i++)
			cin>>r[i].p>>r[i].h;
		qsort(r,m,sizeof(r[0]),cmp);

		sum=0;
		for(i=0;i<m;i++)
		{
			if(n>r[i].p*r[i].h)
			{
				sum+=r[i].h;
				n-=r[i].p*r[i].h;
			}
			else
			{
				sum+=n*1.0/r[i].p;
				break;
			}
		}
		printf("%.2lf\n",sum);
	}
	return 0;
}
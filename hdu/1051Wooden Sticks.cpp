#include<iostream>
using namespace std;

struct S
{
	int l;
	int w;
	int m;	//mark
}s[5010];


int cmp( const void *a , const void *b )
{
	struct S *c = (S *)a;
	struct S *d = (S *)b;
	if(c->l != d->l)
		return c->l - d->l;
	else
		return d->w - c->w;
}

int main()
{
	int t;
	int n;
	int i,j;
	int time;
	int tl,tw;	//templ,tempw;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
			cin>>s[i].l>>s[i].w;
		for(i=0;i<n;i++)
			s[i].m=0;
		time=1;
		//按照l从小到大排序，当l相等时按照w从大到小排序
		qsort(s,n,sizeof(s[0]),cmp);
		//分块，算时间
		for(i=0;i<n;i++)
		{
		}
		cout<<time<<endl;
	}
	return 0;
}




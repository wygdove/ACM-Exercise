#include<iostream>
#include<algorithm>
using namespace std;

struct Blocks
{
    int a;
    int b;
    int c;
    int d;
}x[1010];

int cmp( const void *p , const void *q )
{
	struct Blocks *r = (Blocks *)p;
	struct Blocks *s = (Blocks *)q;
	if(r->c != s->c)
		return s->c - r->c;
	else
		return r->d - s->d;
}

int main()
{
    int n;
    int ans;
    int i,j;
    while(cin>>n && n)
    {
        for(i=0;i<n;i++)
            cin>>x[i].a>>x[i].b>>x[i].c>>x[i].d;

        qsort(x,n,sizeof(x[0]),cmp);

        ans=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(j==i)
                    continue;
                if(x[i].c>x[j].c && x[i].d<x[j].d)
                    ans+=x[i].c;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}

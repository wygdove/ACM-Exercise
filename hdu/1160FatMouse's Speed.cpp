#include<iostream>
#include<algorithm>
using namespace std;


int a[10050];
int b[10050]; 


struct Mouse
{
	int w;	//weight
	int s;	//speed
	int n; 	//No.
}m[10050];


int cmp(Mouse a,Mouse b)
{
	if(a.w!=b.w)
		return a.w>b.w;
	else
		return a.s<b.s;
}

int main()
{

	int i,j;
	int num;
	int temp;
	int max;
	int max2;
	int last;
    
    max=0;
    memset(a,0,sizeof(a));
    for(i=1;i<=10050;i++)
    {
      b[i]=i;
    }
	
	num=1;
	while(scanf("%d%d",&m[num].w,&m[num].s)!=EOF)
	{
		m[num].n=num;
		num++;
	}
	
    
    sort(m+1,m+num,cmp);
	//qsort(m,num+1,sizeof(m[1]),cmp);
    
	
	//for(i=1;i<=num;i++)
	//	cout<<m[i].w<<" "<<m[i].s<<endl;
	
    for(i=1;i<=num-1;i++)
    {
		max2=0;          
		for(j=i-1;j>=1;j--)                  
		{
			if((m[j].w>m[i].w)&&(m[j].s<m[i].s))                  
			{
				if(max2<a[j]) 
				{
					max2=a[j];
					temp=j;
				}
			}
		}
      
		if(max2)
			b[m[i].n]=m[temp].n;
      
		a[i]=max2+1;
      
		if(a[i]>max)
		{
			max=a[i];
			last=m[i].n;
		}
	}

	printf("%d\n",max);
	while(b[last]!=last)
	{
		printf("%d\n",last);
		last=b[last];
	}
	printf("%d\n",last);


     return 0;      
}




























/*
#include<iostream>
using namespace std;

struct Mouse
{
	int w;	//weight
	int s;	//speed
	int n;	//num
}m[1010];

//按照w从小到大排序，当w相等时按照s从大到小排序
int cmp( const void *a , const void *b )
{
	struct Mouse *c = (Mouse *)a;
	struct Mouse *d = (Mouse *)b;
	if(c->w != d->w)
		return c->w - d->w;
	else
		return d->s - c->s;
}

int main()
{
	int i,j;
	int count;
	int num;
	num=1;
	while(cin>>m[num].w>>m[num].s)
	{
		m[num].n=num;
		num++;
	}
	qsort(m,num+1,sizeof(m[1]),cmp);
	return 0;
}
*/
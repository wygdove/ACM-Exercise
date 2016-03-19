#include<iostream>
#include<stdlib.h>
using namespace std;

int a[101];
int b[101];
int c[101];

int cmp(const void* a,const void *b)
{
	return *(int*)a - *(int*)b;
}

int main()
{
	int n,m;
	int i,j;
	int lenc;
	while((cin>>n>>m) &&(n||m))
	{
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<m;i++)
			cin>>b[i];
		qsort(a,n,sizeof(a[0]),cmp);
		qsort(b,m,sizeof(b[0]),cmp);
		lenc=0;
		for(i=0;i<n;i++)
			c[i]=-1;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(a[i]==b[j])
				{
					c[i]=a[i];
					lenc+=1;
				}
			}
		}
		if(lenc==n)
			cout<<"NULL";
		else
		{
			for(i=0;i<n;i++)
			{
				if(a[i]!=c[i])
					cout<<a[i]<<" ";
			}
		}
		cout<<endl;
	}	
	return 0;
}












/*//数组c的初始化问题
#include<iostream>
#include<stdlib.h>
using namespace std;

int a[101];
int b[101];
int c[101];

int cmp(const void* a,const void *b)
{
	return *(int*)a - *(int*)b;
}

int main()
{
	int n,m;
	int i,j;
	int lenc;
	while(cin>>n>>m && n!=0 && m!=0)
	{
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<m;i++)
			cin>>b[i];
		qsort(a,n,sizeof(a[0]),cmp);
		qsort(b,m,sizeof(b[0]),cmp);
		lenc=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(a[i]==b[j])
				{
					c[i]=a[i];
					lenc+=1;
				}
			}
		}
		if(lenc==n)
			cout<<"NULL";
		else
		{
			for(i=0;i<n;i++)
			{
				if(a[i]!=c[j])
				{
					cout<<a[i]<<" ";
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
*/


/*
#include<iostream>
using namespace std;

int a[101];
int b[101];
int c[101];

int cmp(const void* a,const void *b)
{
	return *(int*)a - *(int*)b;
}

int main()
{
	int n,m;
	int i,j;
	int lenc;
	while(cin>>n>>m && n!=0 && m!=0)
	{
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<m;i++)
			cin>>b[i];
		qsort(a,n,sizeof(a[0]),cmp);
		qsort(b,n,sizeof(b[0]),cmp);
		lenc=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(a[i]==b[j])
				{
					goto L;
				}
			}
			cout<<a[i]<<" ";
				lenc=1;
L:;
		}
		if(lenc==0)
			cout<<"NULL";
		cout<<endl;
	}
	return 0;
}
*/

/*//无输出
#include<iostream>
#include<set>
using namespace std;

int a[101];
int b[101];
int c[101];


int cmp(const void* a,const void *b)
{
	return *(int*)a - *(int*)b;
}

int main()
{
	set<int> s;
	int n,m;
	int i,j;
	int lenc;
	while(cin>>n>>m && n!=0 && m!=0)
	{
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			s.insert(a[i]);
		}
		for(i=0;i<m;i++)
		{
			cin>>b[i];
			s.insert(b[i]);
		}
		qsort(a,n,sizeof(a[0]),cmp);
		lenc=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(a[i]==b[j])
				{
					c[i]=a[i];
					lenc++;
				}
			}
		}
		set<int>::iterator it;
		for(it=s.begin(),i=0;it!=s.end(),i<n;it++,i++)
		{
			if(c[i]==*it)
				s.erase(c[i]);
			if(b[i]==*it)
				s.erase(b[i]);
		}
		if(lenc==n)
			cout<<"NULL";
		else
		{
		for(it=s.begin();it!=s.end();it++)
			cout<<*it<<" ";
		}
		for(i=0;i<n;i++)
			if(i=n-1)
				cout<<endl;
	}
	return 0;
}
*/


/*
#include<iostream>
#include<set>
using namespace std;

int main()
{
	set<int> sa;
	set<int> sb;
	set<int> sc;
	int n,m;
	int i,j;
	int lenc;
	while(cin>>n>>m && n!=0 && m!=0)
	{
		for(i=0;i<n;i++)
			sa.insert(i);
		for(i=0;i<m;i++)
			sb.insert(i);
		set<int>sa::iterator it1;
		set<int>sb::iterator it2;
		set<int>sc::iterator it3;
		lenc=0;
		for(it1=sa.begin();it1!=sa.end();it1++)
		{
			for(it2=sb.begin();it2!=sb.end();it2++)
			{
				if(*it1==*it1)
				{
					*it3=*it1;
					lenc++;
				}
			}
		}
		for(it3=sc.begin(),i=0;it3!=sc.end(),i<n;it3++,i++)
			c[i]=*it3;
		if(lenc==n)
			cout<<"NULL";
		else
		{
			//qsort(a,n,sizeof(a[0]),cmp);
			for(it1=sa.begin(),i=0;it1!=sa.end(),i<n;it1++,i++)
			{
				if(*it1==c[i])
					cout<<*it1<<" ";
			}
		}
		for(i=0;i<n;i++)
			if(i=n-1)
				cout<<endl;
	}
	return 0;
}
*/



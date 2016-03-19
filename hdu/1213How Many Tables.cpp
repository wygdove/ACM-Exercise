#include<iostream>
using namespace std;

int parent[1000];
int rank[1000];
int table;

void make_set()
{
	int i;
	for(i=1;i<1000;i++)
	{
		parent[i]=i;
		rank[i]=1;
	}
}

int find(int x)
{
	if(x!=parent[x])
		parent[x]=find(parent[x]);
	return parent[x];
}

void union_set(int x,int y)
{
	x=find(x);
	y=find(y);
	if(x!=y)
	{
		if(rank[x]<rank[y])
		{
			parent[x]=y;
			rank[y]+=rank[x];
		}
		else
		{
			parent[y]=x;
			rank[x]+=rank[y];
		}
	}
}

int main()
{
	int t;
	int n,m;
	int a,b;
	int i,j;
	while(cin>>t)
		if(t>=1 && t<=25)
		{
			for(i=0;i<t;i++)
			{
				cin>>n>>m;
				make_set();
				for(j=0;j<m;j++)
				{
					cin>>a>>b;
					union_set(a,b);
					
				}
				table=0;
				for(j=1;j<=n;j++)
				{
					if(parent[j]==j)
						table++;
				}
				cout<<table<<endl;
			}
		}
	return 0;
}
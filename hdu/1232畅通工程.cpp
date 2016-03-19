#include <iostream>
using namespace std;

int parent[1001],rank[1001];
int road;

void make_set()
{
    int i;
    for(i=1;i<1001;i++)
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
	int n=0,m=0;
	int a=0,b=0;
	int i,j;
	while(cin>>n)
	{
		if(n==0)
			return 0;
		else
		{
			make_set();
			cin>>m;
			if(m==0)
				cout<<n-1<<endl;
			else
			{
				for(i=0;i<m;i++)
				{
					cin>>a>>b;
					union_set(a,b);
				}
				road=0;
				for(j=1;j<=n;j++)
				{
					if(parent[j]==j)
					road++;
				}
				cout<<road-1<<endl;
			}
		}
	}
	return 0;
}
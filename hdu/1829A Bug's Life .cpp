#include<iostream>
using namespace std;


int parent[2010],rank[2010];
int a1[2010];

void make_set()  
{
	int i;
	for(i=1;i<2010;i++)
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
	x=find(x),y=find(y);
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
	{
		for(i=0;i<t;i++)
		{
			cin>>n>>m;
			if(n>=1 && n<=2000 && m>=0 && m<=1000000)
			{
				make_set();
				if(m==0)
					cout<<"Scenario #"<<i+1<<":\n"
						<<"No suspicious bugs found!\n\n";
				for(j=0;j<m;j++)
				{
					cin>>a>>b;
					union_set(a,b);
					a1[j]=a;
				}
				cout<<"Scenario #"<<i+1<<":\n";
				for(j=0;j<m;j++)
				{
					for(int j2=0;j2<m;j2++)
					{
						if(a1[j]==a1[j2])
							cout<<"Suspicious bugs found!\n";
						else
							cout<<"No suspicious bugs found!\n";
						cout<<endl;
					}
				}
			}
		}
	}
	return 0;
}


				//cout<<"Scenario #"<<i+1<<":\n";
				//try 1
				/*for(j=0;j<n;j++)
				{
					if(parent[j]==j)
						num++;
				}
				if(num%2==0)
					cout<<"Suspicious bugs found!\n\n";
				else
					cout<<"No suspicious bugs found!\n\n";*/
				//try 2
				/*for(j=0;j<n;j++)
					if(rank[j]%2==0)
					{
						cout<<"Scenario #"<<i+1<<":\n"
							<<"Suspicious bugs found!\n\n";
						break;
					}
					else
					{
						cout<<"Scenario #"<<i+1<<":\n"
							<<"No suspicious bugs found!\n\n";
						break;
					}*/
				//try 3
				/*for(j=0;j<n;j++)
				{
					if(parent[j]==j)
					{
						if(rank[j]%2!=0)
						{
							cout<<"Scenario #"<<i+1<<":\n"
								<<"Suspicious bugs found!\n\n";
							break;
						}
						else
						{
							cout<<"Scenario #"<<i+1<<":\n"
								<<"No suspicious bugs found!\n\n";
							break;
						}
					}
				}*/

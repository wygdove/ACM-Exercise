



























/*
#include<iostream>
using namespace std;

char s[200020][20];


int main()
{
	int c,f;
	int i,j;
	int n;
	cin>>c;
	while(c--)
	{
		n=2;
		cin>>f;
		for(i=1;i<=f;i++)
		{
			cin>>s[i*2-1];
			cin>>s[i*2];
			for(j=1;j<=i*2;j++)
			{
				if(strcmp(s[j],s[j+1])==0)
				{
					n++;
					continue;
				}
			}
			cout<<n<<endl;
		}
	}
	return 0;
}
*/

/*
#include <iostream>
using namespace std;

int parent[100001],rank[100001];
char a[20],b[20];

void make_set()
{
    int i;
    for(i=1;i<100001;i++)
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

void union_set(char x,char y)
{
	//if(strcmp(
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
	int f;
	int i,j;
	cin>>t;
	while(t--)
	{
		cin>>f;
		make_set();
		for(i=1;i<=f*2;i++)
		{
			c[i][0]=i*2-1;
			c[i][1]=i*2;
		}
		for(i=1;i<=f;i++)
		{
			cin>>a;
			cin>>b;
			if(strcmp(a,b)!=0)
				union_set(a,b);

			for(i=1;i<=f;i++)
			{
				for(j=0;j<2;j++)
				{
					if(parent[c[i][j]==c[i][j]])
						cout<<rank[c[i][j]]<<endl;
					break;
				}
				break;
			}
		}
	}
	return 0;
}
*/

/*
int main()
{
	int t;
	int f;
	int i,j;
	cin>>t;
	while(t--)
	{
		cin>>f;
		make_set();
		for(i=1;i<=f*2;i++)
		{
			c[i][0]=i*2-1;
			c[i][1]=i*2;
		}
		for(i=1;i<=f;i++)
		{
			cin.getline(a,20);
			cin.getline(b,20);
			if(strcmp(a,b)!=0)
				union_set(c[i][0],c[i][1]);

			for(i=1;i<=f;i++)
			{
				for(j=0;j<2;j++)
				{
					if(parent[c[i][j]==c[i][j]])
						cout<<rank[c[i][j]]<<endl;
					break;
				}
				break;
			}
		}
	}
	return 0;
}*/
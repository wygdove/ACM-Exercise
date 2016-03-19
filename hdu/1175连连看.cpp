/*#include <iostream>
#include<string>
using namespace std;

const int M=1002;
int a[M][M],b[5][3]={{1,0},{0,1},{-1,0},{0,-1}};
bool c[M][M];
int n,m,x2,y2;
bool f= false;

void dfs(int x,int y,int xx,int yy)
{
    int i,s1,s2,s3;
    if(c[x][y]||f||xx>2)
     return;
        c[x][y]=true;
        for(i=0;i<4;i++)
        {
        s1=x+b[i][0];
        s2=y+b[i][1];
        if(yy!=i)
            s3=xx+1;
        else 
            s3=xx;
        if(s1==x2&&s2==y2&&s3<=2)
        {
            f=true;
            return ;
        }
        if(!a[s1][s2]&&!c[s1][s2])
            dfs(s1,s2,s3,i);
        }
        c[x][y]=false;
}

int main()
{
    while(scanf("%d%d",&n,&m),(n||m))
    {
        int i,j;
        memset(a,-1,sizeof(a));
        for(i=1;i<=n;i++)
            for(j=1;j<=m;j++)
                scanf("%d",&a[i][j]);
        int q;
        scanf("%d",&q);
        int x1,y1;
        while(q--)
        {
            scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
            f=false;
             memset(c,false,sizeof(c));
            if(a[x1][y1]==0||a[x1][y1]!=a[x2][y2]);
            else    dfs(x1,y1,-1,-1);
            if(f)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}
*/





#include<iostream>
using namespace std;

const int num=1000;
int nm[num][num];
int xy[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
bool c[num][num];
int n,m;
int x2,y2;
bool f=false;

void dfs(int x,int y,int xx,int yy)
{
	int s1,s2,s3;
	int i;
	if(c[x][y] || f || xx>2)
		return ;
	c[x][y]=true;
	for(i=0;i<4;i++)
	{
		s1=x+xy[i][0];
		s2=y+xy[i][1];
		if(yy!=i)
			s3=xx+1;
		else
			s3=xx;
		if(s1==x2 && s2==y2 && s3<=2)
		{
			f=true;
			return ;
		}
		if(!nm[s1][s2] && !c[s1][s2])
			dfs(s1,s2,s3,i);
	}
	c[x][y]=false;
}

int main()
{
	while(scanf("%d%d",&n,&m) && (n+m))
	{
		int q;
		int i,j;
		memset(nm,-1,sizeof(nm));
		for(i=1;i<=n;i++)
			for(j=1;j<=m;j++)
				scanf("%d",&nm[i][j]);
		int x1,y1;
		scanf("%d",&q);
		while(q--)
		{
			scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
			f=false;
			memset(c,false,sizeof(c));
			if(nm[x1][y1]!=nm[x2][y2] || nm[x1][y1]==0)
				;
			else
				dfs(x1,y1,-1,-1);
			if(f)
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
	return 0;
}






/*
#include<iostream>
using namespace std;

int nm[1010][1010];
int x1,y1,x2,y2;
int n,m;
int q;
int i,j;

void fn(int x1,int y1,int x2,int y2);
bool fn1(int x1,int y1,int x2,int y2);
bool fn2(int x1,int y1,int x2,int y2);
bool fn3(int x1,int y1,int x2,int y2);


int main()
{
	while(cin>>n>>m && (n+m))
	{
		for(i=1;i<=n;i++)
			for(j=1;j<=m;j++)
				cin>>nm[i][j];
		cin>>q;
		for(i=1;i<=q;i++)
		{
			cin>>x1>>y1>>x2>>y2;
			if(nm[x1][y1]!=nm[x2][y2] || nm[x1][y1]==0 || nm[x2][y2]==0)
				cout<<"NO\n";
			else
			{
				fn(x1,y1,x2,y2);
			}
		}
	}
	return 0;
}

void fn(int x1,int y1,int x2,int y2)
{
	if(x1==x2 || y1==y2)
		if(fn1(x1,y1,x2,y2))
			cout<<"YES\n";
		else
			cout<<"NO\n";
	else
	{
		if(nm[x1][y2]==0 || nm[x2][y1]==0)
			if(fn2(x1,y1,x2,y2))
				cout<<"YES\n";
			else
				cout<<"NO\n";
	}
}



//两个1可直接相连

//0 0 0 1
//0 0 0 1

//0 0 1 1

bool fn1(int x1,int y1,int x2,int y2)	
{
	if(x1==x2)
	{
		for(j=1;j<m;j++)
		{
			if(nm[x1][y1+j]==0 || nm[x1][y1+j]==nm[x2][y2])
				return true;
		}
	}
	if(y1==y2)
	{
		for(j=1;j<n;j++)
		{
			if(nm[x1+j][y1]==0 || nm[x1+j][y1]==nm[x2][y2])
				return true;
		}
	}
	return false;
}



//有一个折点可直接相连

//1 0 0 0
//0 0 0 0
//0 0 0 1

bool fn2(int x1,int y1,int x2,int y2)
{
	if(nm[x1][y2]==0)
	{
		if(fn1(x1,y1,x1,y2))
			if(fn1(x1,y2,x2,y2))
				return true;
	}
	else
	{
		if(nm[x2][y1]==0)
			if(fn1(x1,y1,x2,y1))
				if(fn1(x2,y1,x2,y2))
					return true;
	}
	return false;
}



//与1直接相连的一个空点可与另一个1有一个折点直接相连

//1 0 0 2
//0 0 0 0
//2 0 0 1

bool fn3(int x1,int y1,int x2,int y2)
{
}
*/
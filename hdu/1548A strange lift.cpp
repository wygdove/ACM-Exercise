#include<iostream>
#include<queue>
using namespace std;

int ki[201];
int symbol[201];	//存放到达这一楼层的最小距离的标记      标记计数二合一

int bfs(int ki[],int n,int a,int b)
{
	int front,num,temp;
	queue<int> q;
	q.push(a);

	while(!q.empty())
	{
		front=q.front();
		q.pop();
		if(front==b)
			return symbol[front];
		if(n>=ki[front]+front && symbol[front+ki[front]]==0)
		{
			temp=ki[front]+front;
			q.push(temp);
			symbol[temp]=symbol[front]+1;
		}
		if(1<=front-ki[front] && symbol[front-ki[front]]==0)
		{
			temp=front-ki[front];
			q.push(temp);
			symbol[temp]=symbol[front]+1;
		}
	}
	return -1;
}

int main()
{
	int n,a,b;
	while((cin>>n) && n)
	{
		cin>>a>>b;
		memset(symbol,0,sizeof(symbol));
		for(int i=1;i<=n;i++)
			cin>>ki[i];
		cout<<bfs(ki,n,a,b)<<endl;
	}
	return 0;
}



/*
#include<iostream>
using namespace std;

int x[210];

int main()
{
	int n,a,b;
	int i;
	while(cin>>n && n)
	{
		cin>>a>>b;
		for(i=0;i<n;i++)
			cin>>x[i];
	}
	return 0;
}
*/
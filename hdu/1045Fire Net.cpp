#include<iostream>
using namespace std;

char map[5][5];

int main()
{
	int n;
	int i,j;
	while(cin>>n && n && n<=4)
	{
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				cin>>map[i][j];
	}		
	return 0;
}
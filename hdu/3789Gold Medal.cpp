#include<iostream>
using namespace std;

struct Nation
{
	int gm;	 //gold medal
	int med;	 //medal
	int p;	 //population
	int num;
}n[100];

int m[100];

int main()
{
	int N,M;
	int i,j;

	while(cin>>N>>M)
	{
		for(i=0;i<n;i++)
		{
			cin>>n[i].gm>>n[i].m>>n[i].p;
			n[i].num=i;
		}
		for(i=0;i<M;i++)
			cin>>m[i];



	}
	return 0;
}
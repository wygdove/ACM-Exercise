#include<iostream>
using namespace std;

double a[10][10];
double b[10];
double b2[10];

int cmp(const void* a,const void* b)
{
	return *(int*)a - *(int*)b;
}

int main()
{
	int N,M,K;
	int i,j;
	while(cin>>N>>M>>K)
	{
		for(i=0;i<N;i++)
			for(j=0;j<M;j++)
				cin>>a[i][j];
		for(j=0;j<M;j++)
		{
			for(i=0;i<N;i++)
				b[j]+=a[i][j];
		}
		for(i=0;i<M;i++)
			b2[i]=b[i];
		qsort(b2,M,sizeof(b2[0]),cmp);
		for(i=0;i<K;i++)
		{
			for(j=0;j<M;j++)
			{
				if(b2[i]==b[j])
				{
					cout<<j+1;
					if(i!=K-1)
						cout<<" ";
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
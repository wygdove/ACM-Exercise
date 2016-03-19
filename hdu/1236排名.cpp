/*
#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

int score[1010];
int qscore[1010];
int num;
int N,M,G;
int g[12];
char sn[1010][21];
//string sn[1010];
int m[12],mn[12][12];
	int tscore;
	//string tsn;
	//string tsn2;


int cmp(const void* a,const void* b)
{
	return *(int*)b - *(int*)a;
}

int main()
{
	int i,j,a;
	while(scanf("%d",&N) && N!=0)	//cin>>N && N!=0
	{
		scanf("%d %d",&M,&G);	//cin>>M>>G;
		for(i=1;i<=M;i++)
			scanf("%d",&g[i]);	//cin>>g[i];
		for(i=0;i<N;i++)
		{
			scanf("%s",&sn[i]);	//cin>>sn[i];
			scanf("%d",&m[i]);	//cin>>m[i];
			for(j=0;j<m[i];j++)
				scanf("%d",&mn[i][j]);	//cin>>mn[i][j];
		}
		for(a=0;a<N;a++)
		{
			score[a]=0;
			qscore[a]=0;
		}
		num=0;
		for(a=0;a<N;a++)
		{
			for(j=0;j<m[a];j++)
				score[a]+=g[mn[a][j]];
		}
		for(a=0;a<N;a++)
		{
			if(score[a]>=G)
				num++;
		}
		printf("%d\n",num);	//cout<<num<<endl;
		for(i=0;i<N;i++)
			qscore[i]=score[i];
		qsort(qscore,N+1,sizeof(qscore[0]),cmp);
		///*for(i=0;i<N;i++)
		{
			for(j=0;j<N-i;j++)
			{
				/*if(qscore[i]==qscore[i+1])
				{
					if(sn[i]>sn[i+1])
					{
						tsn=sn[i];
						tsn2=sn[i+1];
						sn[i]=tsn2;
						sn[i+1]=tsn;
					}
				}*
				if(qscore[i]<qscore[i+1])
				{
					tscore=qscore[i];
					qscore[i]=qscore[i+1];
					qscore[i+1]=tscore;
				}*
			}
		}
		if(num!=0)//if(1)
		{
			for(i=0;i<N;i++)
			{
				for(j=N-1;j>=0;j--)
				{
					if(qscore[i]==score[j] && score[j]>=G)
					{
						//printf("%s %d\n",sn[j],score[j]);		
						cout<<sn[j]<<" "<<score[j]<<endl;
						score[j]=0;
						break;
					}
					
				}
			}
		}
	}
	return 0;
}
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int score[1010];
int qscore[1010];
int num;
int N,M,G;
int g[12];
char sn[1010][25];
int m[12],mn[12][12];


int cmp(const void* a,const void* b)
{
	return *(int*)b - *(int*)a;
}

int main()
{
	int i,j,a;
	while(scanf("%d",&N) && N!=0)
	{
		scanf("%d %d",&M,&G);
		for(i=1;i<=M;i++)
			scanf("%d",&g[i]);
		for(i=0;i<N;i++)
		{
			scanf("%s",&sn[i]);
			scanf("%d",&m[i]);
			for(j=0;j<m[i];j++)
				scanf("%d",&mn[i][j]);
		}
		for(a=0;a<N;a++)
		{
			score[a]=0;
			qscore[a]=0;
		}
		num=0;
		for(a=0;a<N;a++)
		{
			for(j=0;j<m[a];j++)
				score[a]+=g[mn[a][j]];
		}
		for(a=0;a<N;a++)
		{
			if(score[a]>=G)
				num++;
		}
		printf("%d\n",num);
		for(i=0;i<N;i++)
			qscore[i]=score[i];
		qsort(qscore,N+1,sizeof(qscore[0]),cmp);
		if(num!=0)
		{
			for(i=0;i<N;i++)
			{
				for(j=0;j<N;j++)
				{
					if(qscore[i]==score[j] && score[j]>=G)
					{
						cout<<sn[j]<<" "<<score[j]<<endl;
						score[j]=0;
						break;
					}
				}
			}
		}
	}
	return 0;
}

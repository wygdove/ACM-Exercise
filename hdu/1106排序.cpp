#include<iostream>
#include<math.h>
using namespace std;

int temp[500];
char a[1010];

int cmp(const void* a,const void* b)
{
	return *(int*)a - *(int*)b;
}

int main()
{
	int i;
	memset(a,'\0',sizeof(a));
	while(cin>>a)
	{
		int k=0,num=0;
		
		memset(temp,0,sizeof(temp));
		
		for(i=strlen(a)-1;i>=0;i--)
			if(a[i]!='5')
			{
				while(a[i]!='5' && i>=0)
				{
					temp[num]=(a[i]-'0')*pow(10,k)+temp[num];
					i--;
					k++;
					if(-1==i)
					{
						i++;
						break;
					}
				}
				num=num+1;
				k=0;
			}
			
		qsort(temp,num,sizeof(int),cmp);
		
		for(int i=0;i<num-1;i++)
			printf("%d ",temp[i]);
		printf("%d\n",temp[num-1]);
	}
	return 0;
}








/*
//wrong answer
#include<iostream>
#include<math.h>
using namespace std;

char a[1010];
int t[500];

int cmp(const void* a,const void* b)
{
	return *(int*)a - *(int*)b;
}

int main()
{
	int num;
	int k;
	int i;
	memset(a,'\0',sizeof(a));
	while(cin>>a)
	{
		k=0;
		num=0;
		memset(t,0,sizeof(t));
		for(i=strlen(a)-1;i>=0;i--)
		{
			while(a[i]!='5' && i>=0)
			{
				t[num]=(a[i]-'0')*pow(10,k)+t[num];
				i--;
				k++;
			}
			num++;
			k=0;
		}
		qsort(t,num,sizeof(t[0]),cmp);
		for(i=1;i<num;i++)
		{
			cout<<t[i];
			if(i==num-1)
				cout<<endl;
			else
				cout<<" ";
		}
	}
	return 0;
}
*/






/*
#include<iostream>
#include<string>
#include<map>
using namespace std;

char sa[1010];
char sb[1010];
int c[1010];

int cmp(const void* a,const void* b)
{
	return *(int*)a - *(int*)b;
}

int main()
{
	int i;
	while(cin>>sa)
	{
		for(i=0;i<sa.length();i++)
		{ 
			while(sa[i]!='5' && sa[i]!='\0')
			{
				sb[i]=sa[i];
			}
		}
	}
	return 0;
}
*/






/*
	map<char,int> m;
	for(int j=0;j<10;j++)
	{
		m['0'+j]=j;
	}
	string sa,sb;
	sa="6234";
	for(i=0;i<sa.length();i++)
	{
		m[sa[i]];
*/
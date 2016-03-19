#include<iostream>
using namespace std;

char a[110];
char b[110];

int cmp(const void* a,const void* b)
{
	return *(char*)b - *(char*)a;
}

int main()
{
	int i;
	int len;
	while(cin>>a)
	{
		len=strlen(a);
		for(i=0;i<len;i++)
			b[i]=a[i];
		qsort(b,len,sizeof(b[0]),cmp);
		for(i=0;i<len;i++)
		{
			if(a[i]!=b[0])
				cout<<a[i];
			else
				cout<<a[i]<<"(max)";
		}
		cout<<endl;
	}
	return 0;
}

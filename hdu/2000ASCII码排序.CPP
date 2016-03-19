#include<iostream>
using namespace std;

char s[3];

int cmp(const void* a,const void* b)
{
	return *(char*)a - *(char*)b;
}

int main()
{
	while(cin>>s)
	{
		qsort(s,3,sizeof(s[0]),cmp);
		cout<<s[0]<<" "<<s[1]<<" "<<s[2]<<endl;
	}
	return 0;
}
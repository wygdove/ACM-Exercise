#include<iostream>
using namespace std;

int main()
{
	return 0;
}






























/*
#include<iostream>
#include<map>
#include<string>
using namespace std;

struct Student
{
	string num;
	string name;
	int grade;
};

Student s[100010];

int cmp(const void* a,const void* b)
{
	return *(char*)a - *(char*)b;
}

int main()
{
	int n,c;
	int i;
	while(cin>>n>>c && n!=0)
	{
		for(i=0;i<n;i++)
			cin>>s[i].num>>s[i].name>>s[i].grade;
		for
		if(c==1)
		{
			qsort(s.num,n,sizeof(s[0].num),cmp);
		}
		if(c==2)
		{
			sort2();
		}
		if(c==3)
		{
			multimap<Student,int> m;
			for(i=0;i<n;i++)
			{
				s[i].num=a;
				s[i].name=b;
				m[s[i]]=c;
			}
			multimap<Student,int>::iterator it;
			for(it.m.begin();it!=m.end;it++)
			{
				cout<<((*it).first).num<<<" "
					<<((*it).first).name<" "
					<<(*it).second;
			}
		}
	}
	return 0;
}

*/
/*
void sort1()
{
	qsort(s[].num,len,sizeof(s[0].num),cmp)
}

void sort2()
{
	qsort2(s[].name,len,sizeof(s[0].name),cmp);
}

void print()
{
	printf("Case %d\n",x);
	for(i=0;i<X;i++)
		printf("%s %s %d\n",s[i].num,s[i].name,s[i].grade);
	
}
*/
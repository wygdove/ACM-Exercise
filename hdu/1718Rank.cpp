#include<iostream>
using namespace std;

struct Stu
{
	long num;
	int mark;
}s[1010];


int main()
{
	int n;
	int r;
	int i;
	while(cin>>s[0].num && s[0].num)
	{
		n=1;
		while(cin>>s[n].num>>s[n].mark && (s[n].num+s[n].mark))
			n++;
		for(i=1;i<n;i++)
		{
			if(s[0].num==s[i].num)
			{
				s[0].mark=s[i].mark;
				s[i].num=0;
				s[i].mark=0;
			}
		}
		r=1;
		for(i=1;i<n;i++)
		{
			if(s[0].mark<s[i].mark)
				r++;
		}
		cout<<r<<endl;
	}
	return 0;
}
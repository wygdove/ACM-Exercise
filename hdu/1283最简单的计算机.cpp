#include<iostream>
using namespace std;

char s[210];

int main()
{
	long m1,m2;
	long r1,r2,r3;
	int i;
	while(cin>>m1>>m2)
	{
		cin>>s;

		r1=r2=r3=0;

		for(i=0;i<strlen(s);i++)
		{
			if(s[i]=='A')
				r1=m1;
			if(s[i]=='B')
				r2=m2;
			if(s[i]=='C')
				m1=r3;
			if(s[i]=='D')
				m2=r3;
			if(s[i]=='E')
				r3=r1+r2;
			if(s[i]=='F')
				r3=r1-r2;
		}

		cout<<m1<<","<<m2<<endl;
	}
	return 0;
}
#include<iostream>
using namespace std;

int main()
{
	double grade;
	int count;
	char s[100];
	int i;
	while(gets(s))
	{
		grade=0;
		count=0;
		for(i=0;i<strlen(s);i++)
		{
			if(s[i]!=' ' && s[i]!='\0' && s[i]!='A' && s[i]!='B' 
				&& s[i]!='C' && s[i]!='D' && s[i]!='F')
			{
				cout<<"Unknown letter grade in input\n";
				goto end;
			}
			if(s[i]=='A')
			{
				grade+=4;
				count++;
			}
			if(s[i]=='B')
			{
				grade+=3;
				count++;
			}
			if(s[i]=='C')
			{
				grade+=2;
				count++;
			}
			if(s[i]=='D')
			{
				grade+=1;
				count++;
			}
			if(s[i]=='F')
				count++;
		}
		printf("%.2lf\n",grade/count);
end:;
	}
	return 0;
}
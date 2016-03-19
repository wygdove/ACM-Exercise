#include<iostream>
#include<set>
#include<string>
using namespace std;

int main()
{
	
	string str,temp;
	int j;
	while(getline(cin,str)&&str!="#")
	{
		set<string> sset;
		j=1;
		str+=" ";
		for(string::size_type i=0;i<str.size();i++)
		{
			if(str[i]!=' ')
			{
				temp+=str[i];
				j=0;
			}
			else
			{
				if(j==0)
		        sset.insert(temp);
				temp="";
				j=1;
			}
		}
		cout<<sset.size()<<endl;
	}
}
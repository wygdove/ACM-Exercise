#include<iostream>
#include<string>
using namespace std;

string a;

int main()
{
	int len;
	while(cin>>a)
	{
		len=a.length();
		if(a.find("Apple")<len || a.find("iPad")<len ||
			a.find("iPhone")<len || a.find("iPod")<len)
			cout<<"MAI MAI MAI!\n";
		if(a.find("Sony")<len)
			cout<<"SONY DAFA IS GOOD!\n";
	}
	return 0;
}
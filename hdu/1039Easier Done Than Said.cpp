//看清题意，有not acceptable的！！！
#include<iostream>
using namespace std;

int main()
{
	char a[21];
	while(cin.getline(a,21))
	{
		if(strcmp(a,"end")==0)
			return 0;
		else
			cout<<"<"<<a<<"> is acceptable.\n";
	}
	return 0;
}

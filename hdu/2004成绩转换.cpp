#include<iostream>
using namespace std;

int main()
{
	int g;
	while(cin>>g)
	{
		if(g>=0 && g<=100)
		{
			g=g/10;
			switch(g)		//wrong
			{
				case 10:	//输入105也是A
				case 9:cout<<"A\n";break;
				case 8:cout<<"B\n";break;
				case 7:cout<<"C\n";break;
				case 6:cout<<"D\n";break;

				default:cout<<"E\n";
			}
		}
		else
			cout<<"Score is error!\n";
	}
	return 0;
}
/*
#include<iostream>
using namespace std;

int main()
{
	int g;
	while(cin>>g)
	{
		g=g/10;
		switch(g)		//wrong
		{
			case 10:	//输入105也是A
			case 9:cout<<"A\n";break;
			case 8:cout<<"B\n";break;
			case 7:cout<<"C\n";break;
			case 6:cout<<"D\n";break;
			case 5:
			case 4:
			case 3:
			case 2:
			case 1:
			case 0:cout<<"E\n";break;

			default:cout<<"Score is error!\n";
		}
	}
	return 0;
}
*/
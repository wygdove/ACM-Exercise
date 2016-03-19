#include<iostream>
using namespace std;

int main()
{
	int t;
	char c;
	int a,b;
	cin>>t;
	while(t--)
	{
		getchar();
		cin>>c>>a>>b;
		if(c=='/')	//单独列情况
		{
			if(a%b==0)
				cout<<a/b<<endl;
			else
				printf ("%.2lf\n",(double)a/b);	//注意输出格式
				//cout<<(double)a/b<<endl;
		}
		else
		{
			switch(c)
			{
				case '+':cout<<a+b<<endl;break;
				case '-':cout<<a-b<<endl;break;
				case '*':cout<<a*b<<endl;break;
				//case '/':cout<<(double)a/b<<endl;break;
				//case '/':printf ("%.2lf\n",(double)a/b);break;
			}
		}
	}
	return 0;
}

//getchar();
//scanf ("%c %d %d",&a,&x,&y);
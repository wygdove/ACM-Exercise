#include<iostream>
#include <string>
using namespace std;

string sum(string a,string b)
{
    if(a.length()>b.length())
        b=string(a.length()-b.length(),'0')+b;
    else
        a=string(b.length()-a.length(),'0')+a;
    int t=0;
    for(int i=a.length()-1;i>=0;--i)
    {
        t+=a[i]-'0'+b[i]-'0';
        a[i]=t%10+'0';
        t/=10;
    }
    return (t?'1'+a:a);

}

int main()
{
	int t;
	int i;
	string a,b;
	while(cin>>t)
	{
		if(t>=1 && t<=20)
		{
			for(i=1;i<=t;i++)
			{
				//getline(cin,a);
				//getline(cin,b);
				cin>>a>>b;
				cout<<"Case "<<i<<":\n"
					<<a<<" + "<<b<<" = "
					<<sum(a,b)<<endl;
				if(i!=t)
					cout<<endl;
			}
		}
	}
	return 0;
}

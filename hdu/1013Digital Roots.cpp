#include<iostream>
#include<string>
using namespace std;

string s;

int main()
{
	int sum;
	int t;
	int i;
	while(cin>>s)
	{
		if(s[0]=='0')
			break;
		sum=0;
		for(i=0;i<s.length();i++)
			sum+=s[i]-'0';
		while(sum>=10)	//加 = 
		{
			t=0;
			while(sum>0)
			{
				t+=sum%10;
				sum/=10;
			}
			sum=t;
		}
		cout<<sum<<endl;
	}
	return 0;
}




























/*
//Memory Limit Exceeded
#include<iostream>
#include<string>
using namespace std;

string a;
string s;

int main()
{
	int i;
	while(cin>>a)
	{
		if(a[0]=='0')
			break;
		do
		{
			for(i=0;i<a.length();i++)
			{
				s+=a[i];
			}
			if(s.length()<2)
			{
				cout<<s<<endl;
				break;
			}
			else
				a=s;
		}while(1);
	}
	return 0;
}
*/


/*
#include<iostream>
using namespace std;

char s[100010];

int main()
{
	int sum;
	int i;
	while(cin>>s)
	{
		sum=0;
		if(s[0]=='0')
			break;
		for(i=0;i<strlen(s);i++)
		{
			switch(s[i])
			{
				case '0':sum+=0;break;
				case '1':sum+=1;break;
				case '2':sum+=2;break;
				case '3':sum+=3;break;
				case '4':sum+=4;break;
				case '5':sum+=5;break;
				case '6':sum+=6;break;
				case '7':sum+=7;break;
				case '8':sum+=8;break;
				case '9':sum+=9;break;
			}
		}
		if(sum<10)
			cout<<sum<<endl;
	}
	return 0;
}

*/


/*
//理解单纯，题目应为大数问题
#include<iostream>
using namespace std;

int main()
{
	int n;
	int sum;
	int i;
	while(cin>>n && n)
	{
		sum=0;
		for(sum=n%10;;i++)
		{
			i=1;
			n=n/(10*i);
			sum+=n;
			if(n<10)
			{
				if(sum<10)
				{
					cout<<sum<<endl;
					break;
				}
				else
				{
					n=sum;
					continue;
				}
			}
		}
	}
	return 0;
}
*/



/*
//39没有重复过程
#include<iostream>
using namespace std;

int main()
{
    int n;
    int sum;
    int i;
    while(cin>>n && n)
    {
		sum=0;
        for(i=1;;i++)
        {
            sum+=n/(10*i);
            n=n/(10*i);
            if(n<10)
            {
                if(sum<10)
                {
                    cout<<sum<<endl;
                    break;
                }
                else
                    n=sum;
            }
        }
    }
    return 0;
}
*/
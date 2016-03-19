//ÎÞÊä³ö
#include<iostream>
#include<string>
using namespace std;

string s[110];
//char s[110][100];
int p[110];
int v[110];

int main()
{
	int t;
	int n;
	int max;
	int day[110];
	int i,j;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		{
			getchar();
			//cin.getline(s[i],100);
			cin>>s[i];
			cin>>p[i]>>v[i];
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(v[i]>200 && v[j]>200)
				{
					day[i]=v[i]/200;
					day[j]=v[j]/200;
					if(day[i]>5)
						day[i]=5;
					if(day[j]>5)
						day[j]=5;
					if(p[i]/day[i]>p[j]/day[j])
						max=i;
					else 
						max=j;
				}
			}
		}
		cout<<s[j]<<endl;
	}
	return 0;
}
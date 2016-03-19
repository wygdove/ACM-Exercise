#include<iostream>
using namespace std;

char a[1010];

void Set()
{
	int i,j;
	for(i=1,j=1;i<1010;i++,j++)
	{
		a[i]='a'+j;
		if(j==26)
			j=0;
	}
}

int main()
{
	int i,j;
	int cnt;
	Set();
	cnt=1;
	for(i=3;i<=10;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<a[cnt+j];
            cnt++;
        }
    }
	return 0;
}

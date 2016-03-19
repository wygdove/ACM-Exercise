#include <iostream>
using namespace std;

int a[14];

int main()
{
    int n;
	int t;
	int x;
	int i,j,k;
    a[1]=2;
    for(i=2;i<14;i++)
    {
		for(j=i+1;;j++)
        {
            t=0;
			k=2*i;
            while(1)
            {
                x=(t+j)%k;
                if(!x)
                    x=k;
                if(x<=i)
                    break;
                t=x-1;
                k--;
                if(k==i)
                {
                    a[i]=j;
                    break;
                }
            }
            if(k==i)
                break;
        }
    }
    while(cin>>n && n)
        cout<<a[n]<<endl;
    return 0;
}
#include<iostream>
using namespace std;

int gcd(int a, int b)
{
	int t;
	while(b)
	{
		t = a % b; a = b; b = t;
	}
	return a;
}

int main()
{
    int T;
    long x,y,k;
    //long gcdxy;
    int cnt;
    bool bl;
    int i;
    cin>>T;
    while(T--)
    {
        cin>>x>>y>>k;

        if(x==0 || y==0)
        {
            cout<<"-1\n";
            continue;
        }

//        gcdxy=gcd(x,y);
//        if(gcdxy==1 && k!=1)
//        {
//            cout<<"-1\n";
//            continue;
//        }

        cnt=0;
        bl=false;
        for(i=gcd(x,y);i>0;i--)
        {
            if(x%i==0 && y%i==0)
            {
                cnt++;
                if(cnt==k)
                {
                    bl=true;
                    break;
                }
            }
        }
        if(bl)
            cout<<i<<endl;
        else
            cout<<"-1\n";
    }
    return 0;
}

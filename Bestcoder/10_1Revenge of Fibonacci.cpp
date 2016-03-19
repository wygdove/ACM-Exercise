//hack

/*
Input
1
2 3 2
Output
No
Answer
Yes
*/

/*

c==a || c==b
的情况没有考虑

*/

#include<iostream>
using namespace std;

int T;
int a,b,c;

long f[100000001];

void Set(int a,int b,int c)
{
    if(c==a || c==b)
    {
        cout<<"Yes\n";
        return ;
    }

    int i;
    f[0]=a;
    f[1]=b;
    for(i=2;i<10000000;i++)
    {
        f[i]=f[i-1]+f[i-2];
        if(f[i]==c)
        {
            cout<<"Yes\n";
            break;
        }
        else if(f[i]>c)
        {
            cout<<"No\n";
            break;
        }
    }
}

int main()
{
    cin>>T;
    while(T--)
    {
        cin>>a>>b>>c;
        Set(a,b,c);
    }
    return 0;
}

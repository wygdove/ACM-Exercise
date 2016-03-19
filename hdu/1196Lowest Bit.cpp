#include<iostream>
#include<math.h>
#include<memory.h>
using namespace std;

int a[500000];

int main()
{
    int n;
    int len;
    int ans;
    int i;
    while(cin>>n && n)
    {
        i=0;
        len=0;
        memset(a,0,sizeof(a));

        while(1)
        {
            a[i]=n%2;
            i++;
            n=n/2;
            if(!n)
            {
                len=i-1;
                break;
            }
        }

        for(i=0;i<len;i++)
        {
            if(a[i]==1)
            {
                break;
                ans=i;
            }
        }

        for(i=0;i<=len;i++)
        {
            if(a[i]==1)
            {
                ans=i;
                break;
            }
        }

//        for(i=len;i>=0;i--)
//            cout<<a[i];
//        cout<<endl;
//
//        cout<<len<<endl;
//        cout<<ans<<endl;
        cout<<pow(2,ans)<<endl;
    }
    return 0;
}

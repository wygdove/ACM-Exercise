#include<iostream>
#include<memory.h>
using namespace std;

int a[3]={150,200,350};

int f[10010];

int main()
{
    int t;
    int n;
    //int m;
    int i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;

        memset(f,0,sizeof(f));

        for(i=0;i<3;i++)
        {
            for(j=a[i];j<=n;j++)    //1 j=0;j<=a[i];j++
            {
                f[j]=max(f[j],f[j-a[i]]+a[i]);
            }
        }

        /*
        for(i=0;i<=300;i++)
        {
            cout<<"g["<<i<<"]="<<f[i]<<endl;
        }
        */

        /*
        m=0;
        for(i=0;i<=n;i++)
            if(m<f[i])
                m=f[i];
        */

        cout<<n-f[n]<<endl; //n-m
    }
    return 0;
}

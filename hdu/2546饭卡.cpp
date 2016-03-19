#include<iostream>
#include<memory.h>
#include<algorithm>
using namespace std;

int p[1010];    //price

int f[1010];

int cmp(const void* a,const void* b)
{
    return *(int *)a - *(int *)b;
}

int main()
{
    int n;
    int m;
    int i,j;
    while(cin>>n && n)
    {
        memset(p,0,sizeof(p));  //5

        for(i=1;i<=n;i++)
            cin>>p[i];
        cin>>m;

        if(m<5) //注意，不可忘记   //1
        {
            cout<<m<<endl;
            continue;
        }

        sort(p+1,p+1+n);    //2

        memset(f,0,sizeof(f));

        for(i=1;i<n;i++)
        {
            for(j=m-5;j>=p[i];j--)  //j=p[i];j<=m-5;j++ //3
            {
                f[j]=max(f[j],f[j-p[i]]+p[i]);
            }
        }

        cout<<m-f[m-5]-p[n]<<endl;    //f[n]    //4
    }
    return 0;
}

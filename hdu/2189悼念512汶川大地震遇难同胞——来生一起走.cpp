#include<iostream>
#include<memory.h>
#include<fstream>
#include<string>
#include<algorithm>
#include<math.h>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<vector>
#include<stdio.h>
#include<stdlib.h>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>

using namespace std;

typedef long long LL;
typedef long double real;
typedef vector<int> VI;

#define NUM 100

int c1[151];
int c2[151];

//int p[200];
//void make_set()
//{
//    int i,j;
//    p[0]=1;
//    p[1]=1;
//    for(i=2;i<=sqrt(200.0);i++)
//    {
//        if(!p[i])
//        {
//            for(j=i*i;j<200;j+=i)
//                p[i]=1;
//        }
//        j=0;
//        for(i=2;i<=200;i++)
//        {
//            if(!p[i])
//                p[j++]=i;
//        }
//    }
//}

bool num[151];
int primes[40];
int len;

void init()
{
    int i,j;
    num[0]=1;
    num[1]=1;
    for(i=2;i<=150;++i)
        for(j=i*i;j<=150;j+=i)
            num[j]=1;
    for(i=2;i<=150;++i)
        if(!num[i])
            primes[len++]=i;
}

int main()
{
    freopen("hdu.in","r",stdin);

    int C;
    int n;
    int i,j,k;
    init();
//防超时，对母函数也打表
      for(i=0; i<=150; i+=2)//i++
        {
            c1[i]=1;
            c2[i]=0;
        }
        for(i=1; i<=34; i++)//i=2;i<=150
        {
            for(j=0; j<=150; j++)
            {
                for(k=0; k+j<=150; k+=primes[i])
                {
                    c2[j+k]+=c1[j];
                }
            }
            for(j=0; j<=150; j++)
            {
                c1[j]=c2[j];
                c2[j]=0;
            }
        }

    scanf("%d",&C);
    while(C--)
    {
        scanf("%d",&n);
        printf("%d\n",c1[n]);
    }
    return 0;
}
//Time Limit Exceeded
//    while(C--)
//    {
//        scanf("%d",&n);
//
//        for(i=0; i<=n; i++)
//        {
//            c1[i]=1;
//            c2[i]=0;
//        }
//        for(i=2; i<=n; i++)
//        {
//            for(j=0; j<=n; j++)
//            {
//                for(k=0; k+j<=n; k+=primes[i])
//                {
//                    c2[j+k]+=c1[j];
//                }
//            }
//            for(j=0; j<=n; j++)
//            {
//                c1[j]=c2[j];
//                c2[j]=0;
//            }
//        }
//        //cout<<c1[n]<<endl;
//        printf("%d\n",c1[n]);
//    }


//test
//#include<iostream>
//#include<math.h>
//using namespace std;
//
//int i,j;
//
//bool num[151];
//int primes[40];
//int len;
//
//void init()
//{
//    int i,j;
//    num[0]=1;
//    num[1]=1;
//    for(i=2;i<=150;++i)
//        for(j=i*i;j<=150;j+=i)
//            num[j]=1;
//    for(i=2;i<=150;++i)
//        if(!num[i])
//            primes[len++]=i;
//}
//
//int p[40];
//
//void make_set()
//{
//    int i,j;
//    p[0]=1;
//    p[1]=1;
//    for(i=2;i<=sqrt(200.0);i++)
//    {
//        if(!p[i])
//        {
//            for(j=i*i;j<200;j+=i)
//                p[i]=1;
//        }
//        j=0;
//        for(i=2;i<=200;i++)
//        {
//            if(!p[i])
//                p[j++]=i;
//        }
//    }
//}
//
//int main()
//{
//    make_set();
//    init();
//
//    for(i=0;i<=40;i++)
//    {
//        cout<<"my["<<i<<"]="<<p[i]<<"  primes["<<i<<"]="<<primes[i]<<endl;
//    }
//    cout<<endl;
//
//}

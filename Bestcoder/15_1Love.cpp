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

typedef __int64 INT;
typedef long long LL;
typedef long double real;
typedef vector<int> VI;

#define NUM 100
#define MOD 10007

/**************************************************************
    Problem:
    Ordering:
    Thought:
    Result:
****************************************************************/




int main()
{
    freopen("Bestcoder.in","r",stdin);

    char a[25],b[25];
    //string a,b;
    //scanf("%s%s",&a,&b)!=EOF
    while(cin>>a>>b)
    {
//cout<<a<<endl<<b<<endl;
        int lena=strlen(a);
        int lenb=strlen(b);

        for(int i=0;i<lena;i++)
        {
//cout<<"..........."<<endl;
            if(a[i]=='_')
            {
                i++;
                while(i<lena)
                {
                    cout<<a[i];
                    i++;
                }
                    //cout<<a[++i];
            }
        }

        cout<<"_small_";

        for(int i=0;i<lenb;i++)
        {
            if(b[i]=='_')
            {
                i++;
                while(i<lenb)
                {
                    cout<<b[i];
                    i++;
                }
                //cout<<b[++i];
            }
        }
        //printf("%s_small_%s\n",ansa,ansb);
        //cout<<ansa<<"_small_"<<ansb<<endl;
        cout<<endl;
    }
	return 0;
}

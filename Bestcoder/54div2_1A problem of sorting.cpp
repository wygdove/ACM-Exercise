#include<iostream>
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


/**************************************************************
    Problem:
    Ordering:
    Thought:
    Result:
****************************************************************/


#define INF 0x3f3f3f3f
#define MINN -0x3f3f3f3f
#define MAXN 0x3f3f3f3f
#define MOD 10007
#define NUM 108

struct Sample
{
    string name;
    int age;
}p[NUM];
char s[NUM];

int cmp( const void *a ,const void *b)
{
	return (*(Sample *)a).age > (*(Sample *)b).age ? -1 : 1;
}

int main()
{
    freopen("bc.in","r",stdin);
    //freopen("out.out","w",stdout);

    int T;
    int n;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        getchar();
        for(int i=0;i<n;i++)
        {
            p[i].name="";p[i].age=0;
            gets(s);
//cout<<"s="<<s<<endl;
            int len=strlen(s);
            p[i].name=s;p[i].name=p[i].name.substr(0,len-5);
            for(int j=1;j<=4;j++)
            {
                p[i].age+=(s[len-j]-'0')*pow(10,j-1);
            }
        }
        qsort(p,n,sizeof(p[0]),cmp);
//for(int i=0;i<n;i++)cout<<p[i].name<<"\t"<<p[i].age<<endl;
        for(int i=0;i<n;i++) cout<<p[i].name<<endl;
    }

	return 0;
}

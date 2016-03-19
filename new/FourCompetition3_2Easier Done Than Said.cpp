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


/**************************************************************
    Problem:
    Ordering:
    Thought:
    Result:
****************************************************************/

#define MOD 10007
#define MAXN 100
#define NUM 100

string s;

int main()
{
    freopen("new.in","r",stdin);

    bool bl1,bl2,bl3;
    int len;
    while(cin>>s && s!="end")
    {
        bl1=false;
        bl2=true;
        bl3=true;
        len=s.length();

        if(s.find("a")<len || s.find("e")<len || s.find("i")<len || s.find("o")<len || s.find("u")<len)
            bl1=true;

        //if(!bl1){ printf("<%s> is not acceptable.\n",s);continue;}

        for(int i=0;i<len-2;i++)
        {
            if((s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
               && (s[i+1]=='a' || s[i+1]=='e' || s[i+1]=='i' || s[i+1]=='o' || s[i+1]=='u')
               && (s[i+2]=='a' || s[i+2]=='e' || s[i+2]=='i' || s[i+2]=='o' || s[i+2]=='u') )
                bl2=false;
//cout<<"bl2="<<bl2<<endl;
            if((s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
               && (s[i+1]!='a' && s[i+1]!='e' && s[i+1]!='i' && s[i+1]!='o' && s[i+1]!='u')
               && (s[i+2]!='a' && s[i+2]!='e' && s[i+2]!='i' && s[i+2]!='o' && s[i+2]!='u') )
                bl2=false;
        }

        for(int i=0;i<len-1;i++)
        {
            if(s[i]==s[i+1] && (s[i]!='e' && s[i]!='o'))
                bl3=false;
        }
//cout<<"bl1="<<bl1<<" bl2="<<bl2<<" bl3="<<bl3<<endl;
        if(bl1 && bl2 && bl3)  cout<<"<"<<s<<"> is acceptable.\n";//printf("<%s> is acceptable.\n",s);
        else  cout<<"<"<<s<<"> is not acceptable.\n";//printf("<%s> is not acceptable.\n",s);
    }

	return 0;
}

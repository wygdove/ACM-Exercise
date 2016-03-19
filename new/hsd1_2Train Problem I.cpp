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
    Result: Accepted
****************************************************************/




int main()
{
    freopen("new.in","r",stdin);

    int n;
    string a,b,c;
    stack<char>s;
    while(cin>>n>>a>>b)
    {
//cout<<"n="<<n<<"  a="<<a<<"  b="<<b<<endl;
//cout<<"a.length()= "<<a.length()<<"  b.length()="<<b.length()<<endl;
        int j=0;
        int len = a.length();

//for(int i=0;i<len;i++)cout<<"a["<<i<<"]="<<a[i]<<"  b["<<i<<"]="<<b[i]<<endl;

        for(int i=0;i<len;i++)
        {
            s.push(a[i]);
//cout<<"s.push()="<<a[i]<<endl;
            c+="in\n";
            //!!!���ֻ��j<len &&s.top()==b[j]��Runtime Error(ACCESS_VIOLATION)������step into
            while(j<len && !s.empty() && s.top()==b[j])
            {
//cout<<"s.top()="<<s.top()<<"  b["<<j<<"]="<<b[j]<<endl;
                s.pop();
                c+="out\n";
                j++;
            }
            if(j==b.length())//!!!wrong b.length()-1 ����һ���ж�
                break;
        }
        if(s.empty())
        {
            printf("Yes.\n");
            cout<<c;
            printf("FINISH\n");
        }
        else
        {
            printf("No.\nFINISH\n");
        }
        a="";
        b="";
        c="";
        while(!s.empty())
        {
            s.pop();
        }

    }

	return 0;
}

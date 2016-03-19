#include<iostream>
#include<stdio.h>
#include<stack>
#include<string>
#include<memory.h>
#include<fstream>
using namespace std;

string a,b="\0";
string c="\0";
stack<char>s;

int main()
{
    int n;
    int len;
    int i,j;

    freopen("in.in","r",stdin);

    while(scanf("%d",&n)!=EOF)
    {
        cin>>a>>b;

        len=a.length();

        if(a.length()!=b.length())
        {
            cout<<"No.\nFINISH\n";
            continue;
        }

        c="\0";


        j=0;
        for(i=0;i<len;i++)
        {
            s.push(a[i]);
            c+="in\n";
            while(b[j]==s.top() && j<len)//wrong
            {
                s.pop();
                c+="out\n";
                j++;
            }
        }

        if(s.empty())
        {
            cout<<"Yes.\n";
            cout<<c;
            cout<<"FINISH\n";
        }
        else
            cout<<"No.\nFINISH\n";

        while(!s.empty())
            s.pop();
        a="\0";
        b="\0";
        c="\0";
    }
    return 0;
}

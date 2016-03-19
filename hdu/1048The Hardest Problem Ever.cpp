#include<iostream>
#include<fstream>
#include<memory.h>
#include<math.h>
#include<algorithm>
#include<string>
#include<map>
#include<set>
#include<stack>
#include<queue>
#include<vector>
#include<stdio.h>
#include<stdlib.h>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>

using namespace std;

#define NUM 1000

int main()
{
    freopen("hdu.in","r",stdin);

    string a,b;
    int len;
    int i;
    while(getline(cin,a) && a.find("ENDOFINPUT")>0)
    {
        if(a.find("ENDOFINPUT")==0)
            break;
        else if(a.find("END")==0)
            continue;
        else if(a.find("START")==0)
        {

        getline(cin,b);
        len=b.length();
        for(i=0; i<len; i++)
        {
            if(b[i]>='F' && b[i]<='Z')
            {
                b[i]=(b[i]-'A'-5)+'A';
                continue;
            }
            switch(b[i])
            {
                case 'A':b[i]='V';break;
                case 'B':b[i]='W';break;
                case 'C':b[i]='X';break;
                case 'D':b[i]='Y';break;
                case 'E':b[i]='Z';break;

                default:;
            }
        }

        //printf("%s\n",b);
        cout<<b<<endl;
        }
    }
    return 0;
}
//    //!!!wrong!!!
//    freopen("hdu.in","r",stdin);
//
//    string a,b,c;
//    int len;
//    int i;
//    while(cin>>a)
//    {
////cout<<".................."<<endl;
//        if(a.find("ENDOFINPUT")==0)
//            break;
//        cin>>b;
//        cin>>c;
//        //if(a.find("START"!=0) && c.find("END")!=0)
//        //    continue;
////cout<<".................."<<endl;
//        for(i=0; i<len; i++)
//        {
//            switch(b[i])
//            {
//                case 'A':b[i]='V';break;
//                case 'B':b[i]='W';break;
//                case 'C':b[i]='X';break;
//                case 'D':b[i]='Y';break;
//                case 'E':b[i]='Z';break;
//
//                default:b[i]=(b[i]-'A'+5)+'A';
//            }
//        }
//    }
//
//    cout<<b<<endl;

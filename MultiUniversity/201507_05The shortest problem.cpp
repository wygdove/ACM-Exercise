//#include<iostream>
//#include<fstream>
//#include<string>
//#include<algorithm>
//#include<math.h>
//#include<stack>
//#include<queue>
//#include<set>
//#include<map>
//#include<vector>
//#include<stdio.h>
//#include<stdlib.h>
//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//#include<cmath>
//
//using namespace std;
//
//typedef long long LL;
//typedef long double real;
//typedef vector<int> VI;
//
//
///**************************************************************
//    Problem:
//    Ordering:
//    Thought:
//    Result:
//****************************************************************/
//
//
//#define INF 0x3f3f3f3f
//#define MINN -0x3f3f3f3f
//#define MAXN 0x3f3f3f3f
//#define MOD 10007
//#define NUM 102
//
//
//
//int main()
//{
//    freopen("mu.in","r",stdin);
//    freopen("out.out","w",stdout);
//
//    int n,t;
//    string sn,sans,stemp,ste;
//    int temp,a,b;
//    int cnt=1;
//    while(cin>>sn>>t && sn!="-1" && t!=-1)
//    {
//        while(t--)
//        {
//            temp=0;
//            for(int i=0;i<sn.length();i++)
//                temp+=sn[i]-'0';
//            stemp="";
//            while(temp>0)
//            {
//                ste=temp%10+'0';
//                temp/=10;
//                stemp=ste+stemp;
//            }
//            sn+=stemp;
//        }
//cout<<"sn="<<sn<<endl;
//        a=0;b=0;
//        for(int i=0;i<sn.length();i++)
//        {
//            if(i%2==0)a+=sn[i]-'0';
//            else b+=sn[i]-'0';
//        }
//        if(a<b)temp=a,a=b,b=temp;
//        if((a-b)%11==0) printf("Case #%d: Yes\n",cnt++);
//        else printf("Case #%d: No\n",cnt++);
//    }
//
//	return 0;
//}

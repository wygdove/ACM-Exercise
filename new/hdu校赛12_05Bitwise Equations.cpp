//#pragma comment(linker, "/STACK:1024000000,1024000000")
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
//#define mems0(s)  memset(s,0,sizeof(s))
//#define mems_1(s) memset(s,-1,sizeof(s))
//#define memsINF(s) memset(s,INF,sizeof(s))
//#define memsch(ch) memset(ch,'\0',sizeof(ch))
//
//#define lson l,m,rt<<1
//#define rson m+1,r,rt<<1|1
//
//
///**************************************************************
//    Problem:
//    Ordering:
//    Thought:
//    Result:
//    Author: wygdove
//****************************************************************/
//
//
//const double eps = 1e-9;
//const double pi=acos(-1.0);
//#define INF 0x3f3f3f3f
//#define MINN -0x3f3f3f3f
//#define MAXN 0x3f3f3f3f
//#define MOD 10007
//#define NUM 108
//
//string changetobit(__int64 number)
//{
//    string res="";
//    while(number>0)
//    {
//        res+='0'+(number%2);
//        number/=2;
//    }
//    reverse(res.begin(),res.end());
//    return res;
//}
//
//__int64 changetonumber(string s)
//{
//    __int64 res=0;
//    int len=s.length();
//    __int64 x=1;
//    for(int i=len-1;i>=0;i--)
//    {
//        if(i!=len-1)x*=2;
//        if(s[i]-'0'==1)res+=x;
//    }
//    return res;
//}
//
//int main()
//{
//    cin.sync_with_stdio(false);
//    cout.sync_with_stdio(false);
//
//    freopen("new.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int T;
//    __int64 x,k;
//    scanf("%d",&T);
//    while(T--)
//    {
//        scanf("%I64d%I64d",&x,&k);
//        string sx=changetobit(x);
//        string sk=changetobit(k);
////cout<<"sx="<<sx<<endl;
////cout<<"sk="<<sk<<endl;
//
//        int lenx=sx.length();
//        for(int i=0;i<=64;i++)
//            sx="0"+sx;
//
//        lenx=sx.length();
//        int lenk=sk.length();
//        string sans="";
//        for(int i=lenx-1;i>=0;i--)
//        {
//            if(sx[i]=='1')sans='0'+sans;
//            else if(sx[i]=='0') sans=sk[--lenk]+sans;
//            if(lenk<=0)break;
//        }
////cout<<"sans="<<sans<<endl;
//
//        printf("%I64d\n",changetonumber(sans));
//    }
//
//    fclose(stdin);
//    fclose(stdout);
//	return 0;
//}

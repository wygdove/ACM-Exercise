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
//#define NUM 1000008
//
//char ch[NUM];
//string s;
//string str;
//multiset<string> st;
//multiset<string>::iterator it;
//
//int main()
//{
//    cin.sync_with_stdio(false);
//    cout.sync_with_stdio(false);
//
//    freopen("mu.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int T;
//    int len;
//    int be;
//    bool bl;
//    while(scanf("%d",&T)!=EOF)
//    {
//        getchar();
//        for(int cnt=1;cnt<=T;cnt++)
//        {
//            st.clear();
//            s="";str="";be=-1;bl=true;
//
//            gets(ch);s=ch;
////cout<<"1s="<<s<<endl;
//            len=s.length();
//            for(int i=0;i<len;i++)
//            {
//                if(s[i]=='c'){be=i;break;}
//                if(s[i]!='c'&&s[i]!='f')bl=false;
//            }
//            if(!bl){printf("Case #%d: %d\n",cnt,be);continue;}
//            for(int i=0;i<be;i++)s+='f';
//            s=s.substr(be,len+be);
////cout<<"2s="<<s<<endl;
//            for(int i=0;i<len;i++)
//            {
//                if(s[i]=='c')
//                {
//                    if(str==""){str=s[i];continue;}
//                    st.insert(str);
//                    str=s[i];
//                }
//                else if(s[i]=='f')
//                {
//                    str+=s[i];
//                }
//            }
//            st.insert(str);
//            be=0;
//            for(it=st.begin();it!=st.end();it++)
//            {
//                str=*it;
//                len=str.length();
//                if(len>2)
//                {
//                    if(str[0]!='c')continue;
//                    for(int i=1;i<len;i++)if(str[i]!='f')continue;
//                    be++;
//                }
//                else if(len==1&&str=="f")be++;
//                else if(len==2&&str=="ff")be++;
//
//            }
//            if(be==0)be--;
//            if(st.size()>=2&&be<2)be=-1;
//            printf("Case #%d: %d\n",cnt,be);
//        }
//
//    }
//
//    fclose(stdin);
//    fclose(stdout);
//	return 0;
//}

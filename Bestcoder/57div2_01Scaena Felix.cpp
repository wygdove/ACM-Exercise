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
//#define NUM 1008
//
//char ch[NUM];
//stack<char> st;
//
//int main()
//{
//    cin.sync_with_stdio(false);
//    cout.sync_with_stdio(false);
//
//    freopen("bc.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int T;
//    int len;
//    int cnt;
//    bool bl;
//    char c;
//    scanf("%d",&T);
//    while(T--)
//    {
//        while(!st.empty())st.pop();
//        cnt=0;
//        bl=true;
//
//        scanf("%s",&ch);
//        len=strlen(ch);
//        for(int i=0;i<len;i++)
//        {
//            if(ch[i]=='(')
//            {
//                st.push(ch[i]);
//            }
//            else if(ch[i]==')')
//            {
//                if(st.empty()){bl=false;break;}
//                c=st.top();
//                if(c=='(')
//                {
//                    cnt++;
//                    st.pop();
//                }
//            }
////printf("cnt=%d bl=%d\n",cnt,bl);
//        }
//        if(!st.empty())bl=false;
//
//        if(!bl)printf("0\n");
//        else printf("%d\n",cnt);
//    }
//
//    fclose(stdin);
//    fclose(stdout);
//	return 0;
//}

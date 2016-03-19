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
//#define NUM 108
//
//char ch[32];
//string s;
//set<string> st;
//queue<string> qu;
//set<string>::iterator sit;
//
//int main()
//{
//    cin.sync_with_stdio(false);
//    cout.sync_with_stdio(false);
//
//    freopen("hiho.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int n,k;
//    while(scanf("%d%d",&n,&k)!=EOF)
//    {
//        while(!qu.empty())qu.pop();
//        st.clear();
//
//        getchar();
//        while(n--)
//        {
//            gets(ch);s=ch;
////cout<<"s="<<s<<endl;
//            if(st.find(s)!=st.end()) printf("Cache\n");
//            else
//            {
//                qu.push(s);
//                printf("Internet\n");
//                if(st.size()<k)
//                {
//                    st.insert(s);
//                }
//                else
//                {
//                    if(!qu.empty()&&!st.empty())
//                    {
//                        s=qu.front();qu.pop();
//                        st.erase(s);
//                    }
//                }
//            }
////for(sit=st.begin();sit!=st.end();sit++)cout<<"st: "<<*sit<<endl;
//        }
//
//    }
//
//    fclose(stdin);
//    fclose(stdout);
//	return 0;
//}

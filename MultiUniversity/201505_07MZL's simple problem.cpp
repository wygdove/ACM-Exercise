//#include<iostream>
//#include<memory.h>
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
//#define NUM 200
//
//set<int> st;
//set<int>::iterator it;
//
//int main()
//{
//    freopen("hdu.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int n;
//    int o,x;
//    while(scanf("%d",&n)!=EOF)
//    {
//        st.clear();
//        for(int i=0;i<n;i++)
//        {
//            scanf("%d",&o);
//            if(o==1)
//            {
//                scanf("%d",&x);
//                st.insert(x);
//            }
//            else if(o==2)
//            {
//                if(st.empty()) continue;
//                st.erase(st.begin());
//            }
//            else if(o==3)
//            {
//                if(st.size()==0) printf("0\n");
//                else
//                {
//                    it=st.end();
//                    printf("%d\n",*(--it));
//                }
//            }
//        }
//    }
//
//
//    return 0;
//}

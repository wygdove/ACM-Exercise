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
//#define NUM 100008
//
//struct Edge
//{
//    int u,v,w;
//}e[NUM];
//int n,m,q;
//set<int> st;
//
//bool cmp(Edge a,Edge b){return a.w<b.w;}
////int cmp( const void *a ,const void *b){return (*(Edge *)a).w > (*(Edge *)b).w ? 1 : -1;}
//
//int main()
//{
//    freopen("mu.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int T;
//    int n;
//    int a,b,c;
//    scanf("%d",&T);
//    while(T--)
//    {
//        memset(e,0,sizeof e);
//
//        scanf("%d%d%d",&n,&m,&q);
//        for(int i=0;i<m;i++)
//        {
//            scanf("%d%d%d",&a,&b,&c);
//            e[i].u=a;e[i].v=b;e[i].w=c;
//        }
////        sort(e,e+m,cmp);
////        qsort(e,m,sizeof(e[0]),cmp);
//        for(int i=0;i<q;i++)
//        {
//            scanf("%d",&c);
//            st.clear();
//            for(int i=0;i<m;i++)
//            {
////                if(c<e[i].w)break;
//                if(c>=e[i].w)
//                {
//                    st.insert(e[i].u);
//                    st.insert(e[i].v);
//                }
//                if(st.size()>n)break;
//            }
//            c=st.size();
//            printf("%d\n",c*(c-1));
//        }
////printf("log100000=%d\n",log(100000));
//    }
//
//    return 0;
//}

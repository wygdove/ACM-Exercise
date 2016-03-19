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
//#define NUM 20002
//
//int n,m,q;
//int g[NUM][NUM];
//set<int> st;
//
////bool cmp(Edge a,Edge b){return a.w<b.w;}
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
//        memset(g,INF,sizeof g);
//
//        scanf("%d%d%d",&n,&m,&q);
//        for(int i=0;i<m;i++)
//        {
//            scanf("%d%d%d",&a,&b,&c);
//            if(g[a][b]>c)g[a][b]=g[b][a]=c;
//        }
////        sort(e,e+m,cmp);
////        qsort(e,m,sizeof(e[0]),cmp);
//        for(int i=0;i<q;i++)
//        {
//            scanf("%d",&c);
//            st.clear();
//            for(int i=1;i<=n;i++)
//            {
//                for(int j=1;j<i;j++)
//                {
//                    if(c>=g[i][j])
//                    {
//                        st.insert(i);
//                        st.insert(j);
//                    }
//                }
//                if(st.size()>n)break;
//            }
//            c=st.size();
//            printf("%d\n",c*(c-1));
//        }
//
//    }
//
//	return 0;
//}

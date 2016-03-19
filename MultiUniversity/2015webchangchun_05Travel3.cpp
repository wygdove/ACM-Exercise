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
//
//
//struct Edge
//{
//    int u,v,w;
//}e[NUM];
//int n,m,q;
//set<int> st;
//
//bool cmp(Edge a,Edge b){return a.w<b.w;}
//
//#define _cp(a,b) ((a)<(b))
//int kth_element(int n,int k){
//    int t,key;
//    int l=0,r=n-1,i,j;
//    while (l<r){
//        for (key=e[((i=l-1)+(j=r+1))>>1].w;i<j;)
//        {
//            for (j--;_cp(key,e[j].w);j--);
//            for (i++;_cp(e[i].w,key);i++);
//            if (i<j)
//            {
//                t=e[i].w,e[i].w=e[j].w,e[j].w=t;
//                t=e[i].u;e[i].u=e[j].u;e[j].u=t;
//                t=e[i].v;e[i].v=e[j].v;e[j].v=t;
//            }
//        }
//        if (k>j) l=j+1;
//        else r=j;
//    }
//    return e[k].w;
//}
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
//        memset(e,INF,sizeof e);
//
//        scanf("%d%d%d",&n,&m,&q);
//        for(int i=0;i<m;i++)
//        {
//            scanf("%d%d%d",&a,&b,&c);
//            a--;b--;
//            e[i].u=a;e[i].v=b;e[i].w=c;
//        }
////        sort(e,e+m,cmp);
//        kth_element(n,n);
////for(int i=0;i<m;i++)printf("%d-%d:%d\n",e[i].u,e[i].v,e[i].w);
//        for(int i=0;i<q;i++)
//        {
//            scanf("%d",&c);
//            st.clear();
//            for(int i=0;i<m;i++)
//            {
//                if(c<e[i].w)break;
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
//
//    }
//
//	return 0;
//}

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
//    int cx;
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
//int findc(int c)
//{
//    int left=0,right=m-1;
//    int mid;
//    while(left<=right)
//    {
//        mid=(left+right)/2;
//        if(c<e[mid].w)right=mid-1;
//        else if(c>=e[mid].w)left=mid+1;
////printf("mid=%d e[%d].w=%d\n",mid,mid,e[mid].w);
//    }
//    if(c>e[mid].w)mid++;
//    return mid-1;
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
////for(int i=0;i<m;i++)printf("%d-%d:%d\n",e[i].u+1,e[i].v+1,e[i].w);
//
//        st.clear();
//        for(int i=0;i<m;i++)
//        {
//            st.insert(e[i].u);
//            st.insert(e[i].v);
//            c=st.size();
//            e[i].cx=c*(c-1);
//        }
//for(int i=0;i<m;i++)printf("%d-%d:%d\t%d\n",e[i].u+1,e[i].v+1,e[i].w,e[i].cx);
//
//        for(int i=0;i<q;i++)
//        {
//            scanf("%d",&c);
//            c=findc(c);
//            printf("%d\n",e[c].cx);
//        }
//    }
//	return 0;
//}

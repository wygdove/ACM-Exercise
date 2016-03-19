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
//#define NUM 100002
//
//int L,n,K;
//struct AppleTree
//{
//    int a;
//    int dis;
//}tree[NUM];
//
//int cmp( const void *a ,const void *b)
//{
//	return (*(AppleTree *)a).dis > (*(AppleTree *)b).dis ? -1 : 1;
//}
//
//int main()
//{
//    freopen("mu.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int T;
//    int xi,ai;
//    int ans;
//    int x;
//    scanf("%d",&T);
//    while(T--)
//    {
//        memset(tree,0,sizeof(tree));
//        ans=0;
//
//        scanf("%d%d%d",&L,&n,&K);
//        for(int i=0;i<n;i++)
//        {
//            scanf("%d%d",&xi,&ai);
//            tree[i].a=ai;
//            tree[i].dis=xi<L-xi?xi:L-xi;
//
//            if(tree[i].a>=K)
//            {
//                x=tree[i].a/K;
//                ans+=x*tree[i].dis;
//
//                tree[i].a-=x*K;
//            }
//        }
//
////        qsort(tree,n,sizeof(tree[0]),cmp);
//////for(int i=0;i<n;i++) printf("tree[%d].dis=%d a=%d\n",i,tree[i].dis,tree[i].a);
////        //dis从小到大排序，从小距离到大距离取
////        int k=0,d=0;
////        for(int i=0;i<n;)
////        {
////            if(tree[i].a==0){i++;continue;}
////            d=tree[i].dis;
////            if(k+tree[i].a<K)
////            {
////                k+=tree[i].a;
////                i++;
////            }
////            else
////            {
////                tree[i].a=k+tree[i].a-K;
////                k=0;
////                ans+=d;
////            }
////        }
////        if(k<K)ans+=d;
//
//
//        qsort(tree,n,sizeof(tree[0]),cmp);
////for(int i=0;i<n;i++) printf("tree[%d].dis=%d a=%d\n",i,tree[i].dis,tree[i].a);
//        //dis从大到小排序，从大距离到小距离取
//        int k=0,d=0;
//        for(int i=0;i<n;)
//        {
//            if(tree[i].a==0){i++;continue;}
//            ///d=tree[i].dis;
//            if(k+tree[i].a<K)
//            {
//                k+=tree[i].a;
//                i++;
//            }
//            else
//            {
//                tree[i].a=k+tree[i].a-K;
//                k=0;
//                ans+=d;
//            }
//        }
//        if(k<K)ans+=d;
//
//        printf("%d\n",ans*2);
//    }
//
//	return 0;
//}

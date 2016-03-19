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
//typedef __int64 INT;
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
//#define MINN -0x3f3f3f3f
//#define MAXN 0x3f3f3f3f
//#define MOD 10007
//#define NUM 100002
//
//int cnt[NUM];
//
////#define LC(x) (x<<1)//2*x
////#define RC(x) (x<<1|1)//2*x+1
//
//int x[NUM];
//struct Node
//{
//    int left,right;
//    int color;
////    int calmid()
////    {//=mid=(left+right)/2
////        return (left+right)>>1;
////    }
//}tree[NUM<<2];
//
//void build(int i,int left,int right)
//{
//    tree[i].left=left;
//    tree[i].right=right;
//    tree[i].color=0;
//
//    if(left==right) return;
//
//    int mid=(left+right)/2;
//    build(i*2,left,mid);
//    build(i*2+1,mid+1,right);
//}
//
//int update(int i,int left,int right)
//{
//cout<<"i="<<i<<endl;
//    if(left<=tree[i].left && tree[i].right<=right)
//    {
//        tree[i].color++;
//        return 0;
//    }
//    if(tree[i].color>0)
//    {
//        tree[i*2].color+=tree[i].color;
//        tree[i*2+1].color+=tree[i].color;
//        tree[i].color=0;
//    }
//
//    int mid=(left+right)>>1;
//    if(right<=mid) update(i*2,left,right);
//    else if(left>mid) update(i*2+1,left,right);
//    else
//    {
//        update(i*2,left,mid);
//        update(i*2+1,mid+1,right);
//    }
//}
//
//void question(int i)
//{
//    if(tree[i].left==tree[i].right)
//    {
//        x[tree[i].left]=tree[i].color;
//        return;
//    }
//    tree[i*2].color+=tree[i].color;
//    tree[i*2+1].color+=tree[i].color;
//    question(i*2);
//    question(i*2+1);
//}
//
//int main()
// {
//    freopen("hdu.in","r",stdin);
//
//    int n;
//    int a,b;
//    while(scanf("%d",&n) && n)
//    {
//        build(1,1,n);
//        for(int i=1;i<=n;i++)
//        {
//            scanf("%d%d",&a,&b);
//            update(1,a,b);
//        }
//        question(1);
//        for(int i=1;i<=n;i++)
//            printf("%d ",x[i]);
//        printf("\n");
//    }
//    return 0;
//}
//
////int main()///Time Limit Exceeded
////{
////    freopen("hdu.in","r",stdin);
////    //freopen("hdu.out","w",stdout);
////
////    int n=0;
////    int a,b;
////    while(scanf("%d",&n) && n)
////    {
////        memset(cnt,0,sizeof(cnt));
////        for(int i=0;i<n;i++)
////        {
////            scanf("%d%d",&a,&b);
////            for(a;a<=b;a++)
////            {
////                cnt[a]++;
////            }
////        }
////        for(int i=1;i<=n;i++)
////        {
////            if(i!=1) printf(" ");
////            printf("%d",cnt[i]);
////        }
////        printf("\n");
////    }
////
////	return 0;
////}

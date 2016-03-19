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
//#define MAXN 1000000002
//#define MOD 10007
//#define NUM 100008
//
//int a[NUM];
//int Max[NUM][32];
//int Min[NUM][32];
//int n,k;
//
//void SparseTable()
//{
//    int nlen=n;
//    for(int i=1;(1<<i)<=n;i++)
//    {
//        int x=(int)(nlen+1-pow(2,i));
//        for(int j=1;j<=x;j++)
//        {
//            int m=(int)(pow(2,i-1));
//            Max[i][j]=max(Max[i-1][j],Max[i-1][j+m]);
//            Min[i][j]=min(Min[i-1][j],Min[i-1][j+m]);
//        }
//    }
//}
//
//int RMQ(int i,int j)
//{
//    int x=(int)(log(j-i+1)/log(2));
//    int xmax=max(Max[x][i],Max[x][j-(int)pow(2,x)+1]);
//    int xmin=min(Min[x][i],Min[x][j-(int)pow(2,x)+1]);
//    return xmax-xmin;
//}
//
//void test()
//{
//    int i=1;
//    printf("max\n");
//    for(int j=2;j<=n;j++)
//    {
//        int x=(int)(log(j-i+1)/log(2));
//        printf("%d ",max(Max[x][i],Max[x][j-(int)pow(2,x)+1]));
//    }
//    printf("\n");
//    printf("min\n");
//    for(int j=2;j<=n;j++)
//    {
//        int x=(int)(log(j-i+1)/log(2));
//        printf("%d ",min(Min[x][i],Min[x][j-(int)pow(2,x)+1]));
//    }
//    printf("\n");
//}
//
//int bin(int s,int e)
//{
//    if(RMQ(s,e)<k) return e;
//
//    int left=s,right=e-1,mid,r;
//    while(left<=right)
//    {
//        mid=(left+right)>>1;
//        r=RMQ(s,mid);
//        if(r>=k) right=mid-1;
//        if(r<k) left=mid+1;
//    }
//    if(r==k) mid--;
//    return mid;
//}
//
//int main()
//{
//    freopen("mu.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int T;
//    int cnt;
//    scanf("%d",&T);
//    while(T--)
//    {
//        scanf("%d%d",&n,&k);
//        for(int i=1;i<=n;i++)
//        {
//            scanf("%d",&a[i]);
//            Max[0][i]=a[i];
//            Min[0][i]=a[i];
//        }
//        SparseTable();
//        //test();
//        cnt=0;
////        for(int i=1;i<n;i++) for(int j=i+1;j<=n;j++)
////            if(RMQ(i,j)<k) cnt++;
////        printf("%d\n",cnt+n);
//        for(int i=1;i<=n;i++) cnt+=bin(i,n)-i;
//        printf("%d\n",cnt+n);
//    }
//
//	return 0;
//}

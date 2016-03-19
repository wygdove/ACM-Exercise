//#pragma comment(linker, "/STACK:1024000000,1024000000")
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
////typedef __int64 INT;
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
//int a[NUM];
//
//	void qsort(int a[],int left,int right) {
//	    int mid,l,r,temp;
//	    l=left; r=right;
//	    mid=a[(left+right)/2];
//	    while(l<r) {
//	      while(a[l]<mid) ++l;
//	      while(a[r]>mid) --r;
//	      if(l>=r) break;
//	      temp=a[l];
//	      a[l]=a[r];
//	      a[r]=temp;
//	      if(l!=mid)  --r;
//	      if(r!=mid)  ++l;
//	    }
//	   if(l==r) l++;
//	   if(left<r) qsort(a,left,l-1);
//	   if(l<right) qsort(a,r+1,right);
//	   return;
//	}
//
//int main()
//{
//    freopen("hdu.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int n,m;
//    while(scanf("%d%d",&n,&m) && n && m)
//    {
//        memset(a,0,sizeof(a));
//
//        for(int i=0;i<n;i++)
//            scanf("%d",&a[i]);
//
//        //sort(a,a+n);
//        qsort(a,0,n-1);
//
//        for(int i=n-1;m>0 && i>=0;i--,m--) {
//            if(i!=n-1)printf(" ");
//            printf("%d",a[i]);
//        }
//        printf("\n");
//    }
//
//	return 0;
//}

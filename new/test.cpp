//#pragma comment(linker, "/STACK:1024000000,1024000000")
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
//int n;
//int a[NUM],b[NUM];
//int Search(int num,int low,int high)
//{
//    int mid;
//    while(low<=high)
//    {
//        mid=(low+high)/2;
//        if(num>=b[mid]) low=mid+1;
//        else high=mid-1;
//    }
//    return low;
//}
//int LIS()
//{
//    int i,len,pos;
//    b[1]=a[1];
//    len=1;
//    for(i=2;i<=n;i++)
//    {
//        if(a[i]>=b[len])
//        {
//            len=len+1;
//            b[len]=a[i];
//        }
//        else
//        {
//            pos=Search(a[i],1,len);
//            b[pos]=a[i];
//        }
//    }
//    return len;
//}
//
//int main()
//{
//    cin.sync_with_stdio(false);
//    cout.sync_with_stdio(false);
//
//    freopen("new.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    while(scanf("%d",&n)!=EOF )
//    {
//        for(int i=0;i<n;i++) scanf("%d",&a[i]);
//        printf("%d\n", LIS());
//for(int i=0;i<n;i++)printf("a[%d]=%d\n",i,a[i]);
//for(int i=0;i<n;i++)printf("b[%d]=%d\n",i,b[i]);
//
//
//
//    }
//
//    fclose(stdin);
//    fclose(stdout);
//	return 0;
//}

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
//#define memsch(ch) memset(ch,'\0',sizeof(ch))
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
//#define NUM 1008
//
//int a[NUM],f[NUM],d[NUM];
//
//int bsearch(const int *f, int sizen, const int &a)
//{
//    int l=0,r=sizen-1;
//    while(l<=r)
//    {
//        int mid=(l+r)/2;
//        if(a>f[mid-1] && a<=f[mid])return mid;
//        else if(a<f[mid])r=mid-1;
//        else l=mid+1;
//    }
//}
//
//int LIS(const int *a,const int &n)
//{
//    int i,j,sizen = 1;
//    f[0]=a[0];
//    d[0]=1;
//    for(i=1;i<n;i++)
//    {
//        if(a[i]<=f[0])j=0;
//        else if(a[i]>f[sizen-1])j=sizen++;
//        else j=bsearch(f,sizen,a[i]);
//        f[j]=a[i];
//        d[i]=j+1;
//    }
////for(int i=0;i<n;i++)printf("f=%d\n",f[i]);
//    return sizen;
//}
//
//
//int main()
//{
//    cin.sync_with_stdio(false);
//    cout.sync_with_stdio(false);
//
//    freopen("new.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int i, n;
//    while(scanf("%d",&n)&&n)
//    {
//        mems0(a);mems0(f);mems0(d);
//
//        for(i=0;i<n;i++) scanf("%d",&a[i]);
//        int ans=0;
//        LIS(a,n);
//        for(int i=0;i<n;i++)if(f[i]>0)ans+=a[f[i]-1];
//        printf("%d\n",ans);
//    }
//
//    fclose(stdin);
//    fclose(stdout);
//    return 0;
//}

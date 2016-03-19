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
//#define NUM 1008
//
//int n;
//int a[NUM];
//int b[NUM];
//
//bool cmp(int a,int b)
//{
//    return a>b;
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
//    int win;
//    while(scanf("%d",&n)&&n)
//    {
//        mems0(a);mems0(b);
//        win=0;
//
//        for(int i=0;i<n;i++)scanf("%d",&a[i]);
//        for(int i=0;i<n;i++)scanf("%d",&b[i]);
//        sort(a,a+n,cmp);
//        sort(b,b+n,cmp);
//
//        for(int i=n-1;i>=0;i--)
//        {
//            if(a[i]>b[i])win++;
//            else if(a[i]<b[i])
//            {
//                win--;
//                for(int j=0;j<i;j++)b[j]=b[j+1];
//            }
//            else if(a[i]==b[i])
//            {
//                if(a[0]>b[0])
//                {
//                    win++;
//                    for(int j=0;j<i;j++)a[j]=a[j+1];
//                }
//                else if(a[0]<b[0])win--;
//                else
//                    if(a[i]>b[0])win++;
//                    else if(a[i]<b[0])win--;
//                for(int j=0;j<i;j++)b[j]=b[j+1];
//            }
////printf("win=%d\n",win);
//        }
//
////        if(win<0)win=0;
//        printf("%d\n",win*200);
//
//    }
//
//    fclose(stdin);
//    fclose(stdout);
//	return 0;
//}

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
// /**************************************************************
//    Problem:
//    Result:
//****************************************************************/
//
//#define NUM 100000
//#define MOD 1000000007
//
//INT a[NUM+10];
//INT b[NUM+10];
//int i;
//
//void fun1(int n) {
//    int index=1;
//  for(i=1; i<=n; i +=2)
//  {
//      b[index++]=a[i]%MOD;
//  }
//  for(i=2; i<=n; i +=2)
//    b[index++]=a[i]%MOD;
//  for(i=1; i<=n; ++i)
//    a[i]=b[i];
////for(i=1;i<=n;i++)cout<<"a["<<i<<"]="<<a[i]<<endl;
//}
//void fun2(int n) {
//  int L = 1;int R = n;
//  while(L<R) {
//    //Swap(a[L], a[R]);
//    INT t;
//    t=a[L];
//    a[L]=a[R];
//    a[R]=t;
//    ++L;--R;
//  }
////for(i=1;i<=n;i++)cout<<"a["<<i<<"]="<<a[i]<<endl;
//}
//void fun3(int n) {
//  for(i=1; i<=n; ++i)
//    a[i]=(a[i]%MOD)*(a[i]%MOD);
////for(i=1;i<=n;i++)cout<<"a["<<i<<"]="<<a[i]<<endl;
//}
//
//int main()
//{
//    freopen("Bestcoder.in","r",stdin);
//
//    int T;
//    int n,m;
//    char c;
//    int f;
//    scanf("%d",&T);
//    while(T--)
//    {
//
//n=0;
//m=0;
//c='a';
//f=0;
//
//        scanf("%d%d",&n,&m);
//
//        //memset(a,0,sizeof(a));
//        for(i=0;i<=n;i++)
//            a[i]=i;
//        memset(b,0,sizeof(b));
//
////cout<<".........."<<endl;
//        while(m--)
//        {
////cout<<"m="<<m<<endl;
//            getchar();
//            scanf("%c %d",&c,&f);
////cout<<"c="<<c<<"  f="<<f<<endl;
//            if(c=='O')
//            {
////cout<<"OOOOOOOOOO\n";
//                if(f==1)
//                {
//                    fun1(n);
////cout<<"111111111111\n";
//                }
//                else if(f==2)
//                {
//                    fun2(n);
////cout<<"222222222222\n";
//                }
//                else if(f==3)
//                {
//                    fun3(n);
////cout<<"333333333333\n";
//                }
//            }
//            else if(c=='Q')
//            {
////cout<<"QQQQQQQQQQ\n";
//                printf("%d\n",a[f]%MOD);
//            }
//        }
////printf("%d.....%d.....%d\n",a[1],a[2],a[3]);
//    }
//
//	return 0;
//}

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
//#define NUM 5000008
//
//int main()
//{
//    cin.sync_with_stdio(false);
//    cout.sync_with_stdio(false);
//
//    freopen("mu.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int T;
//    int n,a,b;
//    LL t;
//    LL ta,tb,a1,a2,ia1,ia2,b1,b2,ib1,ib2;
//    LL ans;
//    scanf("%d",&T);
//    for(int cnt=1;cnt<=T;cnt++)
//    {
//        a1=a2=b1=b2=-0x7fffffffffffffff;
//        ia1=ia2=ib1=ib2=-1;
//
//        scanf("%d%d%d",&n,&a,&b);
//        for(int i=1;i<=n;i++)
//        {
//            scanf("%I64d",&t);
//            ta=t*t*a;
//            tb=t*b;
//            if(a1<ta){a2=a1;a1=ta;ia1=i;}
//            else if(a2<ta){a2=ta;ia2=i;}
//            if(b1<tb){b2=b1;b1=tb;ib1=i;}
//            else if(b2<tb){b2=tb;ib2=i;}
////printf("a1=%I64d a2=%I64d b1=%I64d b2=%I64d\n",a1,a2,b1,b2);
//        }
//        if(ia1!=ib1)ans=a1+b1;
//        else ans=max(a1+b2,a2+b1);
//        printf("Case #%d: %I64d\n",cnt,ans);
//
////        temp=0;ans=-INF;
////        for(int i=1;i<=n;i++)
////        {
////            for(int j=1;j<=n;j++)
////            {
////                if(i==j)continue;
////                temp=a*t[i]*t[i]+b*t[j];
////                ans=ans>temp?ans:temp;
//////printf("temp=%d\n",temp);
////            }
////        }
////        printf("Case #%d: %d\n",cnt,ans);
//    }
//
//    fclose(stdin);
//    fclose(stdout);
//	return 0;
//}

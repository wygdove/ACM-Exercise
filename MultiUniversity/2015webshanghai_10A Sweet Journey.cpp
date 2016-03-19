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
//int l[NUM],r[NUM];
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
//    int n,a,b,L;
//    int ste,ans,aa;
//    scanf("%d",&T);
//    for(int cnt=1;cnt<=T;cnt++)
//    {
//        mems0(l);mems0(r);
//        ste=0;ans=0;aa=0;
//
//
//        scanf("%d%d%d%d",&n,&a,&b,&L);
//        for(int i=0;i<n;i++)
//        {
//            scanf("%d%d",&l[i],&r[i]);
//            if(i==0)
//            {
//                ste+=l[i]*b;
//                ste-=(r[i]-l[i])*a;
//                if(ste<0){aa=0-ste;ste=0;}
////printf("ans=%d ste=%d\n",ans,ste);
//            }
//            else
//            {
//                ste+=(l[i]-r[i-1])*b;
//                ste-=(r[i]-l[i])*a;
//                if(ste<0){ans+=0-ste;ste=0;}
//                else {ans-=ste;ste=0;}
////printf("ans=%d\n",ans);
//            }
//        }
//        if(L>r[n-1])ste+=(L-r[n-1])*b;
//        ans-=ste;
////printf("ans=%d\n",ans);
//
//        if(ans<=0)ans=0;
////        else ans=0-ans;
//        printf("Case #%d: %d\n",cnt,ans+aa);
//    }
//
//    fclose(stdin);
//    fclose(stdout);
//	return 0;
//}

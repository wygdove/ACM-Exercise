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
//#define MOD 10000000000
//#define NUM 100008
//
//LL x,m;
//int y,q,o,n;
//int di[NUM];
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
//    scanf("%d",&T);
//    for(int cnt=1;cnt<=T;cnt++)
//    {
//        printf("Case #%d:\n",cnt);
//        x=1;
//
//        scanf("%d %I64d",&q,&m);
//        for(int i=1;i<=q;i++)
//        {
//            scanf("%d",&o);
//            if(o==1)
//            {
//                scanf("%d",&y);
//                di[i]=y;
//                x*=1LL*y;
//                x%=m;
//            }
//            else if(o==2)
//            {
//                scanf("%d",&n);
//                di[i]=1;
//                x/=di[n];
//                x%=m;
//            }
//            printf("%I64d\n",x%m);
//        }
//
//    }
//
//    fclose(stdin);
//    fclose(stdout);
//	return 0;
//}

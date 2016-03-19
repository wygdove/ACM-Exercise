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
//#define NUM 250008
//
//int v[NUM];
//int n[NUM];
//int f[NUM];
//int N,V;
//int sum;
//
//void ZeroOnePack(int cost,int weight)
//{
//    for(int j=V;j>=cost;j--)
//        f[j]=max(f[j],f[j-cost]+weight);
//}
//void CompletePack(int cost,int weight)
//{
//    for(int j=cost;j<=V;j++)
//        f[j]=max(f[j],f[j-cost]+weight);
//}
//void MultiplePack(int cost,int weight,int amount)
//{
//    if(cost*amount>=V)
//    {
//        CompletePack(cost,weight);
//        return;
//    }
//    int k=1;
//    while(k<amount)
//    {
//        ZeroOnePack(k*cost,k*weight);
//        amount-=k;
//        k*=2;
//    }
//    ZeroOnePack(amount*cost,amount*weight);
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
//    while(scanf("%d",&N)&&N<0)
//    {
//        mems0(v);
//        mems0(n);
//        mems0(f);
//        sum=0;
//
//        for(int i=0;i<N;i++)
//        {
//            scanf("%d%d",&v[i],&n[i]);
//            sum+=v[i]*n[i];
//        }
//        V=sum/2;
//        for(int i=0;i<N;i++)
//        {
//            MultiplePack(v[i],v[i],n[i]);
//        }
//        printf("%d %d\n",sum-f[V],f[V]);
//
////for(int i=0;i<V+2;i++)printf("f[%d]=%d\n",i,f[i]);
////        printf("\n%d\n\n",f[V]);
//    }
//
//    fclose(stdin);
//    fclose(stdout);
//	return 0;
//}

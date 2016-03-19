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
//#define NUM 1000002
//
//int p[NUM];
//int w[NUM];
//int f[NUM];
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
//    int T;
//    int n;
//    int E,F;
//    scanf("%d",&T);
//	while(T--)
//	{
//  		memsINF(f);
//  		mems0(p);
//  		mems0(w);
//
//		scanf("%d%d%d",&E,&F,&n);
//		for(int i=0;i<n;i++)
//            scanf("%d%d",&p[i],&w[i]);
//
//		f[0]=0;
//		for(int i=0;i<n;i++)
//		{
//			for(int j=w[i];j<=F-E;j++)
//			{
//				f[j]=min(f[j],f[j-w[i]]+p[i]);
//			}
//		}
////for(int i=0;i<=F-E+1;i++)printf("%d\n",f[i]);
//		if(f[F-E]==INF)
//            printf("This is impossible.\n");
//		else
//            printf("The minimum amount of money in the piggy-bank is %d.\n",f[F-E]);
//	}
//
//    fclose(stdin);
//    fclose(stdout);
//	return 0;
//}

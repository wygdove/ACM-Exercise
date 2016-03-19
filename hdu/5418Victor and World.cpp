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
//#define mes0(s)  memset(s,0,sizeof(s))
//#define mes_1(s) memset(s,-1,sizeof(s))
//#define mesINF(s) memset(s,INF,sizeof(s))
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
//****************************************************************/
//
//
//const double eps = 1e-9;
//const double pi=acos(-1.0);
//#define INF 0x3f3f3f3f
//#define MINN -0x3f3f3f3f
//#define MAXN 0x3f3f3f3f
//#define MOD 10007
//#define NUM 102
//
//int n,m;
//int g[NUM][NUM];
//int dist[NUM][NUM];
//
//int main()
//{
//	cin.sync_with_stdio(false);
//    cout.sync_with_stdio(false);
//
//    freopen("hdu.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int T;
//    int u,v,w;
//    scanf("%d",&T);
//    while(T--)
//    {
//        mesINF(g);
//        mesINF(dist);
//
//        scanf("%d%d",&n,&m);
//        for(int i=0;i<m;i++)
//        {
//            scanf("%d%d%d",&u,&v,&w);
//            if(w<g[u][v])g[u][v]=g[v][u]=w;
//            dist[u][v]=dist[v][u]=w;
//        }
//        for(int i=0;i<n;i++)dist[i][i]=0;
//        for(int k=0;k<n;k++)for(int i=0;i<n;i++)for(int j=0;j<n;j++)
//            dist[i][j]=dist[i][j]<(dist[i][k]+dist[k][j])?dist[i][j]:(dist[i][k]+dist[k][j]);
//
////for(int i=0;i<n;i++){for(int j=0;j<n;j++){printf("%d ",g[i][j]);}printf("\n");}
//
//
//
//    }
//
//	return 0;
//}

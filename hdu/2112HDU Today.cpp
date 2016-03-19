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
//typedef long long LL;
//typedef long double real;
//typedef vector<int> VI;
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
//#define INF 0x3f3f3f3f
//#define MINN -0x3f3f3f3f
//#define MAXN 0x3f3f3f3f
//#define MOD 10007
//#define NUM 200
//
//string ss,se;
//string sa,sb;
//map<string,int> mp;
//int n,m;
//int g[NUM][NUM];
//int lowcost[NUM];
//bool vis[NUM];
//
//void Dijkstra(int beg)
//{
//    for(int i=0; i<n; i++)
//    {
//        lowcost[i]=INF;
//        vis[i]=false;
//    }
//    lowcost[beg]=0;
//    for(int j=0; j<n; j++)
//    {
//        int k=-1;
//        int Min=INF;
//        for(int i=0; i<n; i++)
//            if(!vis[i]&&lowcost[i]<Min)
//            {
//                Min=lowcost[i];
//                k=i;
//            }
//        if(k==-1)break;
//        vis[k]=true;
//        for(int i=0; i<n; i++)
//            if(!vis[i]&&lowcost[k]+g[k][i]<lowcost[i])
//            {
//                lowcost[i]=lowcost[k]+g[k][i];
//            }
//    }
//}
//
//int main()
//{
//    freopen("hdu.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int a,b,c;
//    int x,d;
//    while(scanf("%d",&m) && m!=-1)
//    {
//        mp.clear();
//        memset(g,INF,sizeof(g));
//        n=0;
//
//        cin>>ss>>se;
//        for(int i=0;i<m;i++)
//        {
//            cin>>sa>>sb;
//            if(mp.find(sa)==mp.end()) mp[sa]=n++;
//            if(mp.find(sb)==mp.end()) mp[sb]=n++;
//            a=mp[sa];b=mp[sb];
//            scanf("%d",&c);
////printf("a=%d b=%d c=%d\n",a,b,c);
//            if(c<g[a][b]) g[a][b]=g[b][a]=c;
//        }
//
//        Dijkstra(mp[ss]);
//        int ans=lowcost[mp[se]];
//        if(ss==se){ printf("0\n");continue;}
//        if(ans!=INF) printf("%d\n",ans);
//        else printf("-1\n");
//    }
//
//    return 0;
//}

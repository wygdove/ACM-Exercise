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
//#define NUM 2015
//
//int num[NUM];
//bool vis[NUM];
//
//int main()
//{
//    freopen("new.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int n;
//    int a,b;
//    while(scanf("%d",&n)!=EOF)
//    {
//        memset(num,0,sizeof(num));
//        bool bl=true;
//
//
//        for(int i=0;i<n-1;i++)
//        {
//            memset(vis,0,sizeof(vis));
//            for(int j=0;j<n/2;j++)
//            {
//                scanf("%d-%d",&a,&b);
//                if(vis[a]||vis[b]) bl=false;
//                vis[a]=1;vis[b]=1;
//                num[a]++;num[b]++;
//            }
//        }
//        if(bl)
//        {
//            for(int i=1;i<=n;i++)
//                if(num[i]!=(n-1))
//                    bl=false;
//        }
//        if(bl)printf("Yes\n");
//        else printf("No\n");
//	}
//
//	return 0;
//}

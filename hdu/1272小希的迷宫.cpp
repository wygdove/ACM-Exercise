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
//#define NUM 100
//
////并查集的实现
//int parent[NUM],rank[NUM];
//
//void init()  //初始化
//{
//	int i;
//	for(i=1;i<NUM;i++)
//	{
//		parent[i]=i;
//		rank[i]=1;
//	}
//}
//int find(int x) //查找
//{
//	if(x!=parent[x])
//		parent[x]=find(parent[x]);
//	return parent[x];
//}
//void uniont(int x,int y) //合并
//{
//	x=find(x),y=find(y);
//	if(x!=y)
//	{
//		if(rank[x]<rank[y])
//		{
//			parent[x]=y;
//			rank[y]+=rank[x];
//		}
//		else
//		{
//			parent[y]=x;
//			rank[x]+=rank[y];
//		}
//	}
//}
//
//int main()
//{
//    freopen("hdu.in","r",stdin);
//    //freopen("hdu.out","w",stdout);
//
//    int a,b;
//    bool bl;
//    while(scanf("%d%d",&a,&b) && (a!=-1&&b!=-1))
//    {
//        if(a==0 && b==0)
//        {
//            printf("Yes\n");
//            continue;
//        }
//
//        init();
//        bl=true;
//        uniont(a,b);
//        while(scanf("%d%d",&a,&b) && (a&&b))
//        {
//            if(find(a)==find(b)) bl=false;
//            else uniont(a,b);
//        }
//
//        if(bl) printf("Yes\n");
//        else printf("No\n");
//    }
//
//	return 0;
//}

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
//#define MINN -0x3f3f3f3f
//#define MAXN 0x3f3f3f3f
//#define MOD 10007
//#define NUM 100001
//
//int ans;
//
////并查集的实现
//int parent[NUM],rank[NUM];
//
//void make_set()  //初始化
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
//void union_set(int x,int y) //合并
//{
//	x=find(x),y=find(y);
//	if(x!=y)
//	{
//		if(rank[x]<rank[y])
//		{
//			parent[x]=y;
//			rank[y]+=rank[x];
//                ans=ans>rank[y]?ans:rank[y];
//		}
//		else
//		{
//			parent[y]=x;
//			rank[x]+=rank[y];
//                ans=ans>rank[x]?ans:rank[x];
//		}
//	}
//}
//
//int main()
//{
//    freopen("hdu.in","r",stdin);
//    //freopen("hdu.out","w",stdout);
//
//    int T=0;
//    int a,b;
//    while(scanf("%d",&T)!=EOF)
//    {
//        if(T==0){printf("1\n");continue;}
//        make_set();
//        ans=0;
//        while(T--)
//        {
//            scanf("%d%d",&a,&b);
//            union_set(a,b);
//        }
//        printf("%d\n",ans);
//    }
//
//
//	return 0;
//}

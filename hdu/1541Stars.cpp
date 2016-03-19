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
//#define NUM 32010
//
//int c[32010];
//int a[15010];
//int sum(int i) //返回前i个元素和
//{
//       int s=0;
//       while(i>0)
//       {
//              s+=c[i];
//              i-=i&(-i);
//       }
//       return s;
//}
//void update(int i,int value)  //i结点的改变值为value
//{
//       while(i<=NUM)///i<=n Wrong
//       {
//              c[i]+=value;
//              i+=i&(-i);
//       }
//}
//
///**
//题目意思就是说，
//给你一张star maps，每个star有自己的level，
//level是这样计算的：
//（Let the level of a star be an amount of the stars that are not higher and not to the right of the given star.）
//统计这个star左下角star的个数，就是这个star的level。
//现在要你总计图中level从0到N-1的star分别有多少个？
//
////因为y是升序,所以横坐标小于x的，（想了很久）所有点都符合,这是解这道题的关键。
//scanf("%d%d",&x,&y);    //下标可能从0开始，所以要x+1
//a[sum(x+1)]++;       //求出横坐标小于x的所有stars个数，并记录到a中
//updata(x+1,1);          //更新区间
//*/
//
//int main()
//{
//    freopen("hdu.in","r",stdin);
//    //freopen("hdu.out","w",stdout);
//
//    int n;
//    int x,y;
//    while(scanf("%d",&n)!=EOF)
//    {
//        memset(a,0,sizeof(a));
//        memset(c,0,sizeof(c));
//
//        for(int j=0;j<n;j++)
//        {
//            scanf("%d%d",&x,&y);
//            a[sum(x+1)]++;
//            update(x+1,1);
//        }
//        for(int j=0;j<n;j++)
//            printf("%d\n",a[j]);
//    }
//
//	return 0;
//}
//

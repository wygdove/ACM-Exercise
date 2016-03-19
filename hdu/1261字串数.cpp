//#pragma comment(linker, "/STACK:1024000000,1024000000")
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
////for DS
////函数结果状态代码
//#define TRUE 1
//#define FALSE 0
//#define OK 1
//#define ERROR 0
//#define INFEASIBLE -1
//#define OVERFLOW -2
////Status是函数的类型，其值是函数结果状态代码
//typedef int Status;
//typedef int ElemType;
//
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
//    Result: Time Limit Exceeded
//    Author: wygdove
//****************************************************************/
//
//
//#define INF 0x3f3f3f3f
//#define MINN -0x3f3f3f3f
//#define MAXN 0x3f3f3f3f
//#define MOD 10007
//#define NUM 1002
//
//int n,m,ans=0;
//int rck[NUM],num[NUM],used[NUM];
//
//void unrepeat_permutation(int l)
//{
//    if(l==n)
//    {
//        ans++;
//        return;
//    }
//    for(int i=0; i<m; i++)
//        if(used[i]>0)
//        {
//            used[i]--;
//            rck[l]=num[i];
//            unrepeat_permutation(l+1);
//            used[i]++;
//        }
//}
//
//
//int main()
//{
//    freopen("hdu.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    while(scanf("%d",&m) && m)
//    {
//        n=0;
//        int a[13];
//        for(int i=0; i<m; i++)
//        {
//            scanf("%d",&a[i]);
//            n+=a[i];
//            used[i]=a[i];
//            num[i]=i;
//        }
//        memset(rck,0,sizeof(rck));
//        ans=0;
//        unrepeat_permutation(0);
//        printf("%d\n",ans);
//    }
//
//    return 0;
//}

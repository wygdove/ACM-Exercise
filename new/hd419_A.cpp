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
//    Result:
//    Author: wygdove
//****************************************************************/
//
//
//#define INF 0x3f3f3f3f
//#define MINN -0x3f3f3f3f
//#define MAXN 0x3f3f3f3f
//#define MOD 10007
//#define NUM 102
//
//int in[NUM];
//
//int main()
//{
//    freopen("new.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int a,b;
//    int cnt=1;
//    bool bl;
//    set<int> st;
//    set<int>::iterator it;
//    while(scanf("%d%d",&a,&b) && (a>=0&&b>=0))
//    {
//        bl=true;
//        st.clear();
//        memset(in,0,sizeof(in));
//
//        in[b]++;
//        st.insert(a);st.insert(b);
//        while(scanf("%d%d",&a,&b) && a && b)
//        {
//            in[b]++;
//            st.insert(a);st.insert(b);
//        }
//        bool b=false;
//        for(it=st.begin();it!=st.end();it++)
//        {
//            if(in[*it]==0)
//            {
//                if(b)bl=false;
//                else b=true;
//            }
//            if(in[*it]>1) bl=false;
//        }
//
//        if(bl)printf("Case %d is a tree.\n",cnt++);
//        else printf("Case %d is not a tree.\n",cnt++);
//
//    }
//	return 0;
//}

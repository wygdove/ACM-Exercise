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
//#define NUM 100
//
//
//
//int main()
//{
//    freopen("new.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int T=0;
//    int n,x;
//    char ch[6];
//    string str;
//    queue<int> q;
//    stack<int> s;
//    scanf("%d",&T);
//    while(T--)
//    {
//        while(!q.empty()) q.pop();
//        while(!s.empty()) s.pop();
//
//        scanf("%d",&n);
//        cin>>str;
//        if(str.compare("FIFO")==0)
//        {
//            while(n--)
//            {
//                cin>>str;
//                if(str.compare("IN")==0)
//                {
//                    scanf("%d",&x);
//                    q.push(x);
//                }
//                else
//                    if(str.compare("OUT")==0)
//                {
//                    if(q.empty()) printf("None\n");
//                    else
//                    {
//                        printf("%d\n",q.front());
//                        q.pop();
//                    }
//                }
//            }
//        }
//        else
//            if(str.compare("FILO")==0)
//        {
//            while(n--)
//            {
//                cin>>str;
//                if(str.compare("IN")==0)
//                {
//                    scanf("%d",&x);
//                    s.push(x);
//                }
//                else
//                    if(str.compare("OUT")==0)
//                {
//                    if(s.empty()) printf("None\n");
//                    else
//                    {
//                        printf("%d\n",s.top());
//                        s.pop();
//                    }
//                }
//            }
//        }
//    }
//
//	return 0;
//}

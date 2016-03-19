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
//		int T;
//		scanf("%d",&T);
//		int n;
//		while(T--!=0) {
//			scanf("%d",&n);
//			set<string> ts;
//			string t,temp;
//			for(int i=0;i<n;i++) {
//				cin>>t;
//				ts.insert(t);
//			}
//
//			bool bl=true;
//			for(int i=0;i<ts.size();i++) {
//				t=*(ts.begin());
//				ts.erase(t);
//				temp=*(ts.begin());
////cout<<t<<" "<<temp<<endl;
//                if(t.length()>temp.length()){string x=t;t=temp;temp=t;}
//				if(t==temp.substr(0,t.length())) {
//					bl=false;break;
//				}
//			}
//			if(bl) printf("YES\n");
//			else printf("NO\n");
//		}
//
//	return 0;
//}

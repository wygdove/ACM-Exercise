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
//#define NUM 102
//
//
//
//int main()
//{
//    freopen("new.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int n,m,c;
//
//    while(cin>>n>>m>>c)
//    {
//        if(n==0 && m==0 && c==0) break;
//        n-=7; m-=7;
//        if(n==1 && m==1)
//        {
//            if(c==0)printf("0\n");
//            else printf("1\n");
//            continue;
//        }
//        n*=m;
//        if(n%2!=0 && c==1)
//        {
//            n/=2;
//            n++;
//        }
//        else n/=2;
//        cout<<n<<endl;
//    }
//
//	return 0;
//}

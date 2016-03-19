#include<iostream>
#include<memory.h>
#include<fstream>
#include<string>
#include<algorithm>
#include<math.h>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<vector>
#include<stdio.h>
#include<stdlib.h>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>

using namespace std;

typedef __int64 INT;
typedef long long LL;
typedef long double real;
typedef vector<int> VI;


/**************************************************************
    Problem:
    Ordering:
    Thought:
    Result:
****************************************************************/

#define MOD 10007
#define MAXN 100
#define NUM 100000

int c[NUM+1];

int main()  ///Time Limit Exceeded
{
    freopen("new.in","r",stdin);

    int n;
    int a,b;
    while(scanf("%d",&n) && n)
    {
        memset(c,0,sizeof(c));
        for(int i=1;i<=n;i++)
        {
            scanf("%d%d",&a,&b);

        }
        for(int i=1;i<=n;i++)
            printf("%d ",c[i]);
        cout<<endl;
    }

	return 0;
}


//int main()  ///Time Limit Exceeded
//{
//    freopen("new.in","r",stdin);
//
//    int n;
//    int a,b;
//    while(scanf("%d",&n) && n)
//    {
//        memset(c,0,sizeof(c));
//        for(int i=1;i<=n;i++)   //while(n--)改变了n，会无输出
//        {
//            scanf("%d%d",&a,&b);
//            for(a;a<=b;a++)
//                c[a]++;
//        }
////cout<<"...........\n";
//        for(int i=1;i<=n;i++)
//            printf("%d ",c[i]);
//        cout<<endl;
//    }
//
//	return 0;
//}

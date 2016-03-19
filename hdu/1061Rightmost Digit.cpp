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

#define NUM 100
#define MOD 10007

/**************************************************************
    Problem: hdu1061Rightmost Digit
    Ordering:
    Thought: 找规律，从1到20是固定的，20之后开始重复
    Result: Accepted
****************************************************************/
/*
1 1
2 4
3 7
4 6
5 5
6 6
7 3
8 6
9 9
10 0
11 1
12 6
13 3
14 6
15 5
16 6
17 7
18 4
19 9
20 0

21 1
22 4
23 7
*/

int a[21]={0,1,4,7,6,5,6,3,6,9,0,1,6,3,6,5,6,7,4,9,0};

int main()
{
    freopen("hdu.in","r",stdin);

    int T=0;
    INT n;
    int temp;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%I64d",&n);
        temp=n%20;
        printf("%d\n",a[temp]);
    }

	return 0;
}
//Time Limit Exceed
//    int T=0;
//    INT n;
//    int ans;
//    int temp;
//    scanf("%d",&T);
//    while(T--)
//    {
//        scanf("%I64d",&n);
//        temp=n%10;
//        ans=1;
//        while(n--)
//        {
//            ans*=temp;
//            ans%=10;
////cout<<"ans="<<ans<<endl;
//        }
//        printf("%d\n",ans);
//    }

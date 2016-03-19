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
//    Result: Time Limit Exceeded
//    n=3 x=40
//    n=4 x=152
//    n=10 x=170 0520
//    x”√◊˜≤‚ ‘∏¥‘”∂»
//****************************************************************/
//
//
//#define MINN -0x3f3f3f3f
//#define MAXN 0x3f3f3f3f
//#define MOD 1000000007
//#define NUM 100
//
//int num[NUM+2];
//int rcd[NUM+2];
//int used[NUM+2];
//int n;
//int cnt;int x;
//
//void full_permutation(int l)
//{
//    int i;
//    if(l==n)
//    {
//        cnt++;
//        cnt%=MOD;
//    }
//    for(int i=1;i<=n;i++)
//    {cout<<(x++)<<" ";
//        if(!used[i])
//        {
//            if(used[i-1] && used[i+1])return;
//            //if(num[i-1]!=num[i+1])return;
//            used[i]=1;rcd[l]=num[i];
//            full_permutation(l+1);
//            used[i]=0;
//        }
//    }
//    return;
//}
//
//int main()
//{
//    freopen("Bestcoder.in","r",stdin);
//
//    while(scanf("%d",&n)!=EOF)
//    {x=0;
//        cnt=0;
//        memset(rcd,0,sizeof(rcd));
//        memset(used,0,sizeof(used));
//
//        for(int i=1;i<=n;i++)
//        {
//            scanf("%d",&num[i]);
//        }
//        full_permutation(0);
//        printf("%d\n",cnt);
//    }
//
//	return 0;
//}
////{
////    freopen("Bestcoder.in","r",stdin);
////
////    int n=0;
////    int ans;
////    while(scanf("%d",&n)!=EOF)
////    {
////        ans=0;
////        memset(f,0,sizeof(f));
////
////        for(int i=1;i<=n;i++)
////        {
////            scanf("%d",&a[i]);
////            if(a[i]) ans++;
////        }
//////        printf("%d\n",com(n,ans));
////        for(int i=1;i<=n;i++)
////        {
////            for(int j=n;j>=a[i];j--)
////            {
////                f[j]=max(f[j],f[j-a[i]]+a[i]);
//////printf("%d\n",f[j]);
////            }
////        }
////        int m=0;
////        for(int i=1;i<=n;i++)
////            m=m>f[i]?m:f[i];
////        printf("%d\n",m+com(n,ans));
//////cout<<endl;
////    }
////
////	return 0;


#include <cmath>
#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;


const int MOD=1000000007;
int a[105],i,j,n,k;
long long dp[105][105],C[105][105];


int main()
{
    C[0][0]=1;
    for (i=1; i<=100; i++)
        for (j=0; j<=i; j++)
        {
            C[i][j]=C[i-1][j];
            if (j!=0) C[i][j]=(C[i][j]+C[i-1][j-1])%MOD;
        }
    while (cin>>n)
    {
        for (i=1; i<=n; i++) scanf("%d",&a[i]);
        for (i=1; i<=n+1; i++) dp[i][i-1]=1;
        for (i=0; i<n; i++)
            for (j=1; j<=n-i; j++)
            {
                dp[j][j+i]=dp[j+1][j+i];
                if (i!=0) dp[j][j+i]=(dp[j][j+i]+dp[j][j+i-1])%MOD;
                for (k=j+1; k<j+i; k++)
                    if (a[k-1]==a[k+1])
                        dp[j][i+j]=(dp[j][i+j]+dp[j][k-1]*dp[k+1][i+j]%MOD*C[i][k-j])%MOD;
            }
        cout<<(dp[1][n])%MOD<<endl;
        for (i=1; i<=n+1; i++)
            for (j=0; j<=n+1; j++) dp[i][j]=0;
    }
    return 0;
}

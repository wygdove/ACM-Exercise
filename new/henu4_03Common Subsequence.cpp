//#pragma comment(linker, "/STACK:1024000000,1024000000")
//#include<iostream>
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
//#define mems0(s)  memset(s,0,sizeof(s))
//#define mems_1(s) memset(s,-1,sizeof(s))
//#define memsINF(s) memset(s,INF,sizeof(s))
//#define memsch(ch) memset(ch,'\0',sizeof(ch))
//
//#define lson l,m,rt<<1
//#define rson m+1,r,rt<<1|1
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
//const double eps = 1e-9;
//const double pi=acos(-1.0);
//#define INF 0x3f3f3f3f
//#define MINN -0x3f3f3f3f
//#define MAXN 0x3f3f3f3f
//#define MOD 10007
//#define NUM 10008
//
//
//int ls,lt;
//char s[NUM],t[NUM];
//int dp[NUM][NUM];
/////最长公共子序列
//int LCS()
//{
//    for(int i=0;i<ls;i++)
//    {
//        for(int j=0;j<lt;j++)
//        {
//            if(s[i]==t[j])
//                dp[i+1][j+1]=dp[i][j]+1;
//            else
//                dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
//        }
//    }
//    return dp[ls][lt];
//}
////ans=dp[ls][lt];
//
//
//int main()
//{
//    cin.sync_with_stdio(false);
//    cout.sync_with_stdio(false);
//
//    freopen("new.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    char c;
//    while(scanf("%s%c%s",&s,&c,&t)!=EOF)
//    {
////printf("s=%s\tt=%s\n",s,t);
//        mems0(dp);
//        ls=strlen(s);
//        lt=strlen(t);
//        printf("%d\n",LCS());
//
//    }
//
//    fclose(stdin);
//    fclose(stdout);
//	return 0;
//}

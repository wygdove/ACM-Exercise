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
//#define NUM 508
//
//char ca[NUM];
//char cb[NUM];
//char cc[NUM];
//int la,lb,lc;
//
//int dp[NUM][NUM];
//
//
/////最长公共子序列
//int LCS(char sa[],char sb[],int lsa,int lsb)
//{
//    mems0(dp);
//    for(int i=0;i<lsa;i++)
//    {
//        for(int j=0;j<lsb;j++)
//        {
//            if(sa[i]==sb[j])
//                dp[i+1][j+1]=dp[i][j]+1;
//            else
//                dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
//        }
//    }
//    return dp[lsa][lsb];
//}
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
//    int T;
//    char c;
//    bool bl;
//    scanf("%d",&T);
//    for(int cnt=1;cnt<=T;cnt++)
//    {
//        memsch(ca);memsch(cb);memsch(cc);
//        bl=true;
//
//        scanf("%c%s%c%s%c%s",&c,&ca,&c,&cb,&c,&cc);
//printf("%s\t%s\t%s\n",ca,cb,cc);
//        la=strlen(ca);lb=strlen(cb);lc=strlen(cc);
//
//        if(LCS(ca,cc,la,lc)==la&&LCS(cb,cc,lb,lc)==lb)bl=true;
////
////        int i=0,j=0,k=0;
////        for(;k<lc;)
////        {
////printf("i=%d j=%d k=%d\n",i,j,k);
////            if(cc[k]==ca[i])
////            {
////                if(i<la-1)i++;
////                k++;
////            }
////            else if(cc[k]==cb[j])
////            {
////                if(j<lb-1)j++;
////                k++;
////            }
////            else
////            {
////                bl=false;
////                break;
////            }
////        }
//
//        printf("Data set %d: ",cnt);
//        if(bl)printf("yes\n");
//        else printf("no\n");
//    }
//
//    fclose(stdin);
//    fclose(stdout);
//	return 0;
//}

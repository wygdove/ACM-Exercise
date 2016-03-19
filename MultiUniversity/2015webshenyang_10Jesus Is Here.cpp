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
//#define MOD 530600414
//#define NUM 201315
//
//vector<int> ve[NUM];
//int ans[NUM];
//
//void doit()
//{
//    ve[5].push_back(8);
//    ve[5].push_back(0);
//    ve[5].push_back(5);
//    ans[5]=5;
//
//    ve[6].push_back(13);
//    ve[6].push_back(2);
//    ve[6].push_back(5);
//    ve[6].push_back(10);
//    ans[6]=16;
//
//    for(int i=7;i<NUM;i++)
//    {
//        ve[i].push_back(ve[i-2][0]+ve[i-1][0]);
//        for(int j=1;j<ve[i-2].size();j++)
//            ve[i].push_back(ve[i-2][j]);
//        for(int j=1;j<ve[i-1].size();j++)
//            ve[i].push_back(ve[i-1][j]+ve[i-2][0]);
//        for(int j=0;j<ve[i].size();j++)
//        {
//            for(int k=1;k<j;k++)
//            {
//                ans[i]+=ve[i][j]-ve[i][k];
//                ans[i]%=MOD;
//            }
//        }
////printf("%d,",ans[i]);
////printf("ans[%d]=%d\n",i,ans[i]);
////printf("%d\t\t",ve[i][0]);
////for(int j=1;j<ve[i].size();j++)printf("%d ",ve[i][j]);printf("\n");
//    }
//
////for(int i=5;i<10;i++){for(int j=0;j<ve[i].size();j++)printf("%d ",ve[i][j]);printf("\n");}
//printf("\n");
//}
//
//int main()
//{
//    cin.sync_with_stdio(false);
//    cout.sync_with_stdio(false);
//
//    freopen("mu.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//
//    mems0(ans);
//    doit();
//
//    int T;
//    int n;
//    scanf("%d",&T);
//    for(int cnt=1;cnt<=T;cnt++)
//    {
//        scanf("%d",&n);
//if(n>NUM)continue;
//        printf("Case #%d: %d\n",cnt,ans[n]);
//    }
//
//    fclose(stdin);
//    fclose(stdout);
//	return 0;
//}

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
//****************************************************************/
//
//
//const double eps = 1e-9;
//const double pi=acos(-1.0);
//#define INF 0x3f3f3f3f
//#define MINN -0x3f3f3f3f
//#define MAXN 0x3f3f3f3f
//#define MOD 10007
//#define NUM 150008
//
//struct Sample
//{
//    int index;
//    char name[202];
//    int value;
//    bool operator <(const Sample &r)const
//    {
//        return r.value>=value;
//    }
//}f[NUM];
//priority_queue<Sample> que;
//vector<Sample> ve;
//bool vis[NUM];
//
//
//int main()
//{
//    cin.sync_with_stdio(false);
//    cout.sync_with_stdio(false);
//
//    freopen("hdu.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int T;
//    int k,m,q;
//    int t,p;
//    scanf("%d",&T);
//    while(T--)
//    {
//        mems0(vis);
//        ve.clear();
//
//        scanf("%d%d%d",&k,&m,&q);
//        for(int i=1;i<=k;i++)
//        {
//            scanf("%s%d",&f[i].name,&f[i].value);
//            f[i].index=i;
//        }
//        for(int i=0;i<m;i++)
//        {
//            while(!que.empty())que.pop();
//
//            scanf("%d%d",&t,&p);
//            for(int i=1;i<=t;i++)que.push(f[i]);
//            for(int cnt=0;cnt<p;)
//            {
//                if(que.empty())continue;
//                f[0]=que.top();que.pop();
//                if(!vis[f[0].index])
//                {
//                    ve.push_back(f[0]);
//                    vis[f[0].index]=true;
//                    cnt++;
//                }
//            }
////for(int i=1;i<=k;i++)printf("%s\t%d\n",f[i].name,vis[f[i].index]);
//        }
////for(int i=0;i<ve.size();i++)printf("%d-th : %s %d\n",i+1,ve[i].name,ve[i].value);
//        for(int i=0;i<q;i++)
//        {
//            scanf("%d",&t);
//            printf("%s",ve[t-1].name);
//            if(i!=q-1)printf(" ");
//        }
//        printf("\n");
//    }
//
//    fclose(stdin);
//    fclose(stdout);
//    return 0;
//}

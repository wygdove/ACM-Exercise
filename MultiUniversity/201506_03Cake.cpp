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
//#define NUM 12
//
//set<int> st[NUM];
//set<int>::iterator it;
//set<int> stn;
//set<int>::iterator itn1,itn2;
//
//void find(int i,int x)
//{
//    while(!stn.empty())
//    {
//        itn1=stn.begin();itn2=stn.end();itn2--;
//    }
//}
//
//int main()
//{
//    freopen("mu.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int T;
//    int n,m;
//    int sum,x;
//    bool bl;
//    scanf("%d",&T);
//    while(T--)
//    {
//        for(int i=0;i<NUM;i++) st[i].clear();
//        bl=false;
//        sum=0;
//
//        scanf("%d%d",&n,&m);
//        sum=n*(n+1)/2;
//        x=sum/m;
//printf("sum=%d x=%d\n",sum,x);
//        if(sum%m!=0) bl=false;
//        else bl=true;
//
//        if(bl&&m!=1)
//        {
//            stn.clear();
//            for(int i=1;i<=n;i++)stn.insert(i);
//            for(int i=0;i<m;i++)
//            {
//                find(i,x);
//            }
//        }
//
//        if(!bl) printf("NO\n");
//        else
//        {
//            printf("YES\n");
//            if(m==1)
//            {
//                printf("%d",n);for(int i=1;i<=n;i++)printf(" %d",i);printf("\n");
//                continue;
//            }
//            for(int i=0;i<m;i++)
//            {
//                printf("%d",st[i].size());
//                for(it=st[i].begin();it!=st[i].end();it++)
//                    printf(" %d",*it);
//                printf("\n");
//            }
//        }
//    }
//
//	return 0;
//}

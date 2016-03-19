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
////typedef __int64 INT;
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
//#define NUM 1002
//
//struct Sample
//{
//    char sn[25];
//    int sg;
//}s[NUM];
//int a[12];
//
//int cmp( const void *a , const void *b )
//{
//	struct Sample *c = (Sample *)a;
//	struct Sample *d = (Sample *)b;
//	if(c->sg != d->sg)
//		return d->sg - c->sg;
//	else
//		return d->sn - c->sn;
//}
//
//int main()
//{
//    freopen("hdu.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int N,M,G;
//    int gn,temp;
//    int cnt;
//    while(scanf("%d",&N) && N)
//    {
//        memset(s,0,sizeof(s));
//        memset(a,0,sizeof(a));
//
//        scanf("%d%d",&M,&G);
//        for(int i=1;i<=M;i++)
//            scanf("%d",&a[i]);
//        cnt=0;
//        for(int i=0;i<N;i++)
//        {
////            getchar();
//            scanf("%s%d",&s[i].sn,&gn);
//            while(gn--)
//            {
//                scanf("%d",&temp);
//                s[i].sg+=a[temp];
//            }
//            if(s[i].sg>=G)cnt++;
//        }
//
//        qsort(s,N,sizeof(s[0]),cmp);
//
//        printf("%d\n",cnt);
//        for(int i=0;i<cnt;i++)
//            printf("%s %d\n",s[i].sn,s[i].sg);
//
//    }
//
//
//	return 0;
//}

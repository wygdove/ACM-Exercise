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
//#define NUM 108
//
//int a[NUM];
//
//bool JudgePrime(int n)
//{
//    int i;
//    bool flag=true;
//    for(i=2;i<=(int)sqrt((double)n);i++)
//    if(n%i==0){flag=false;break;}
//    if(flag==1)return true;
//    else return false;
//}
//
//int cmp(const void* a,const void* b)
//{
//	return *(int*)a - *(int*)b;
//}
//
//int main()
//{
//    freopen("bc.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int T;
//    int n;
////int n=2000000000;printf("%d\n",n);
//    long temp;
//    int ans;
//    scanf("%d",&T);
//    while(T--)
//    {
//        scanf("%d",&n);
//        for(int i=0;i<n;i++)scanf("%d",&a[i]);
//        qsort(a,n,sizeof(a[0]),cmp);
//        temp=(long)a[0];
//        ans=-1;
//        for(int i=0;i<n;i++)
//        {
//            if(a[i]==0) continue;
//            if(i!=0)temp*=(long)a[i];
//            for(int j=4;j<=temp;j++)
//            {
//                if(temp%j==0 && !JudgePrime(j))
//                {
//                    if(ans==-1)ans=j;
//                    else ans=ans<j?ans:j;
//                    break;
//                }
//            }
////printf("temp=%ld ans=%d\n",temp,ans);
////            if(ans!=-1)break;
//        }
//        printf("%d\n",ans);
//    }
//
//	return 0;
//}

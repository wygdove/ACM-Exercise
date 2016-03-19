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
//    Result:
//****************************************************************/
//
//#define NUM 5000
//#define MOD 10007
//
//int v[NUM+1];
//int f[255555];
//
//int main()
//{
//    freopen("new.in","r",stdin);
//
//    int n=0;
//    int a,b;
//    int sum;
//    while(scanf("%d",&n) && n!=-1)
//    {
//        int l=0;
//        sum=0;
//        memset(v,0,sizeof(v));
//        memset(f,0,sizeof(f));
//        while(n--)
//        {
//            scanf("%d %d",&a,&b);
//            while(b--)
//            {
//                v[l++]=a;
//                sum+=a;
//            }
//        }
//        for(int i=0;i<l;i++)
//        {
//            for(int j=sum/2;j>=v[i];j--)
//            {
//                f[j]=max(f[j],f[j-v[i]]+v[i]);
//            }
//        }
//        printf("%d %d\n",sum-f[sum/2],f[sum/2]);
//    }
//	return 0;
//}
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

#define NUM 5000
#define MOD 10007

int v[5005];
int f[255555];

int main()
{
    freopen("new.in","r",stdin);

    int n,i,j,a,b,l,sum;
    while(~scanf("%d",&n),n>0)
    {
        memset(v,0,sizeof(v));
        memset(f,0,sizeof(f));
        l = 0;
        sum = 0;
        for(i = 0;i<n;i++)
        {
            scanf("%d%d",&a,&b);
            while(b--)
            {
                v[l++] = a;
                sum+=a;
            }
        }
        for(i = 0;i<l;i++)
        {
            for(j = sum/2;j>=v[i];j--)
            {
                f[j] = max(f[j],f[j-v[i]]+v[i]);
            }
        }
        printf("%d %d\n",sum-f[sum/2],f[sum/2]);
    }

    return 0;
}

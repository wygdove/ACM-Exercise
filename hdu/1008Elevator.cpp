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
    Problem: hdu1008Elevator
    Ordering: 简单模拟
    Thought: 上一层楼6秒，下一层楼4秒，停留5秒，注意有相邻两个楼层相同的情况,若3层有2个人，要停10秒
    Result:
****************************************************************/

int main()
{
    freopen("hdu.in","r",stdin);

    int n=0;
    int ans;
    int a,b;
    while(scanf("%d",&n) && n)
    {
        ans=0;
        for(int i=0,a=0;i<n;i++)
        {
            scanf("%d",&b);
            if(a<=b)
                ans+=5+6*(b-a);
            else
                ans+=5+4*(a-b);
            a=b;
        }
        printf("%d\n",ans);
    }

	return 0;
}
//        memset(a,0,sizeof(a));
//
//        for(int i=0;i<n;i++)
//            scanf("%d",&a[i]);
//
//        if(n==1)
//        {
//            printf("%d\n",a[0]*6+5);
//            continue;
//        }
//
//        sort(a,a+n);
//        //qsort(a,n,sizeof(a[0]),cmp);
////for(int i=0;i<n;i++)cout<<"a["<<i<<"]="<<a[i]<<endl;
//        ans=0;
//        ans+=a[n-1]*6;
//        ans+=5;
//        for(int i=n-1;i>0;i--)
//        {//cout<<"ans="<<ans<<endl;
//            //ans+=5;
//            if(a[i]==a[i-1])
//            {
//                ans+=5;
//                continue;
//            }
//            ans+=4*(a[i]-a[i-1]);
////cout<<"a[i]-a[i-1]="<<a[i]-a[i-1]<<endl;
//            ans+=5;
//        }

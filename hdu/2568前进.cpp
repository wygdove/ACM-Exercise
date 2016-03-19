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

typedef long long LL;
typedef long double real;
typedef vector<int> VI;

#define NUM 100



int main()
{
    freopen("hdu.in","r",stdin);

    int C;
    //LL n; //WA
    __int64 n;
    int ans;
    scanf("%d",&C);
    while(C--)
    {
        //scanf("%lld",&n);
        scanf("%I64d",&n);

        ans=0;
        while(n)
        {
            if(n%2==0)
            {
                n/=2;
            }
            else
            {
                n--;
                ans++;
                n/=2;//Ã·–ß¬ 
            }
        }
        printf("%d\n",ans);

    }

	return 0;
}



//    int C;
//    LL n;
//    LL ans;
//    scanf("%d",&C);
//    while(C--)
//    {
//        scanf("%lld",&n);
//
//        ans=0;
//        while(n)
//        {
//            if(n%2==0)
//            {
//                n/=2;
//            }
//            else
//            {
//                n--;
//                ans++;
//            }
//        }
//        printf("%lld\n",ans);
//    }

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

#define NUM 10000

struct group
{
    int num;
    int st;
    int et;
};

group xs[NUM+1];
group xe[NUM+1];


//按照data的值从小到大将结构体排序
int cmp( const void *a ,const void *b)
{
	return (*(group *)a).st > (*(group *)b).st ? 1 : -1;
}
int cmp2( const void *a ,const void *b)
{
	return (*(group *)a).et > (*(group *)b).et ? 1 : -1;
}

int main()
{
    freopen("hdu.in","r",stdin);

    int T;
    int n;
    int i,j;
    int ans;
    int temp;
    int sh,sm,eh,em;
    int max;
    scanf("%d",&T);
    while(T--)
    {
        memset(xs,0,sizeof(xs));
        memset(xe,0,sizeof(xe));
        ans=0;

        scanf("%d",&n);

        if(n==1)
        {
            scanf("%d %d:%d %d:%d",&temp,&sh,&sm,&eh,&em);
            printf("%d\n",temp);
            continue;
        }

        for(i=0;i<n;i++)
        {
            scanf("%d %d:%d %d:%d",&temp,&sh,&sm,&eh,&em);
            xs[i].num=temp;
            xe[i].num=temp;
            xs[i].st=sh*60+sm;
            xe[i].et=eh*60+em;
        }

        qsort(xs,n,sizeof(xs[0]),cmp);
        qsort(xe,n,sizeof(xe[0]),cmp2);

        ans=0;
        max=0;
        i=0;
        j=0;
        while(i<n)
        {
            if(xs[i].st<xe[j].et)
            {
                ans+=xs[i].num;
                i++;
                max=ans>max?ans:max;
            }
            else
            {
                ans-=xe[i].num;
                j++;
                max=ans>max?ans:max;
            }
//cout<<"max="<<max<<endl;
        }
        printf("%d\n",max);
    }
	return 0;
}


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
//typedef long long LL;
//typedef long double real;
//typedef vector<int> VI;
//
//#define NUM 10000
//
//struct group
//{
//    int num;
//    int st;
//    int et;
//}x[NUM+1];
//
////按照sh从小到大排序，当sh相等时按照sm从小到大排序
//
//int cmp( const void *a , const void *b )
//{
//	struct group *c = (group *)a;
//	struct group *d = (group *)b;
//
//		return c->st - d->st;
//}
//
//int main()
//{
//    freopen("hdu.in","r",stdin);
//
//    int T;
//    int n;
//    int i;
//    int ans;
//    int temp;
//    int sh,sm,eh,em;
//    scanf("%d",&T);
//    while(T--)
//    {
//        memset(x,0,sizeof(x));
//        ans=0;
//
//        scanf("%d",&n);
//
//        for(i=0;i<n;i++)
//        {
//            scanf("%d %d:%d %d:%d",&x[i].num,&sh,&sm,&eh,&em);
//            x[i].st=sh*100+sm;
//            x[i].et=eh*100+em;
//        }
//        ans=x[0].num;
//        for(i=0;i<n;i++)
//        {
//            if(x[i+1].st<x[i].et)
//                temp=x[i+1].num;
//            else if(ans<x[i+1].num)
//                ans=x[i+1].num;
//            ans+=temp;
//        }
//        printf("%d\n",ans);
//    }
//	return 0;
//}



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
//typedef long long LL;
//typedef long double real;
//typedef vector<int> VI;
//
//#define NUM 10000
//
//struct group
//{
//    int num;
//    int sh;
//    int sm;
//    int eh;
//    int em;
//}x[NUM+1];
//
////按照sh从小到大排序，当sh相等时按照sm从小到大排序
//
//int cmp( const void *a , const void *b )
//{
//	struct group *c = (group *)a;
//	struct group *d = (group *)b;
//	if(c->sh != d->sh)
//		return c->sh - d->sh;
//	else
//		return c->sm - d->sm;
//}
//
//int main()
//{
//    freopen("hdu.in","r",stdin);
//
//    int T;
//    int n;
//    int i;
//    int ans;
//    int temp;
//    scanf("%d",&T);
//    while(T--)
//    {
//        memset(x,0,sizeof(x));
//        ans=0;
//
//        scanf("%d",&n);
//        for(i=0;i<n;i++)
//        {
//            scanf("%d %d:%d %d:%d",&x[i].num,&x[i].sh,&x[i].sm,&x[i].eh,&x[i].em);
//        }
// //for(i=0;i<n;i++)
////printf("x[%d]. num=%d sh=%d sm=%d eh=%d em=%d\n",i,x[i].num,x[i].sh,x[i].sm,x[i].eh,x[i].em);
//
//        //sort(x,x+n,cmpme);
//        qsort(x,n,sizeof(x[0]),cmp);
//
//        ans=x[0].num;
//        for(i=0;i<n;i++)
//        {
//            if(x[i+1].sh<x[i].eh || (x[i+1].sh==x[i].eh && x[i+1].sm<x[i].em))
//                temp=x[i+1].num;
//            else if(ans<x[i+1].num)
//                ans=x[i+1].num;
//            ans+=temp;
//        }
//        printf("%d\n",ans);
//    }
//	return 0;
//}

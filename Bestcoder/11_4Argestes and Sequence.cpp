//#include<iostream>
//#include<fstream>
//#include<memory.h>
//#include<math.h>
//#include<algorithm>
//#include<string>
//#include<map>
//#include<set>
//#include<stack>
//#include<queue>
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
//#define NUM 100000
//
//int a[NUM+1];
//
//int main()
//{
//    freopen("in.in","r",stdin);
//
//    int T;
//    int n,m;
//    char c;
//    int x,y;
//    int l,r,d,p;
//    int ans;
//    int i;
//    scanf("%d",&T);
//    while(T--)
//    {
//        memset(a,0,sizeof(a));
//
//        scanf("%d%d",&n,&m);
//        for(i=1;i<=n;i++)
//            scanf("%ld",&a[i]);
//        while(m--)
//        {
//            scanf("%c",&c);
//            if(c=='S')
//            {
//                scanf("%d%d",&x,&y);
//                a[x]=y;
//            }
//            if(c=='Q')
//            {
//                ans=0;
//                scanf("%d%d%d%d",&l,&r,&d,&p);
//                for(i=l;i<=r;i++)
//                {
//                    if(l==1)
//                    {
//                        if(a[i]%10==p)
//                            ans++;
//                    }
//                    else
//                    {
//                        if((a[i]%pow(10,l))-(a[i]%pow(10,l-2))==p)
//                            ans++;
//cout<<(a[i]%pow(10,l))-(a[i]%pow(10,l-2))<<endll;
//                    }
//                }
//            }
//        }
//
//    }
//
//    cout<<  <<endl;
//    return 0;
//}

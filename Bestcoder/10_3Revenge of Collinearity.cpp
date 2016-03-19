//#include<iostream>
//#include<memory.h>
//#include<math.h>
//#include<algorithm>
//using namespace std;
//
//struct Point
//{
//    long x;
//    long y;
//}p[1010];
//
//long gcd(long a,long b)
//{
//    long t;
//    while(b)
//    {
//        t=a%b;
//        a=b;
//        b=t;
//    }
//    return a;
//}
//
//int main()
//{
//    int T;
//    int N;
//    long x1,x2,y1,y2;
//    int ans;
//    int i;
//    cin>>T;
//    while(T--)
//    {
//        memset(p,0,sizeof(p));
//
//        cin>>N;
//        for(i=0;i<N;i++)
//            cin>>p[i].x>>p[i].y;
//
//        ans=0;
//
//        for(i=0;i<N-2;i++)
//        {
//            x1=abs(p[i].x-p[i+1].x);
//            y1=abs(p[i].y-p[i+1].y);
//            x2=abs(p[i+1].x-p[i+2].x);
//            y2=abs(p[i+1].y-p[i+2].y);
//
//            if(x1==0 || x2==0 || y1==0 || y2==0)
//                continue;
//
//            if(gcd(x1,y1)==gcd(x2,y2))
//            {
//                ans++;
//            }
//        }
//
//        cout<<ans<<endl;
//    }
//    return 0;
//}

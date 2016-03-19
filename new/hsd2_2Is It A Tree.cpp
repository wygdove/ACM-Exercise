////#include<iostream>
////#include<memory.h>
////#include<fstream>
////#include<string>
////#include<algorithm>
////#include<math.h>
////#include<stack>
////#include<queue>
////#include<set>
////#include<map>
////#include<vector>
////#include<stdio.h>
////#include<stdlib.h>
////#include<cstdio>
////#include<cstdlib>
////#include<cstring>
////#include<cmath>
////
////using namespace std;
////
////typedef __int64 INT;
////typedef long long LL;
////typedef long double real;
////typedef vector<int> VI;
////
////#define NUM 100000
////#define MOD 10007
////
/////**************************************************************
////    Problem:
////    Ordering:
////    Thought:
////    Result:
////****************************************************************/
////
////
////int s[NUM],e[NUM];
////int a[NUM];
////
////int main()
////{
////    freopen("new.in","r",stdin);
////
////    int m,n;
////    int cnt=1;
////    int num=0;
////    int num2=0;
////    bool bl;
////    bool bl2;
////    memset(s,0,sizeof(s));
////    memset(e,0,sizeof(e));
////    memset(a,0,sizeof(a));
////    while(cin>>m>>n)
////    {
////        if(m==-1 && n==-1)
////        {
////            break;
////        }
////        if(m==0 && n==0)//!!!少判断了是否只有一个根结点
////        {
//////for(int i=0;i<num*2;i++)cout<<"a["<<i<<"]="<<a[i]<<endl;
////            bl=false;
////            bl2=true;
////            int root=0;
////            for(int i=0;i<num;i++)
////            {
////                if(s[a[i]]==0)
////                {
////                    bl=true;
////                    root=a[i];
////                    if(root!=a[i])
////                    {
////                        bl=false;
////                        break;
////                    }
////                }
////                //if(in>1)//a[i]允许重复了
////                    //bl=false;
////            }
////            for(int i=0;i<num*2;i++)
////            {
////                if(e[a[i]]>1)
////                    bl2=false;
////            }
//////cout<<"bl="<<bl<<" bl2="<<bl2<<endl;
////
////            if(num==1)
////                printf("Case %d is a tree.\n",cnt);
////            else
////            {
////                if(bl && bl2)
////                    printf("Case %d is a tree.\n",cnt);
////                else
////                    printf("Case %d is not a tree.\n",cnt);
////            }
////
////            num=0;
////            num2=0;
////            cnt++;
////            memset(s,0,sizeof(s));
////            memset(e,0,sizeof(e));
////            memset(a,0,sizeof(a));
////            continue;
////        }
////        a[num2]=m;
////        a[num2+1]=n;
////        num2+=2;
////        num++;
////        s[m]++;
////        e[n]++;
//////cout<<"num="<<num<<endl;
//////cout<<"s["<<m<<"]="<<s[m]<<" e["<<n<<"]="<<e[n]<<endl;
////
////    }
////
////	return 0;
////}
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
//#define NUM 100000
//#define MOD 10007
//
///**************************************************************
//    Problem:
//    Ordering:
//    Thought:
//    Result: Wrong Answer
//****************************************************************/
//
//
//int s[NUM],e[NUM];
//int a[NUM];
//
//int main()
//{
//    freopen("new.in","r",stdin);
//
//    int m,n;
//    int cnt=1;
//    int num=0;
//    int num2=0;
//    bool bl;
//    bool bl2;
//    memset(s,0,sizeof(s));
//    memset(e,0,sizeof(e));
//    memset(a,0,sizeof(a));
//    while(cin>>m>>n)
//    {
//        if(m==-1 && n==-1)
//        {
//            break;
//        }
//        if(m==0 && n==0)//!!!少判断了是否只有一个根结点
//        {
//            bl=false;
//            bl2=true;
//            int root=0;
//            for(int i=0;i<num;i++)
//            {
//                if(s[a[i]]==0)
//                {
//                    bl=true;
//                    root=a[i];
//                    if(root!=a[i])
//                    {
//                        bl=false;
//                        break;
//                    }
//                }
//
//            }
//            for(int i=0;i<num*2;i++)
//            {
//                if(e[a[i]]>1)
//                    bl2=false;
//            }
//
//            if(num==1)
//                printf("Case %d is a tree.\n",cnt);
//            else
//            {
//                if(bl && bl2)
//                    printf("Case %d is a tree.\n",cnt);
//                else
//                    printf("Case %d is not a tree.\n",cnt);
//            }
//
//            num=0;
//            num2=0;
//            cnt++;
//            memset(s,0,sizeof(s));
//            memset(e,0,sizeof(e));
//            memset(a,0,sizeof(a));
//            continue;
//        }
//        a[num2]=m;
//        a[num2+1]=n;
//        num2+=2;
//        num++;
//        s[m]++;
//        e[n]++;
//    }
//
//	return 0;
//}

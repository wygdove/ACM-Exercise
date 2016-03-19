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
//#define NUM 100
//
//int c1[31];
//int c2[31];
//int a[3]={0,1,2};
//
//int main()//不能做简单的母函数，铺设分横竖的
//{
//    freopen("hdu.in","r",stdin);
//
//    int T;
//    int n;
//    int i,j,k;
//
//
//        for(i=0;i<=30;i++)
//        {
//            c1[i]=1;
//            c2[i]=0;
//        }
//        for(i=1;i<=2;i++)
//        {
//            for(j=0;j<=30;j++)
//            {
//                for(k=0;k+j<=30;k+=a[i])
//                {
//                    c2[j+k]+=c1[j];
//                }
//            }
//            for(j=0;j<=30;j++)
//            {
//                c1[j]=c2[j];
//                c2[j]=0;
//            }
//        }
//
//    scanf("%d",&T);
//    while(T--)
//    {
//        scanf("%d",&n);
//        printf("%d\n",c1[n]);
//        //cout<<c1[n]<<endl;
//    }
//	return 0;
//}

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
//#define NUM 102
//
//#define MAXSIZE 102
//
//char a[NUM][NUM];
//char b[NUM][NUM];
//
//void Div(char str1[NUM], char str2[NUM], char str3[NUM]){
//int i1, i2, i, j, jj, tag, carry, cf, c[MAXSIZE];
//int len1 = strlen(str1), len2 = strlen(str2), lend;
//char d[MAXSIZE];
//memset(c, 0, sizeof(c));
//memcpy(d, str1, len2);
//lend = len2; j = 0;
//for( i1=len2-1; i1 < len1; ++i1 ){
//if( lend < len2 ){
//d[lend] = str1[i1+1]; c[j] = 0;
//++j; ++lend;
//}
//else if( lend == len2 ){
//jj = 1;
//for( i=0; i < lend; ++i ){
//if( d[i] > str2[i] ) break;
//else if( d[i] < str2[i] ){
//jj = 0; break;
//}
//}
//if( jj == 0 ){
//d[lend] = str1[i1+1]; c[j] = 0;
//++j; ++lend;
//continue;
//}
//}
//if( jj==1 || lend > len2 ){
//cf = jj=0;
//while( d[jj] <= '0' && jj < lend ) ++jj;
//if( lend-jj > len2 ) cf = 1;
//else if( lend-jj < len2 ) cf = 0;
//else{
//i2 = 0; cf = 1;
//for( i=jj; i < lend; ++i ){
//if( d[i] < str2[i2] ){
//cf = 0; break;
//}
//else if( d[i] > str2[i2] ){
//break;
//}
//++i2;
//}
//}//else
//while( cf ){
//i2 = len2-1; cf = 0;
//for( i=lend-1; i >= lend-len2; --i ){
//d[i] = d[i]-str2[i2]+'0';
//if( d[i] < '0' ){
//d[i] = d[i]+10; carry = 1;
//--d[i-1];
//}
//else carry = 0;
//--i2;
//}
//++c[j]; jj=0;
//while( d[jj] <= '0' && jj < lend ) ++jj;
//if( lend-jj > len2 ) cf = 1;
//else if( lend-jj < len2 ) cf = 0;
//else{
//i2 = 0; cf = 1;
//for( i=jj; i < lend; ++i ){
//if( d[i] < str2[i2] ){
//cf = 0; break;
//}
//else if( d[i] > str2[i2] ){
//break;
//}
//++i2;
//}
//}//else
//}//while
//jj = 0;
//while( d[jj] <= '0' && jj < lend ) ++jj;
//for( i=0;i < lend-jj; ++i ) d[i] = d[i+jj];
//d[i] = str1[i1+1]; lend = i+1;
//++j;
//}//else
//}//for
//i = tag = 0;
//while( c[i] == 0 ) ++i;
//for( ; i < j; ++i, ++tag ) str3[tag] = c[i]+'0';
//str3[tag] = '\0';
//}
//
//int main()
//{
//    freopen("bc.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int T;
//    int n;
//    bool ans;
//    string sa,sb;
//    scanf("%d",&T);
//    while(T--)
//    {
//        memset(a,'\0',sizeof(a));
//        memset(b,'\0',sizeof(b));
//        ans=true;;
//
//        scanf("%d",&n);
//        for(int i=0;i<n;i++)scanf("%s",&a[i]);
//        if(n==1){printf("Yes\n");continue;}
//        for(int i=0;i<n-1;i++)
//        {
//            Div(a[i],a[i+1],b[i]);
//            if(i!=0)
//            {
//                sa=b[i];sb=b[i-1];
//                if(sa!=sb)
//                {
//                    ans=false;
//                    break;
//                }
//            }
//        }
////for(int i=0;i<n-1;i++)printf("%s ",b[i]);printf("\n");
////        for(int i=0;i<n-2;i++)
////        {
////            sa=b[i];sb=b[i+1];
////            if(sa!=sb)
////            {
////                ans=false;
////                break;
////            }
////        }
//        if(ans)printf("Yes\n");
//        else printf("No\n");
//    }
//
//	return 0;
//}

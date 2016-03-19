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
//struct Node {
//    string s1,s2;
//} s[100];
//string s3;
//
//int main()
//{
//    freopen("new.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int l,n;
//    while(scanf("%d%d",&l,&n)!=EOF) {
//        for(int i=0; i<l; i++)
//            cin>>s[i].s1>>s[i].s2;
//        while(n--) {
//            cin>>s3;
//            int len=s3.length();
//            bool bl=false;
//            for(int i=0; i<l; i++) {
//                if(s3==s[i].s1)
//                {
//                    cout<<s[i].s2<<endl;
//                    bl=true;
//                    break;
//                }
//            }
//            if(bl) continue;
//            if(s3[len-1]=='y') {
//                char c=s3[len-2];
//                if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
//                    s3+="s";
//                else
//                {
//                    s3[len-1]='i';
//                    s3+="es";
//                }
//                cout<<s3<<endl;
//                continue;
//            }
//            else
//            {
//                char c1,c2;
//                c1=s3[len-1];c2=s3[len-2];
//                if(c1=='o' || c1=='s' || c1=='x' ||
//                   (c1=='h'&& (c2=='s' || c2=='c') ))
//                   {
//                        s3+="es";
//                        cout<<s3<<endl;
//                        continue;
//                    }
//            }
//            s3+="s";
//            cout<<s3<<endl;
//        }
//
//    }
//
//	return 0;
//}

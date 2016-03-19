//#pragma comment(linker, "/STACK:1024000000,1024000000")
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
//#define mems0(s)  memset(s,0,sizeof(s))
//#define mems_1(s) memset(s,-1,sizeof(s))
//#define memsINF(s) memset(s,INF,sizeof(s))
//#define memsch(ch) memset(ch,'\0',sizeof(ch))
//
//#define lson l,m,rt<<1
//#define rson m+1,r,rt<<1|1
//
//
///**************************************************************
//    Problem:
//    Ordering:
//    Thought:
//    Result:
//    Author: wygdove
//****************************************************************/
//
//
//const double eps = 1e-9;
//const double pi=acos(-1.0);
//#define INF 0x3f3f3f3f
//#define MINN -0x3f3f3f3f
//#define MAXN 0x3f3f3f3f
//#define MOD 10007
//#define NUM 108
//
//string s[NUM];
//bool bl[NUM];
//
//int main()
//{
//    cin.sync_with_stdio(false);
//    cout.sync_with_stdio(false);
//
//    freopen("new.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int n;
//    int cnt,ans;
//    while(cin>>n)
//    {
//        ans=0;
//        mems0(bl);
//
//        for(int i=0;i<n;i++)
//        {
//            s[i]="";
//            cin>>s[i];
//            transform(s[i].begin(),s[i].end(),s[i].begin(),::tolower);
////cout<<s[i]<<endl;
//        }
//        for(int i=0;i<n;i++)
//        {
//            for(int j=i+1;j<n;j++)
//            {
//                cnt=0;
//                int len=s[i].length();
//                if(len==s[j].length())
//                {
//                    for(int k=0;k<len;k++)
//                    {
//                        if(s[i][k]==s[j][k])cnt++;
//                    }
//                    if(cnt>2)
//                    {
//                        bl[i]=1;bl[j]=1;
//                    }
//                }
//            }
//        }
//        for(int i=0;i<n;i++)if(bl[i])ans++;
//        printf("%d\n",ans);
//    }
//
//    fclose(stdin);
//    fclose(stdout);
//	return 0;
//}

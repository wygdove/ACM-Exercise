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
//struct Sample
//{
//    int hp,atk,def;
//}w,b;
//
//int main()
//{
//    cin.sync_with_stdio(false);
//    cout.sync_with_stdio(false);
//
//    freopen("new.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//
//    char c;
//    bool bl;
//    int watk,batk,wcnt,bcnt,wlhp,blhp;
//    while(cin>>c)
//    {
//        cin>>w.hp>>w.atk>>w.def;
//        cin>>b.hp>>b.atk>>b.def;
//
//        watk=w.atk-b.def;
//        batk=b.atk-w.def;
//        if(batk<=0) wlhp=INF;
//        else wlhp=w.hp/batk+(w.hp%batk==0?0:1);
//        if(watk<=0) blhp=INF;
//        else  blhp=b.hp/watk+(b.hp%watk==0?0:1);
//
////cout<<c<<" wlhp="<<wlhp<<" blhp="<<blhp<<endl;
//
//        if(c=='W')
//        {
//            if(blhp!=INF&&wlhp>=blhp)bl=1;
//            else bl=0;
//        }
//        else
//        {
//            if(blhp!=INF&&wlhp>blhp)bl=1;
//            else bl=0;
//        }
//
//        if(bl)printf("Warrior wins\n");
//        else  printf("Warrior loses\n");
//
//    }
//
//    fclose(stdin);
//    fclose(stdout);
//	return 0;
//}

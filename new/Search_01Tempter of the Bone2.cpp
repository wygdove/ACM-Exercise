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
//#define NUM 10
//
//int dx[4]={1,0,-1,0};
//int dy[4]={0,1,0,-1};
//
//int n,m,t;
//char ch[NUM][NUM];
//int time[NUM][NUM];
//int sx,sy,ex,ey;
//int x,y,nx,ny;
//pair<int,int> p;
//queue<pair<int,int> > qu;
//
//
//void bfs()
//{
//    while(!qu.empty())qu.pop();
//    memsINF(time);
//    bool bl=false;
//
//    p.first=sx;p.second=sy;
//    qu.push(p);
//    time[sx][sy]=0;
//    while(!qu.empty())
//    {
//        p=qu.front();qu.pop();
//        x=p.first;y=p.second;
//        if(ch[x][y]=='D')
//        {
////cout<<"time="<<time[x][y]<<endl;
//            if(time[x][y]==t)bl=true;
//            break;
//        }
//        for(int i=0;i<4;i++)
//        {
//            nx=x+dx[i];ny=y+dy[i];
//            if(nx>=0&&nx<n&&ny>=0&&ny<m && ch[nx][ny]!='X' && time[nx][ny]==INF)
//            {
//                time[nx][ny]=time[x][y]+1;
//                p.first=nx;p.second=ny;
//                qu.push(p);
//            }
//        }
//    }
//    if(bl)printf("YES\n");
//    else printf("NO\n");
//}
//
//int main()
//{
//    cin.sync_with_stdio(false);
//    cout.sync_with_stdio(false);
//
//    freopen("new.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    while(scanf("%d%d%d",&n,&m,&t)&&(n+m+t))
//    {
//        memsch(ch);
//
//        for(int i=0;i<n;i++)
//        {
//            getchar();
//            for(int j=0;j<m;j++)
//            {
//                scanf("%c",&ch[i][j]);
//                if(ch[i][j]=='S'){sx=i;sy=j;}
//                else if(ch[i][j]=='D'){ex=i;ey=j;}
//            }
//        }
////for(int i=0;i<n;i++){for(int j=0;j<m;j++){printf("%c",ch[i][j]);}printf("\n");}
//        bfs();
//    }
//
//
//    fclose(stdin);
//    fclose(stdout);
//	return 0;
//}

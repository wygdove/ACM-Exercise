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
//int n,m,t;
//char ch[NUM][NUM];
//bool vis[NUM][NUM];
//int sx,sy,ex,ey;
//int time;
//int nx,ny;
//bool bl;
//
//int dx[4]={1,0,-1,0};
//int dy[4]={0,1,0,-1};
//
//void dfs(int x,int y)
//{
////printf("%d %d\n",x,y);
//    if(ch[x][y]=='D')
//    {
//        if(time==t) bl=true;
////printf("time=%d\n",time);
//        return;
//    }
//    if(time>t)return;
//
//    if( ((t-time)%2)!=((abs(ex-x)+abs(ey-y))%2))return;
//
//    for(int i=0;i<4;i++)
//    {
//        nx=x+dx[i];ny=y+dy[i];
//        if(nx>=0&&nx<n&&ny>=0&&ny<m && !vis[nx][ny])
//        {
//            if(ch[nx][ny]=='.'||ch[nx][ny]=='D')
//            {
//                vis[nx][ny]=1;
//                time++;
//                dfs(nx,ny);
//                vis[nx][ny]=0;
//                time--;
//                if(bl)return;
//            }
//        }
//    }
//    return;
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
//        mems0(vis);
//        time=0;bl=false;
//
//        for(int i=0;i<n;i++)scanf("%s",&ch[i]);
//        for(int i=0;i<n;i++)
//        {
//            for(int j=0;j<m;j++)
//            {
//                if(ch[i][j]=='S'){sx=i;sy=j;}
//                else if(ch[i][j]=='D'){ex=i;ey=j;}
//            }
//        }
////for(int i=0;i<n;i++){for(int j=0;j<m;j++){printf("%c",ch[i][j]);}printf("\n");}
//        if(((abs(sx-ex)+abs(sy-ey))%2)!=(t%2))
//        {
//            printf("NO\n");
//            continue;
//        }
//
//        vis[sx][sy]=1;
//        ch[sx][sy]='X';
//        dfs(sx,sy);
//        if(bl)printf("YES\n");
//        else printf("NO\n");
//    }
//
//
//    fclose(stdin);
//    fclose(stdout);
//	return 0;
//}

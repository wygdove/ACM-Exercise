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
//int dy[4]={0,-1,0,1};
//
//int n,m,t;
//char ch[NUM][NUM];
//int time[NUM][NUM];
//int x,y,nx,ny;
//pair<int,int> p;
//queue<pair<int,int> > qu;
//
//vector<pair<int,int> > ve;
//
//void bfs()
//{
//    while(!qu.empty())qu.pop();
//    memsINF(time);
//    int temp;
//    int cnt=0;
//    ve.clear();
//    int route=0;
//
//    p.first=0;p.second=0;
//    qu.push(p);
//    time[0][0]=0;
//    if(ch[0][0]>='0'&&ch[0][0]<='9')time+(ch[0][0]-'0');
//    while(!qu.empty())
//    {
//        if(cnt++>10000)break;
//        p=qu.front();qu.pop();
//        x=p.first;y=p.second;
//
//
//        if(time[x][y]==route)
//        {
////printf("\t(%d,%d): %c  time=%d route=%d\n",x,y,ch[x][y],time[x][y],route);
//            ve.push_back(p);
//            route++;
//        }
//
//        for(int i=0;i<4;i++)
//        {
//            nx=x+dx[i];ny=y+dy[i];
//            if(nx>=0&&nx<n&&ny>=0&&ny<m && ch[nx][ny]!='X')
//            {
//                if(ch[nx][ny]=='.')temp=time[x][y]+1;
//                else if(ch[nx][ny]>='0'&&ch[nx][ny]<='9')
//                    temp=time[x][y]+1+(ch[nx][ny]-'0');
//                if(time[nx][ny]>temp)time[nx][ny]=temp;
//                p.first=nx;p.second=ny;
//                qu.push(p);
//            }
//        }
//    }
//}
//
//int main()
//{
//    cin.sync_with_stdio(false);
//    cout.sync_with_stdio(false);
//
//    freopen("new.in","r",stdin);
////    freopen("out.out","w",stdout);
//
//    int ans;
//    while(scanf("%d%d",&n,&m)!=EOF)
//    {
//        memsch(ch);
//
//        for(int i=0;i<n;i++)scanf("%s",&ch[i]);
//
//        bfs();
//
//
//
//        ans=time[n-1][m-1];
//        if(ans==INF){ printf("God please help our poor hero.\nFINISH\n");continue;}
//        else printf("It takes %d seconds to reach the target position, let me show you the way.\n",ans);
//
//        int cnt=1;
//        for(int i=1;i<ve.size();i++)
//        {
//            x=ve[i-1].first;y=ve[i-1].second;
//            if(ch[x][y]>='0'&&ch[x][y]<='9')
//            {
//                nx=ch[x][y]-'0';
//                while(nx--)
//                {
//                    printf("%ds:FIGHT AT (%d,%d)\n",cnt++,x,y);
//                }
//            }
//            printf("%ds:(%d,%d)",cnt++,x,y);
//            x=ve[i].first;y=ve[i].second;
//            printf("->(%d,%d)\n",x,y);
//        }
//        printf("FINISH\n");
//    }
//
//
//    fclose(stdin);
//    fclose(stdout);
//	return 0;
//}

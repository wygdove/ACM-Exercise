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
//
///**************************************************************
//    Problem:
//    Ordering:
//    Thought: Input Question
//    Result:
//****************************************************************/
//
//#define MOD 10007
//#define NUM 100
//#define MAXN 50
//
//char ch[NUM+2][NUM+2];
//int m,n;
//
//void dfs(int x,int y)
//{
//    int nx,ny;
//    ch[x][y]='*';
//    for(int dx=-1; dx<=1; dx++)
//    {
//        for(int dy=-1; dy<=1; dy++)
//        {
//            nx=x+dx;
//            ny=y+dy;
//            if(nx>=1 && nx<=m && ny>=1 && ny<=n && ch[nx][ny]=='.')
//                dfs(nx,ny);
//        }
//    }
//    return;
//}
//
//int main()
//{
//    freopen("hdu.in","r",stdin);
//    freopen("hdu.out","w",stdout);
//
//    int ans;
//    char temp[NUM+2];
//    memset(ch,'.',sizeof(ch));
//    ans=0;
//    int s=-1;
//    while(scanf("%s",temp)!=EOF)
//    {
/////printf("%s\n",temp);
//        s++;
//        for(int j=0;; j++)
//        {
//            ch[s][j]=temp[j];
//            if(temp[j]=='#') break;
//        }
//        if(temp[0]=='#')
//        {
//for(int i=0; i<s; i++) printf("%s\n",ch[i]);
//            for(int i=1; i<=s; i++)
//            {
//                for(int j=1; ch[i][j]!='#'; j++)
//                {
//                    if(ch[i][j]=='.')
//                    {
//                        dfs(i,j);
//                        ans++;
//                    }
//                }
//            }
//            if(ans>1) printf("A\n");
//            else printf("C\n");
//
//            memset(ch,'.',sizeof(ch));
//            ans=0;
//            s=-1;
//        }
//    }
//    return 0;
//}

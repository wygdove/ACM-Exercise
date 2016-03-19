#pragma comment(linker, "/STACK:1024000000,1024000000")
#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<math.h>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<vector>
#include<stdio.h>
#include<stdlib.h>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>

using namespace std;

typedef long long LL;
typedef long double real;
typedef vector<int> VI;


#define mems0(s)  memset(s,0,sizeof(s))
#define mems_1(s) memset(s,-1,sizeof(s))
#define memsINF(s) memset(s,INF,sizeof(s))

#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1


/**************************************************************
    Problem:
    Ordering:
    Thought:
    Result:
    Author: wygdove
****************************************************************/


const double eps = 1e-9;
const double pi=acos(-1.0);
#define INF 0x3f3f3f3f
#define MINN -0x3f3f3f3f
#define MAXN 0x3f3f3f3f
#define MOD 10007
#define NUM 100008

int n,m,k,q;
int x,y;
int x1,yy1,x2,y2;
pair<int,int> rook;
set<pair<int,int> > st;
set<pair<int,int> >::iterator it;

int main()
{
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);

    freopen("bc.in","r",stdin);
    //freopen("out.out","w",stdout);

    int T;
    bool b1,b2;
    scanf("%d",&T);
    while(T--)
    {
        st.clear();
        b1=false;b2=false;

        scanf("%d%d%d%d",&n,&m,&k,&q);
        for(int i=0;i<k;i++)
        {
            scanf("%d%d",&x,&y);
            rook.first=x;rook.second=y;
            st.insert(rook);
printf("-----rook: (%d,%d)-----\n",x,y);
        }
        while(q--)
        {
            scanf("%d%d%d%d",&x1,&yy1,&x2,&y2);
            for(it=st.begin();it!=st.end();it++)
            {
                rook=*it;
                x=rook.first;y=rook.second;
printf("(%d,%d) %s\t",x1,yy1,b1?"true":"false");
printf("(%d,%d) %s\t",x2,y2,b2?"true":"false");
                if(x==x1||y==yy1) b1=true;
                else b1=false;
                if(x==x2||y==y2) b2=true;
                else b2=false;

            }
            if(b1&b2)printf("Yes\n");
            else printf("No\n");
        }

    }

    fclose(stdin);
    fclose(stdout);
	return 0;
}

/*
no
yes
yes
yes
yes
no

3
2 2 1 2
1 1
2 1 2 2
1 1 1 2
2 2 2 1
1 1
1 2
2 1 2 2
6 6 3 3
1 1
3 3
6 2
1 1 3 3
1 1 1 4
1 2 2 4


*/

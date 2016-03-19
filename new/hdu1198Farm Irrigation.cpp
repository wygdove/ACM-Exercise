#include<iostream>
#include<memory.h>
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

typedef __int64 INT;
typedef long long LL;
typedef long double real;
typedef vector<int> VI;

/**************************************************************
    Problem: hdu1198Farm Irrigation
    Ordering: ²¢²é¼¯
    Follow: kuangbin
    Link: http://www.cnblogs.com/kuangbin/archive/2012/07/28/2612929.html
    Result:
****************************************************************/

#define NUM 110
#define MOD 10007

char m[NUM][NUM];
int f[NUM*NUM];

int find(int x)
{
    if(f[x]==-1)
        return x;
    return f[x]=find(f[x]);
}

void union_set(int a,int b)
{
    int x=find(a);
    int y=find(b);
    if(x!=y)
        f[x]=y;
}

int main()
{
    freopen("new.in","r",stdin);

    //int T=0;

    //scanf("%d",&T);
    //while(T--)
    int M,N;
    int i,j;
    int ans;

    while(scanf("%d%d",&M,&N) && M!=-1 && N!=-1)
    {
//        getchar();
//        for(i=0;i<M;i++)
//            for(j=0;j<N;j++)
//                scanf("%c",&m[i][j]);
        for(i=0; i<N; i++)
            scanf("%s",&m[i]);
        for(i=0; i<M*N; i++)
            f[i]=-1;

        for(i=0; i<M; i++)
        {
            for(j=0; j<N; j++)
            {
                if(i>0 && (m[i][j]=='A' || m[i][j]=='B' ||
                           m[i][j]=='E' || m[i][j]=='G' ||
                           m[i][j]=='H' || m[i][j]=='J' ||
                           m[i][j]=='K'))
                {
                    if(m[i-1][j]=='C' || m[i-1][j]=='D' ||
                            m[i-1][j]=='E' || m[i-1][j]=='H' ||
                            m[i-1][j]=='I' || m[i-1][j]=='J' ||
                            m[i-1][j]=='K' )
                    {
                        union_set(i*N+j,(i-1)*N+j);
                    }
                }
                if(j>0 && (m[i][j]=='A' || m[i][j]=='C' ||
                           m[i][j]=='F' || m[i][j]=='G' ||
                           m[i][j]=='H' || m[i][j]=='I' ||
                           m[i][j]=='K' ))
                {
                    if(m[i][j-1]=='B' || m[i][j-1]=='D' ||
                            m[i][j-1]=='F' || m[i][j-1]=='G' ||
                            m[i][j-1]=='I' || m[i][j-1]=='J' ||
                            m[i][j-1]=='K' )
                    {
                        union_set(i*N+j,i*N+j-1);
                    }
                }
            }
        }

        ans=0;
        for(i=0; i<M*N; i++)
        {
            if(f[i]==-1)
                ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}

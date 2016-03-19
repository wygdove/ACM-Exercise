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

typedef long long LL;
typedef long double real;
typedef vector<int> VI;


/**************************************************************
    Problem:
    Ordering:
    Thought:
    Result:
****************************************************************/


#define INF 0x3f3f3f3f
#define MINN -0x3f3f3f3f
#define MAXN 0x3f3f3f3f
#define MOD 10007
#define NUM 10002

int x[NUM][4];
set<long long> st;

int main()
{
    freopen("new.in","r",stdin);
    //freopen("out.out","w",stdout);

//long long a;
//st.insert(a);
//cout<<*st.begin()<<endl;
//cout<<255255255255<<endl;
    int T;
    int n,m;
    int a,b,c,d;
    long long aa,bb,cc,dd,e;
    scanf("%d",&T);
    for(int cnt=1;cnt<=T;cnt++)
    {
        memset(x,0,sizeof(x));
        st.clear();

        scanf("%d%d",&n,&m);
        for(int i=0;i<n;i++)
            scanf("%d.%d.%d.%d",&x[i][0],&x[i][1],&x[i][2],&x[i][3]);
        printf("Case #%d:\n",cnt);
        while(m--)
        {
            st.clear();
            scanf("%d.%d.%d.%d",&a,&b,&c,&d);
            for(int i=0;i<n;i++)
            {
                aa=x[i][0]&a;
                bb=x[i][1]&b;
                cc=x[i][2]&c;
                dd=x[i][3]&d;
//printf("aa=%d bb=%d cc=%d dd=%d\n",aa,bb,cc,dd);
                e=aa*1000000000+bb*1000000+cc*1000+dd;
//printf("e=%lld\n",e);
                st.insert(e);
            }
            printf("%d\n",st.size());
        }

    }
	return 0;
}

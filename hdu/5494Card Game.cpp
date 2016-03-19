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
#define NUM 108

multiset<int> sta;
multiset<int> stb;
multiset<int>::iterator it;
int suma,sumb;

int main()
{
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);

    freopen("hdu.in","r",stdin);
    //freopen("out.out","w",stdout);

    int T;
    int n,m;
    int x;
    scanf("%d",&T);
    while(T--)
    {
        sta.clear();stb.clear();
        suma=0;sumb=0;

        scanf("%d%d",&n,&m);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&x);
            sta.insert(x);
        }
        for(int i=0;i<n;i++)
        {
            scanf("%d",&x);
            stb.insert(x);
        }

        x=0;
        for(it=sta.begin();it!=sta.end();it++)
        {
            suma+=*it;
            x++;
            if(x>=m)break;
        }
        x=0;it=stb.end();it--;
        for(;it!=sta.begin();it--)
        {
            sumb+=*it;
            x++;
            if(x>=m)break;
        }
        if(x<m){it--;sumb+=*it;}

        if(suma>sumb)printf("YES\n");
        else printf("NO\n");
    }

    fclose(stdin);
    fclose(stdout);
	return 0;
}

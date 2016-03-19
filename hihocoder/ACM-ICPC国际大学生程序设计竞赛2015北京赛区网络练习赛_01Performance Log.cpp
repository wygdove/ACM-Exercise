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
#define NUM 20008

struct Sample
{
    int index;
    char name[256];
    int h,m,s;
    char status[10];
    int th,tm,ts;
}f[NUM];
stack<Sample> sa;
string a,b;

bool caltime(int i)
{
    bool bl=true;
    f[i].th=f[i].tm=f[i].ts=0;

    if(f[i].s>=f[0].s) f[i].ts=f[i].s-f[0].s;
    else
    {
        f[i].ts=f[i].s+60-f[0].s;
        f[i].m--;
    }
    if(f[i].m>=f[0].m) f[i].tm=f[i].m-f[0].m;
    else
    {
        f[i].tm=f[i].m+60-f[0].m;
        f[i].h--;
    }
    if(f[i].h>=f[0].h) f[i].th=f[i].h-f[0].h;
    else
    {
        bl=false;
    }
    f[f[0].index].th=f[i].th;
    f[f[0].index].tm=f[i].tm;
    f[f[0].index].ts=f[i].ts;
    return bl;
}

int main()
{
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);

    freopen("hiho.in","r",stdin);
    //freopen("out.out","w",stdout);

    int n;
    bool bl;
    while(scanf("%d",&n)!=EOF)
    {
        while(!sa.empty())sa.pop();
        bl=true;

        for(int i=1;i<=n;i++)
        {
            getchar();
            scanf("%s %d:%d:%d %s",&f[i].name,&f[i].h,&f[i].m,&f[i].s,&f[i].status);
            f[i].index=i;
        }
        for(int i=1;i<=n;i++)
        {
//printf("%d: %s %02d:%02d:%02d %s\n",i,f[i].name,f[i].h,f[i].m,f[i].s,f[i].status);
            if(f[i].status[0]=='S') sa.push(f[i]);
            else if(f[i].status[0]=='E')
            {
                if(sa.empty()){bl=false;break;}
                f[0]=sa.top();
                a=f[0].name;b=f[i].name;
                if(a==b&&f[0].status[0]=='S')
                {
                    bl=caltime(i);
                    sa.pop();
                }
                else{bl=false;break;}
            }
        }
        if(!sa.empty()) bl=false;
        if(!bl)printf("Incorrect performance log\n");
        else
        {
            for(int i=1;i<=n;i++)
                if(f[i].status[0]=='S')
                printf("%s %02d:%02d:%02d\n",f[i].name,f[i].th,f[i].tm,f[i].ts);
        }
//        printf("\n");
    }

    fclose(stdin);
    fclose(stdout);
	return 0;
}

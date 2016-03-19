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
#define NUM 11000008

char data[NUM];
char ch[NUM];
int chn[NUM];

int main()
{
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);

    freopen("hiho.in","r",stdin);
    //freopen("out.out","w",stdout);

    int T;
    int n;
    scanf("%d",&T);
    while(T--)
    {
        memset(data,'\0',sizeof data);
        memset(ch,'\0',sizeof ch);
        mems0(chn);

        scanf("%d",&n);
        getchar();
        for(int i=0;i<n;i++)
        {
            ch[i]=getchar();
        }
        int cnt=0;
        for(int i=0;i<n-1;)
        {

        }

    }

    fclose(stdin);
    fclose(stdout);
	return 0;
}

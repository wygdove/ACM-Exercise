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
    Problem:
    Ordering:
    Thought:
    Result:
****************************************************************/


#define INF 0x3f3f3f3f
#define MINN -0x3f3f3f3f
#define MAXN 0x3f3f3f3f
#define MOD 10007
#define NUM 50002


int t[NUM];
int n;

int sum(int i) //返回前i个元素和
{
       int s=0;
       while(i>0)
       {
              s+=t[i];
              i-=i&(-i);
       }
       return s;
}

void update(int i,int value)  //A[i]的改变值为value
{
       while(i<=NUM)
       {
              t[i]+=value;
              i+=i&(-i);
       }
}

int main()
{
    freopen("hdu.in","r",stdin);
    //freopen("hdu.out","w",stdout);

    int T=0;
    int cnt=1;
    string s;int a,b;
    scanf("%d",&T);
    while(T--)
    {
        printf("Case %d:\n",cnt++);
        memset(t,0,sizeof(t));

        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a);
            update(i,a);
        }
        getchar();
        while(cin>>s && s!="End")
        {
            scanf("%d%d",&a,&b);
            if(s=="Add") update(a,b);
            else if(s=="Sub") update(a,-b);
            else if(s=="Query") printf("%d\n",sum(b)-sum(a-1));
        }
    }

	return 0;
}

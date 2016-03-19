#pragma comment(linker, "/STACK:1024000000,1024000000")
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

//for DS
//函数结果状态代码
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
//Status是函数的类型，其值是函数结果状态代码
typedef int Status;
typedef int ElemType;


typedef __int64 INT;
typedef long long LL;
typedef long double real;
typedef vector<int> VI;


/**************************************************************
    Problem:
    Ordering:
    Thought:
    Result:
    Author: wygdove
****************************************************************/


#define INF 0x3f3f3f3f
#define MINN -0x3f3f3f3f
#define MAXN 0x3f3f3f3f
#define MOD 10007
#define NUM 100002


int a[NUM];

int main()
{
    freopen("new.in","r",stdin);
    //freopen("out.out","w",stdout);

    int n,m,t,q;
    int l,r,ans;
    set<int> st;set<int> st2;
    while(scanf("%d%d",&n,&m) && n && m)
    {
        memset(a,0,sizeof(a));

        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        while(m--)
        {
            st.clear();
            scanf("%d",&q);
            for(int i=0;i<q;i++)
            {
                scanf("%d",&t);
                st.insert(t);st2.insert(t);
            }

            l=-1;r=-1;ans=0;
            for(int i=0;i<n;i++)
            {
                if(st.find(a[i])!=st.end())
                {
                    if(l==-1)l=i;
                    else r=i;
                    st.erase(a[i]);
                }
                if(st.empty()) break;
            }
//printf("l=%d r=%d\n",l,r);
            ans=r-l;
            l=-1;r=-1;
            for(int i=n-1;i>=0;i--)
            {
                if(st2.find(a[i])!=st2.end())
                {
                    if(r==-1)r=i;
                    else l=i;
                    st2.erase(a[i]);
                }
                if(st2.empty()) break;
            }
//printf("l=%d r=%d\n",l,r);
            if(l!=-1 && r!=-1)
                ans=(r-l)<ans?(r-l):ans;
            printf("%d\n",ans+1);
        }
    }

    return 0;
}

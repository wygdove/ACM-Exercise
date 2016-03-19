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
#define NUM 100

bool judge(int n)
{
    if(n%400==0 || (n%4==0 && n%100!=0))
        return true;
    else return false;
}

int main()
{
    freopen("new.in","r",stdin);
    //freopen("out.out","w",stdout);

    map<string,int> mp;
    mp["January"]=1;
    mp["February"]=2;
    mp["March"]=3;
    mp["April"]=4;
    mp["May"]=5;
    mp["June"]=6;
    mp["July"]=7;
    mp["August"]=8;
    mp["September"]=9;
    mp["October"]=10;
    mp["November"]=11;
    mp["December"]=12;

    int T=0;
    char ch[15];
    int sy,sm,sd,ey,em,ed;
    int ans;
    scanf("%d",&T);
    for(int cnt=1;cnt<=T;cnt++)
    {
        ans=0;
        scanf("%s %d,%d",&ch,&sd,&sy);
        sm=mp[ch];
        scanf("%s %d,%d",&ch,&ed,&ey);
        em=mp[ch];

        if(sy==ey)
        {
            if(judge(sy) && sm<3 && (em>=3 || (em==2 && ed==29))) ans++;
            printf("Case #%d: %d\n",cnt,ans);
            continue;
        }

        if(judge(sy) && sm<3)ans++;
        if(sy!=ey && judge(ey) && (em>=3 || (em==2 && ed==29))) ans++;

        for(int i=sy+1;i<ey;i++)
            if(judge(i))
//            {
                ans++;
//            printf("%d ",i);}printf("\n");

        printf("Case #%d: %d\n",cnt,ans);
    }

	return 0;
}

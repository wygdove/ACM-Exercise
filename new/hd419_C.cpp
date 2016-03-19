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
#define NUM 10002

//struct People
//{
//    char name[30];
//    int rp;
//}p[NUM][202];
//
//int pn[NUM];
//
//int cmp( const void *a , const void *b )
//{
//	struct People *c = (People *)a;
//	struct People *d = (People *)b;
//	if(c->rp != d->rp)
//		return d->rp - c->rp;
//	else
//		return d->name - c->name;
//}
//
//int main()
//{
//    freopen("new.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int N,M,X;
//    char ml[10];
//    int x,a,b;
//    while(scanf("%d%d",&N,&M)!=EOF)
//    {
//        memset(p,0,sizeof(p));
//        memset(pn,0,sizeof(pn));
//
//        for(int i=1;i<=N;i++)
//        {
//            scanf("%d",&pn[i]);
//            for(int j=0;j<pn[i];j++)
//            {
//                getchar();
//                scanf("%s%d",&p[i][j].name,&p[i][j].rp);
//            }
//            qsort(p[i],pn[i],sizeof(p[i][0]),cmp);
////printf("pn[%d]=%d\n",i,pn[i]);for(int j=0;j<pn[i];j++) printf("%s %d\n",p[i][j].name,p[i][j].rp); printf("\n");
//        }
//
//        for(int i=0;i<M;i++)
//        {
//            getchar();
//            scanf("%s",&ml);
////printf("ml=%s len=%d\n",ml,strlen(ml));
//
//            if(strlen(ml)==6)
//            {
//                scanf("%d",&x);
////printf("6pn[%d]=%d\n",x,pn[x]);
//                printf("%s\n",p[x][pn[x]-1].name);
//                pn[x]--;
//            }
//            else if(strlen(ml)==5)
//            {
////                cin>>x>>p[x][pn[x]].name>>p[x][pn[x]].rp;
//                scanf("%d",&x);getchar();scanf("%s%d",&p[x][pn[x]].name,&p[x][pn[x]].rp);
////                scanf("%d%s%d",&x,&p[x][pn[x]].name,&p[x][pn[x]].rp);
////printf("5x=%d p.name=%s p.rp=%d\n",x,p[x][pn[x]].name,p[x][pn[x]].rp);
//                pn[x]++;
////printf("5pn[%d]=%d\n",x,pn[x]);for(int j=0;j<pn[x];j++)printf("%s %d...\n",p[x][j].name,p[x][j].rp);printf("\n");
//            }
//            else if(strlen(ml)==4)
//            {
//                scanf("%d%d",&a,&b);
//                for(int j=pn[a],k=0;k<pn[b];j++,k++)
//                {
//                    p[a][j]=p[b][k];
////                    p[a][j].name=p[b][k].name;
////                    p[a][j].rp=p[b][k].rp;
//                    pn[a]++;
//                }
//                pn[b]=0;
//                qsort(p[a],pn[a],sizeof(p[a][0]),cmp);
//            }
//        }
//
//    }
//
//	return 0;
//}



struct p
{
    string name;
    int rp;
    friend bool operator<(p a,p b)
    {
        if(a.rp!=b.rp)
            return a.rp>b.rp;
        else
            return a.name<b.name;
    }
};

priority_queue<p> q[NUM];

int n,m;
int main()
{
    freopen("new.in","r",stdin);
    //freopen("out.out","w",stdout);
    while(cin>>n>>m)
    {
        int num;
        string name;
        int rp;
        p per;
        for(int i=1;i<=n;++i)
        {
            cin>>num;
            for(int j=0;j<num;++j)
            {
                cin>>name>>rp;
                per.name=name;
                per.rp=rp;
                q[i].push(per);
            }
        }
        char ml[10];
        for(int i=0;i<m;++i)
        {
            scanf("%s",ml);
            if(ml[0]=='J')
            {
                int a,b;
                scanf("%d%d",&a,&b);
                while(!q[b].empty())
                {
                    per=q[b].top();
                    q[b].pop();
                    q[a].push(per);
                }
            }
            else if(ml[4]=='N')
            {
                int a;
                cin>>a>>name>>rp;
                per.name=name;
                per.rp=rp;
                q[a].push(per);
            }
            else
            {
                int a;
                scanf("%d",&a);
                per=q[a].top();
                q[a].pop();
                cout<<per.name<<endl;
            }
        }
        for(int i=1;i<=n;++i)
        {
            while(!q[i].empty())    q[i].pop();
        }
    }
    return 0;
}

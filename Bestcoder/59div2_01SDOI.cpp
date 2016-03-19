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

struct Sample
{
    char name[22];
    char sex[10];
    double r1,r2;
    double g;
    bool operator<(const Sample& b)const
    {
        return g>b.g;
    }
}s[NUM];
int n,m;
set<Sample> st;
set<Sample>::iterator it;

int main()
{
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);

    freopen("bc.in","r",stdin);
    //freopen("out.out","w",stdout);

    int T;
    double x1,x2;
    bool bf;
    int cnt;
    string na;
    scanf("%d",&T);
    while(T--)
    {
        x1=-INF;x2=-INF;
        bf=false;
        na="";
        st.clear();

        scanf("%d%d",&n,&m);
        for(int i=0;i<n;i++)
        {
            scanf("%s%s%lf%lf",&s[i].name,&s[i].sex,&s[i].r1,&s[i].r2);
            s[i].g=0.0;
            x1=x1>s[i].r1?x1:s[i].r1;
            x2=x2>s[i].r2?x2:s[i].r2;
            if(s[i].sex[0]=='f')bf=true;
        }
        for(int i=0;i<n;i++)
        {
            s[i].r1=s[i].r1*300/x1;
            s[i].r2=s[i].r2*300/x2;
            s[i].g=s[i].r1*0.3+s[i].r2*0.7;
            st.insert(s[i]);
        }
//for(it=st.begin();it!=st.end();it++){s[0]=*it;printf("%s  \t%s  \t%.2lf\n",s[0].name,s[0].sex,s[0].g);}

        printf("The member list of Shandong team is as follows:\n");
        cnt=0;
        if(bf)
        {
            for(it=st.begin();it!=st.end();it++)
            {
                s[0]=*it;
                if(s[0].sex[0]=='f')
                {
                    na=s[0].name;
                    break;
                }
            }
        }
        if(m==1)
        {
            cout<<na<<endl;
            continue;
        }
        bf=false;
        bool bl=false;
        for(it=st.begin();it!=st.end();it++)
        {
            s[0]=*it;
            printf("%s\n",s[0].name);
            cnt++;
            if(s[0].name==na)bf=true;
            if(bf){m++;bf=false;bl=true;}
            if(cnt>=m-1)break;
        }
        if(!bl&&cnt<m)cout<<na<<endl;
    }

    fclose(stdin);
    fclose(stdout);
	return 0;
}

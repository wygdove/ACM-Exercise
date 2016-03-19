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

set<int> st;
set<int>::iterator it;
map<int,int> mp;

int main()
{
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);

    freopen("bc.in","r",stdin);
    //freopen("out.out","w",stdout);

    int T;
    int n;
    int a,b;
    int cnt,ans;
    scanf("%d",&T);
    while(T--)
    {
        mp.clear();
        st.clear();
        ans=0;cnt=0;

        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d%d",&a,&b);
            st.insert(a);
            mp[a]+=b;
        }
        for(it=st.begin();it!=st.end();it++)
        {
            a=mp[*it];
            cnt=a/64;
            if(a%64!=0)cnt++;
            ans+=cnt;
//printf("%d : %d   %d\n",*it,a,cnt);
        }
//printf("ans=%d\n",ans);
        if(ans%36==0)ans=ans/36;
        else ans=ans/36+1;
        printf("%d\n",ans);
    }

    fclose(stdin);
    fclose(stdout);
	return 0;
}

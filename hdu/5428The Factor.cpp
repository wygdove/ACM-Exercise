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


/**************************************************************
    Problem:
    Ordering:
    Thought:
    Result:
****************************************************************/


#define INF 0x3f3f3f3f
#define MINN -0x3f3f3f3f
#define MAXN 60008
#define MOD 10007
#define NUM 108

int a[NUM];
int prime[MAXN];
multiset<int> st;
multiset<int>::iterator it;

bool JudgePrime(int n)
{
    if(n==1) return false;
    int i;
    bool flag=true;
    for(i=2;i<=(int)sqrt((double)n);i++)
    if(n%i==0){flag=false;break;}
    if(flag==1)return true;
    else return false;
}

void getPrime()
{
    memset(prime,0,sizeof(prime));
    for(int i=2;i<=MAXN;i++)
    {
	if(!prime[i])prime[++prime[0]]=i;
	for(int j=1;j<=prime[0]&&prime[j]<= NUM /i;j++)
	{
	    prime[prime[j]*i]=1;
	    if(i%prime[j]==0) break;
	}
    }
}

int main()
{
    freopen("hdu.in","r",stdin);
    //freopen("out.out","w",stdout);

    getPrime();
//for(int i=0;i<100;i++)printf("%d\t",prime[i]);printf("\n");
    int T;
    int n;
    __int64 ans;
    int cnt;
    scanf("%d",&T);
    while(T--)
    {
        ans=-1;
        st.clear();

        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(JudgePrime(a[i]))
            {
                st.insert(a[i]);
                continue;
            }
            cnt=0;
            for(int j=1;j<prime[0];j++)
            {
                if(a[i]%prime[j]==0)
                {
                    while(a[i]%prime[j]==0)///!!!
                    {
                        a[i]/=prime[j];
                        st.insert(prime[j]);
                        cnt++;
                    }
                    if(cnt>2)break;
                }
                if(cnt>2) break;
            }
        }
//for(it=st.begin();it!=st.end();it++)printf("%d ",*it);printf("\n");
        if(st.size()>=2)
        {
            it=st.begin();
            ans=(__int64)(*it);it++;
            ans*=(__int64)(*it);
        }
        printf("%I64d\n",ans);
    }

	return 0;
}

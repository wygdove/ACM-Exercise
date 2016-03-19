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

#define MOD 10007
#define MAXN 100
#define NUM 50

int c1[NUM+5],c2[NUM+5];		//125ÎªnµÄ·¶Î§
int word[27];

int main()
{
    freopen("new.in","r",stdin);

    int T;
	int ans;
	scanf("%d",&T);
    while(T--)
    {
        memset(word,0,sizeof(word));
        ans=0;

        for(int i=1;i<=26;i++)
            scanf("%d",&word[i]);
//for(int i=1;i<=26;i++)cout<<"word["<<i<<"]="<<word[i]<<endl;

        memset(c1,0,sizeof(c1));
        memset(c2,0,sizeof(c2));
        for(int i=0;i<=word[1];i++)
        {
            c1[i]=1;
        }

        for(int i=2;i<=26;i++)
        {
            for(int j=0;j<=50;j++)
            {
                for(int k=0;k+j<=50 && k<=word[i]*i;k+=i)
                {
                    c2[j+k]+=c1[j];
                }
            }
            for(int j=0;j<=50;j++)
            {
                c1[j]=c2[j];
                c2[j]=0;
            }
        }
        for(int i=1;i<=50;i++)
            ans+=c1[i];
        printf("%d\n",ans);
        //cout<<c1[n]<<endl;
    }

	return 0;
}

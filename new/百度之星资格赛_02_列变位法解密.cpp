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
#define NUM 100002

char ch[NUM];
string s;

int main()
{
    freopen("new.in","r",stdin);
    //freopen("out.out","w",stdout);

    int T;
    int n;
    scanf("%d",&T);
    for(int cnt=1;cnt<=T;cnt++)
    {
        printf("Case #%d:\n",cnt);
        memset(ch,'\0',sizeof(ch));

        getchar();
        gets(ch);
        scanf("%d",&n);
//printf("len=%d n=%d\n",strlen(ch),n);
        int len=strlen(ch);
        int x=len%n;
        int j=0;
        for(int i=0;i<len;i++)
        {
            s+=ch[i];
        }

    }

	return 0;
}

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
#define NUM 100
#define MAXN 100


char ch[100];

int main()
{
    freopen("new.in","r",stdin);

    int T=0;
    int cnt=0;
    scanf("%d",&T);
    while(T--)
    {
        memset(ch,'\0',sizeof(ch));

        //if(cnt!=0) cout<<endl;
        printf("String #%d\n",++cnt);

        scanf("%s",&ch);

        for(int i=0;i<strlen(ch);i++)
        {
            if(ch[i]=='Z')
                printf("A");
            else
                printf("%c",ch[i]+1);
        }
        cout<<endl<<endl;;
    }

	return 0;
}

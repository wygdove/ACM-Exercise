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
#define NUM 5000
#define MAXN 100

//int a[NUM+5][NUM+5];
//
//void doit()
//{
//    memset(a,-1,sizeof(a));
//
//    a[0][0]=0;
//    int num=1;
//    for(int i=1;i<NUM+5;i+=2)
//    {
//        a[i][i]=num;
//        a[i+2][i]=a[i][i]+2;
//        a[i+1][i+1]=(num+=3);
//        a[i+3][i+1]=a[i+1][i+1]+2;
//
//        a[i+2][i+2]=(num+=1);
//        a[i+4][i+2]=num+2;
//        a[i+3][i+3]=(num+=3);
//        a[i+5][i+3]=num+3;
//        num++;
//    }
//    return;
//}
//
//int main()///Memory Limit Exceeded
//{
//    freopen("new.in","r",stdin);
//
//    int T=0;
//    int x,y;
//    doit();
//for(int i=0;i<30;i++)cout<<"a["<<i<<"]["<<i<<"]="<<a[i][i]<<endl;
//for(int i=0;i<30;i++){for(int j=0;j<30;j++){if(a[i][j]!=-1)cout<<"a["<<i<<"]["<<j<<"]="<<a[i][j]<<endl;}}
//    scanf("%d",&T);
//    while(T--)
//    {
//        scanf("%d%d",&x,&y);
//        if(a[x][y]!=-1)printf("%d\n",a[x][y]);
//        else printf("No Number\n");
//    }
//	return 0;
//}
int main()
{
    freopen("new.in","r",stdin);

    int T;
    int x,y;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d",&x,&y);

        if(x==y || x-2==y)
        {
            if(x%2==0)
                printf("%d\n",x+y);
            else
                printf("%d\n",x+y-1);
        }
        else
            printf("No Number\n");
    }

    return 0;
}

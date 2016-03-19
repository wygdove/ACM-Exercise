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

#define NUM 100
#define MOD 10007

/**************************************************************
    Problem: hdu4431Mahjong
    Ordering: 枚举
    Follow: kuangbin
    Thought: 给13张牌。问增加哪些牌可以胡牌。

胡牌有以下几种情况：
1、一个对子 +  4组 3个相同的牌或者顺子。  只有m、s、p是可以构成顺子的。东西南北这样的牌没有顺子。
2、7个不同的对子。
3、1m,9m,1p,9p,1s,9s,1c,2c,3c,4c,5c,6c,7c.  这13种牌每种都有，而且仅有这13种牌。肯定是有一种2张。其他的1张。


首先是枚举18+7=34张牌，加进去构成14张牌，判断胡牌。
胡牌判断如下。
对于第一种情况：枚举每一个对子。然后按照顺序找3张相同或者顺子。如果有三种相同的，构成3张相同的。没有就看能不能和后面的构成顺子。一定要按照顺序从小到大找过去。 1c```7c只能构成3张一样的。然后判断是不是刚好找到4组。
对于第二种情况：就是要每一种牌的数量要么是0，要么是2，这样一定是7个不同的对子了。
对于第三种情况：就是要让这13种牌的数量不等于0，而且其他牌的数量为0；
    Link: http://www.cnblogs.com/kuangbin/archive/2012/10/27/2742985.html
    Result:
****************************************************************/

int cnt[35];

bool judge4X3()
{
    int ret=0;
    int tmp[35];
    for(int i=0;i<34;i++)
        tmp[i]=cnt[i];

    for(int i=0;i<=18;i+=9)
    {
        for(int j=0;j<9;j++)
        {
            if(tmp[i+j]>=3)
            {
                tmp[i+j]-=3;
                ret++;
            }
            while(j+2<9 && tmp[i+j] && tmp[i+j+1] && tmp[i+j+2])
            {
                tmp[i+j]--;
                tmp[i+j+1]--;
                tmp[i+j+2]--;
                ret++;
            }
        }
    }
    for(int j=0;j<7;j++)
    {
        if(tmp[27+j]>=3)
        {
            tmp[27+j]-=3;
            ret++;
        }
    }
    if(ret==4)
        return true;
    return false;
}

bool judge3()
{
    for(int i=0;i<7;i++)
    {
        if(cnt[i+27]==0)
            return false;
    }
    for(int i=0;i<=18;i+=9)
    {
        if(cnt[i]==0 || cnt[i+8]==0)
            return false;
        for(int j=1;j<8;j++)
        {
            if(cnt[i+j]!=0)
                return false;
        }
    }
    return true;
}

bool judge2()
{
    for(int i=0;i<34;i++)
    {
        if(cnt[i]!=2 && cnt[i]!=0)
            return false;
    }
    return true;
}

bool judge1()
{
    for(int i=0;i<34;i++)
    {
        if(cnt[i]>=2)
        {
            cnt[i]-=2;  //枚举对子
            if(judge4X3())
            {
                cnt[i]+=2;
                return true;
            }
            cnt[i]+=2;
        }
    }
    return false;
}

bool judge()
{
    if(judge1() || judge2() || judge3())
        return true;
    return false;
}

int main()
{
    freopen("new.in","r",stdin);

    int T=0;
    char str[10];
    int ans[35],tol;
    scanf("%d",&T);
    while(T--)
    {
        memset(cnt,0,sizeof(cnt));

        for(int i=0;i<13;i++)
        {
            scanf("%s",&str);
            int t=str[0]-'1';
            if(str[1]=='m')
                t+=0;
            else if(str[1]=='s')
                t+=9;
            else if(str[1]=='p')
                t+=18;
            else
                t+=27;
            cnt[t]++;
        }

        tol=0;
        for(int i=0;i<34;i++)
        {
            cnt[i]++;
            if(cnt[i]<=4 && judge())
                ans[tol++]=i;
            cnt[i]--;
        }
        if(tol==0)
            printf("Nooten\n");
        else
        {
            printf("%d",tol);
            for(int i=0;i<tol;i++)
            {
                printf(" %d",(ans[i]%9)+1);
                if(ans[i]/9==0)
                    printf("m");
                else if(ans[i]/9==1)
                    printf("s");
                else if(ans[i]/9==2)
                    printf("p");
                else
                    printf("c");
            }
            cout<<endl;
        }
    }
	return 0;
}

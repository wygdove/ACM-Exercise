#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<queue>
#include<cmath>
#include<string>
#define mem(a,b) memset(a,b,sizeof(a))
#define LL __int64
#define MAX 100010
using namespace std;

struct NODE
{
    LL cnt;
    LL sum;
}dp[2][1010][2];

char str[1010];
int n;
int num[1010];

const int mod = 1000000007;

void add(struct NODE & a ,struct NODE b ,int c)
{
    a.cnt += b.cnt;
    a.cnt %= mod;
    a.sum += (b.sum * 2 + b.cnt * c);
    a.sum %= mod;
}

int main()
{
    num[0] = 1;
    for(int i = 1;i <= 1000;i++)
    {
        num[i] = num[i-1] * 2;
        num[i] %= mod;
    }
    while(~scanf("%d%s",&n,str))
    {
        mem(dp,0);
        int len = strlen(str) ,cnt = 0 ,flag = 0;
        for(int i = 0;i < len;i++)
        {
            if(str[i] == '1')
            {
                cnt++;
            }
        }
        if(cnt == n)
        {
            flag = 1;
        }
        dp[0][0][0].cnt = 1;
        dp[0][1][1].cnt = 1;
        dp[0][0][0].sum = 0;
        dp[0][1][1].sum = 1;
        int now = 1 ,pre = 0;
        for(int i = 1;i < len;i++)
        {
            for(int j = 0;j <= n;j++)
            {
                if(str[i] == '0')
                {
                    add(dp[now][j][0],dp[pre][j][0],0);
                    add(dp[now][j][1],dp[pre][j][1],0);
                    add(dp[now][j+1][0],dp[pre][j][0],1);
                }
                else
                {
                    add(dp[now][j][0],dp[pre][j][0],0);
                    add(dp[now][j][0],dp[pre][j][1],0);
                    add(dp[now][j+1][0],dp[pre][j][0],1);
                    add(dp[now][j+1][1],dp[pre][j][1],1);
                }
            }
            for(int j = 0;j <= n;j++)
            {
                dp[pre][j][0].cnt = dp[pre][j][1].cnt = dp[pre][j][0].sum = dp[pre][j][1].sum =0;
            }
            now ^= 1;
            pre ^= 1;
        }
        LL ans = 0;
        ans += dp[pre][n][0].sum;
        ans += dp[pre][n][1].sum;
        ans %= mod;
        if(flag)
        {
            for(int i = 0;i < len;i++)
            {
                if(str[i] == '1')
                {
                    ans = (ans  - num[len-1-i] + mod) % mod;
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
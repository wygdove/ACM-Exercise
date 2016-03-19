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

int num[MAX] ,flag[MAX];
int n ;

int main()
{
    int cnt = 0;
    for(int i = 2;i <= 10000;i++)
    {
        int fl = 0;
        for(int j = 2;j *j <= i;j++)
        {
            if(i % j == 0)
            {
                fl = 1;
                break;
            }
        }
        if(!fl)
        {
            num[cnt++] = i;
            flag[i] = 1;
        }
    }
    while(~scanf("%d",&n))
    {
        int ans = 0;
        int a ,b ,c;
        for(int i = 0;i < cnt;i++)
        {
            a = num[i];
            if(a >= n)
            {
                break;
            }
            for(int j = i;j < cnt;j++)
            {
                b = num[j];
                if(a + b >= n)
                {
                    break;
                }
                c = n - a - b;
                if(c >= b && flag[c])
                {
                    ans++;
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
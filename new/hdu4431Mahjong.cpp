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
    Ordering: ö��
    Follow: kuangbin
    Thought: ��13���ơ���������Щ�ƿ��Ժ��ơ�

���������¼��������
1��һ������ +  4�� 3����ͬ���ƻ���˳�ӡ�  ֻ��m��s��p�ǿ��Թ���˳�ӵġ������ϱ���������û��˳�ӡ�
2��7����ͬ�Ķ��ӡ�
3��1m,9m,1p,9p,1s,9s,1c,2c,3c,4c,5c,6c,7c.  ��13����ÿ�ֶ��У����ҽ�����13���ơ��϶�����һ��2�š�������1�š�


������ö��18+7=34���ƣ��ӽ�ȥ����14���ƣ��жϺ��ơ�
�����ж����¡�
���ڵ�һ�������ö��ÿһ�����ӡ�Ȼ����˳����3����ͬ����˳�ӡ������������ͬ�ģ�����3����ͬ�ġ�û�оͿ��ܲ��ܺͺ���Ĺ���˳�ӡ�һ��Ҫ����˳���С�����ҹ�ȥ�� 1c```7cֻ�ܹ���3��һ���ġ�Ȼ���ж��ǲ��Ǹպ��ҵ�4�顣
���ڵڶ������������Ҫÿһ���Ƶ�����Ҫô��0��Ҫô��2������һ����7����ͬ�Ķ����ˡ�
���ڵ��������������Ҫ����13���Ƶ�����������0�����������Ƶ�����Ϊ0��
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
            cnt[i]-=2;  //ö�ٶ���
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

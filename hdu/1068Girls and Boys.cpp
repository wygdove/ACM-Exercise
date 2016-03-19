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


#define INF 0x3f3f3f3f
#define MINN -0x3f3f3f3f
#define MAXN 0x3f3f3f3f
#define MOD 10007
#define NUM 502

/* ***********************************************************
����ͼƥ�䣨�������㷨��DFSʵ�֣�(�ڽӾ�����ʽ)
��ʼ����g[][]���߶���Ļ������
����g[i][j]��ʾi->j������߾Ϳ����ˣ���������ұߵ�ƥ��
gû�б��������ʼ��Ϊ0
uN��ƥ����ߵĶ�������vN��ƥ���ұߵĶ�����
���ã�res=hungary();������ƥ����
�ŵ㣺�����ڳ���ͼ��DFS������·��ʵ�ּ���������
ʱ�临�Ӷ�:O(VE)
*************************************************************/
//�����Ŵ�0��ʼ��
int n;
//int uN,vN;//u,v����Ŀ��ʹ��ǰ����븳ֵ
int g[NUM][NUM];//�ڽӾ���
int linker[NUM];
bool used[NUM];

bool dfs(int i)
{
    for(int j = 0; j < n; j++)
        if(g[i][j] && !used[j])
        {
            used[j] = true;
            if(linker[j] == -1 || dfs(linker[j]))
            {
                linker[j] = i;
                return true;
            }
        }
    return false;
}

int hungary()
{
    int res = 0;
    memset(linker,-1,sizeof(linker));
    for(int i = 0; i < n; i++)
    {
        memset(used,false,sizeof(used));
        if(dfs(i))res++;
    }
    return n-res/2;
}

int main()
{
    freopen("hdu.in","r",stdin);
    //freopen("hdu.out","w",stdout);

    //int n;
    int s,t,num;
    while(cin>>n)
    {
        memset(g,0,sizeof(g));

        for(int i=0;i<n;i++)
        {
            scanf("%d: (%d)",&s,&num);
//printf("s=%d,num=%d\n",s,num);
            for(int j=0;j<num;j++)
            {
                scanf("%d",&t);
                g[s][t]=1;
            }
        }

        printf("%d\n",hungary());
    }

    return 0;
}

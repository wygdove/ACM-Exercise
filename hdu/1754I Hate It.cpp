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
#define NUM 200002

int x[NUM];
struct Node
{
    int left,right;
    int maxs;
}tree[NUM<<2];

int getMax(int x[],int left,int right)
{
    int result;
    result=x[left];
    for(int i=left+1;i<=right;i++)
        result=result>x[i]?result:x[i];
    return result;
}

void build(int k,int left,int right)
{
    tree[k].maxs=getMax(x,left,right);
    tree[k].left=left;
    tree[k].right=right;

    if(left==right) return;

    int mid=(left+right)/2;
    build(2*k,left,mid);
    build(2*k+1,mid+1,right);
}

void update(int left,int right,int sco)
{
    int k=1;
    while(tree[k].left!=left || tree[k].right!=right)
    {
        if(tree[2*k].left<=left && tree[2*k].right>=right)
            k=k*2;
        else k=k*2+1;
    }
    tree[k].maxs=sco;
    int temp1,temp2;
    while(k!=1)
    {
        if(k%2==1)
        {
            temp1=tree[k].maxs;
            temp2=tree[k-1].maxs;
            tree[k/2].maxs=temp1>temp2?temp1:temp2;
        }
        else
        {
            temp1=tree[k].maxs;
            temp2=tree[k+1].maxs;
            tree[k/2].maxs=temp1>temp2?temp1:temp2;
        }
        k/=2;
    }
}

int query(int k,int left,int right)
{
    if(left>tree[k].right || right<tree[k].left) return 0;
    if(tree[k].left>=left && tree[k].right<=right) return tree[k].maxs;
    else
    {
        int temp1,temp2;
        temp1=query(2*k,left,tree[2*k].right>right?right:tree[2*k].right);
        temp2=query(2*k+1,tree[2*k+1].left>left?tree[2*k+1].left:left,right);
        return temp1>temp2?temp1:temp2;
    }
}

int main()
{
    freopen("hdu.in","r",stdin);
    //freopen("hdu.out","w",stdout);

    int n,m;
    char ch;
    int a,b;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        for(int i=1;i<=n;i++)
            scanf("%d",&x[i]);
        build(1,1,n);
        for(int i=1;i<=m;i++)
        {
            getchar();
            scanf("%c%d%d",&ch,&a,&b);
            if(ch=='Q') printf("%d\n",query(1,a,b));
            else if(ch=='U') update(a,a,b);
        }
    }

	return 0;
}

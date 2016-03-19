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

#define NUM 100

/*
简单的巴什博弈，有固定好的公式：
要是总数n和最多取得数量m满足公式：
n%(m+1)==0
则该首先取得人就失败；

1、如果n能m+1整除的话，
那么Grass每次给k，那么Rabbit就给(m+1-k)
总能保证Rabbit赢
2、如果n不能被m+1整除，且假设余数为p，
那么只要Grass第一次给p，
那么问题就转化为能被m+1整除的情况，
且Rabblt先给。
根据（1）中结论，Grass总有必胜的策略。
*/


int main()
{
    freopen("hdu.in","r",stdin);

    int C;
    int n,m;
    scanf("%d",&C);
    while(C--)
    {
        scanf("%d%d",&n,&m);
        if(n%(m+1)==0)
            cout<<"Rabbit\n";
        else
            cout<<"Grass\n";
    }

	return 0;
}

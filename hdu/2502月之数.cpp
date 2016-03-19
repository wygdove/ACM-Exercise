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
当n=4时，有：
1000
1001
1010
1011
1100
1101
1110
1111
可以看到。除了第一位剩下的有
000
001
010
011
100
101
110
111
可以数一下，0和1的总个数一半对一半。于是算一下0和1总个数，除以2就好了。
*/
/*

二项式的简单应用：

n大于1时：

a[n]＝1*c(n-1,0)+2*(n-1,1)+.........+n*c(n-1,k-1),  // 1式

a[n]=n*c(n-1,k-1)+(n-1)*c(n-1,k-2)+.......+1*c(n-1,0);    //2式

则a[n]等于1式和2式之和的一半,即a[1]=1,a[n]=(n+1)*pow(2,n-2);

*/

int a[22];

int main()
{
    freopen("hdu.in","r",stdin);

    int T;
    int n;
    int i;
    a[0]=1;
    a[1]=1;
    for(i=2;i<22;i++)
        a[i]=(i+1)*pow(2,i-2);//记得G++的pow有精度误差，使用c++提交
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        printf("%d\n",a[n]);
    }

	return 0;
}

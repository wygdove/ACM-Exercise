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
��n=4ʱ���У�
1000
1001
1010
1011
1100
1101
1110
1111
���Կ��������˵�һλʣ�µ���
000
001
010
011
100
101
110
111
������һ�£�0��1���ܸ���һ���һ�롣������һ��0��1�ܸ���������2�ͺ��ˡ�
*/
/*

����ʽ�ļ�Ӧ�ã�

n����1ʱ��

a[n]��1*c(n-1,0)+2*(n-1,1)+.........+n*c(n-1,k-1),  // 1ʽ

a[n]=n*c(n-1,k-1)+(n-1)*c(n-1,k-2)+.......+1*c(n-1,0);    //2ʽ

��a[n]����1ʽ��2ʽ֮�͵�һ��,��a[1]=1,a[n]=(n+1)*pow(2,n-2);

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
        a[i]=(i+1)*pow(2,i-2);//�ǵ�G++��pow�о�����ʹ��c++�ύ
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        printf("%d\n",a[n]);
    }

	return 0;
}

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
�򵥵İ�ʲ���ģ��й̶��õĹ�ʽ��
Ҫ������n�����ȡ������m���㹫ʽ��
n%(m+1)==0
�������ȡ���˾�ʧ�ܣ�

1�����n��m+1�����Ļ���
��ôGrassÿ�θ�k����ôRabbit�͸�(m+1-k)
���ܱ�֤RabbitӮ
2�����n���ܱ�m+1�������Ҽ�������Ϊp��
��ôֻҪGrass��һ�θ�p��
��ô�����ת��Ϊ�ܱ�m+1�����������
��Rabblt�ȸ���
���ݣ�1���н��ۣ�Grass���б�ʤ�Ĳ��ԡ�
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

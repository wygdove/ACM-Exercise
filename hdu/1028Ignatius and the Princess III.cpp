
/*
#include<iostream>
using namespace std;

int main()
{
	int n;
	int p;
	int i,j,k;
	return 0;
}

*/





//整数拆分（母函数）
#include<iostream>
using namespace std;

int main()
{
    int c1[125],c2[125];
    int n;
	int i,j,k;
    while(cin>>n)
    {
        for(i=0;i<=n;i++)	//初始化第一个表达式的系数
        {
            c1[i]=1;
            c2[i]=0;
        }
        for(i=2;i<=n;i++)
        {						//从第二个表达式开始，因为有无限制个，所以有n个表达式
            for(j=0;j<=n;j++)
            {						//从累乘的表达式后的一个表达式第一个到最后一个
                for(k=0;k+j<=n;k+=i)
                {						//k为第j个变量的指数，第i个表达式每次累加i
                    c2[j+k]+=c1[j];
                }
            }
            for(j=0;j<=n;j++)
            {					//滚动数组算完一个表达式后更新一次
                c1[j]=c2[j];
                c2[j]=0;
            }
        }
		cout<<c1[n]<<endl;
    }
    return 0;
}

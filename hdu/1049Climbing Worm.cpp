#include<iostream>
using namespace std;

int main()
{
	int n,u,d;
	int x;
	int min;
	while(cin>>n>>u>>d && n)
	{
		x=0;	//初始化
		min=1;
		while(1)	//模拟爬虫过程
		{
			x=x+u;	//每次爬u英寸
			if(x>=n)	//判断是否爬出去了
				break;
			min++;	//每次爬u英寸一分钟
			x=x-d;	//每次休息下滑d英寸
			min++;	//每次休息一分钟
		}
		cout<<min<<endl;
	}
	return 0;
}


/*
一只虫在n英寸的井中，
它每次每分钟能爬u英寸，
然后休息一分钟，
休息中向下滑d英寸，
这只虫爬出井需要几分钟？
如果虫子刚好到达井边，就认为它出去了。

输入
多个测试，
输入n，u，d，
n==0 结束
*/
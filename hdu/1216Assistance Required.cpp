/*
#include<iostream>
using namespace std;

int s[1000001];

int main()
{
	//处理数组
	int i;
	for(i=0;i<1000001;i++)
		s[i]=i+2;
	for(i=0;i<1000001;i++)
	{
		for(j=0;j<
	}


	//处理n
	int n;
	while(cin>>n)
	{
		if(n==0)
			return 0;
		else
		{
			if(n>=1 && n<=3000)
			{
				cout<<s[n]<<endl;
			}
		}
	}
	return 0;
}
*/

#include<iostream>
#include<stack>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

typedef int ElemType;
typedef struct LNode
{
	ElemType date;
	struct LNode *next;
}LNode;

Lnode* build()
{
	int i=1;
	int n;	// n 链表长度
	LNode *L,*p;	// L 头指针
	L=(LNode *)malloc(sizeof(LNode));	//为头结点开辟空间
	p=L;
	cin>>n;	//输入链表长度
	L->date=n;
}




int main()
{
	//
	return 0;
}

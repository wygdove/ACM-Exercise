/*
#include<iostream>
using namespace std;

int s[1000001];

int main()
{
	//��������
	int i;
	for(i=0;i<1000001;i++)
		s[i]=i+2;
	for(i=0;i<1000001;i++)
	{
		for(j=0;j<
	}


	//����n
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
	int n;	// n ������
	LNode *L,*p;	// L ͷָ��
	L=(LNode *)malloc(sizeof(LNode));	//Ϊͷ��㿪�ٿռ�
	p=L;
	cin>>n;	//����������
	L->date=n;
}




int main()
{
	//
	return 0;
}

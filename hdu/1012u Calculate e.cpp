#include<iostream>
using namespace std;

int main()
{
	double x;
	double sum;
	int i;
	cout<<"n e\n"
		<<"- -----------\n";
	cout<<"0 1\n1 2\n2 2.5\n";
	x=0.5;
	sum=2.5;
	for(i=3;i<10;i++)
	{
		x*=1.0/i;
		sum+=x;
		printf("%d %.9lf\n",i,sum);
	}
	return 0;
}
/*
#include<stdio.h>
int main()
{
    int i;
    double x,sum;
    sum=2.5;
    x=0.5;
    printf("n e\n- -----------\n");
    printf("0 1\n1 2\n2 2.5\n");
    for (i=3;i<10;i++)
    {
        x*=1.0/i;
        sum+=x;
        printf("%d %.9lf\n",i,sum);
    }
}*/
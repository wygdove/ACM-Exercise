#include<iostream>
using namespace std;

int a[10010];
int dp[10010];

int max(int a,int b)
{
	return a>b?a:b;
}

int main()
{
	int K;
	int max1,max2;
	int begin,end;
	bool bl;
	int i;
	while(cin>>K && K)
	{
		for(i=0;i<K;i++)
			scanf("%d",&a[i]);

		bl=true;	//整个序列为负
		for(i=0;i<K;i++)
		{
			if(a[i]>=0)
				bl=false;
		}
		if(bl)
		{
			cout<<"0 "<<a[0]<<" "<<a[K-1]<<endl;
			continue;
		}

		//memset(dp,0,sizeof(dp));
		dp[0]=0;

		max1=-1e10;
		for(i=0;i<K;i++)
		{
			dp[i]=max(dp[i-1]+a[i],a[i]);
			if(max1<dp[i])
			{
				max1=dp[i];
				end=i;
			}
		}
		for(max2=0,i=end;i>=0;i--)
		{
			max2+=a[i];
			if(max2==max1)
			{
				begin=i;
				break;
			}
		}

		cout<<max1<<" "<<a[begin]<<" "<<a[end]<<endl;
	}
	return 0;
}

















/*
//Memory Limit Exceeded
//二维数组开的过大
#include<iostream>
using namespace std;

int a[10010];
int b[10010][10010];

int main()
{
	int K;
	int sum;
	int begin,end;
	bool bl;
	int i,j,k;
	while(cin>>K && K)
	{
		for(i=0;i<K;i++)
			scanf("%d",&a[i]);

		bl=true;	//整个序列为负
		for(i=0;i<K;i++)
		{
			if(a[i]>=0)
				bl=false;
		}
		if(bl)
		{
			cout<<"0 "<<a[0]<<" "<<a[K-1]<<endl;
			continue;
		}

		memset(b,0,sizeof(b));
		for(i=0;i<K;i++)
		{
			for(j=i;j<K;j++)
			{
				for(k=i;k<=j;k++)
				{
					b[i][j]=a[k];
				}
				//cout<<"b["<<i<<"]["<<j<<"]="<<b[i][j]<<endl;
			}
		}

		//cout<<endl;
		sum=0;
		begin=0;
		end=0;
		
		for(i=0;i<K;i++)
		{
			for(j=i;j<K;j++)
			{
				if(sum<=b[i][j])
				{
					sum=b[i][j];
					begin=a[i];
					end=a[j];
				}
			}
		}

		cout<<sum<<" "<<begin<<" "<<end<<endl; 
	}
	return 0;
}
*/


/*
//wrong
//尝试一维
#include<iostream>
using namespace std;

int a[10010];
int b[50010];

int main()
{
	int K;
	int sum;
	int begin,end;
	bool bl;
	int i,j,k;
	while(cin>>K && K)
	{
		for(i=0;i<K;i++)
			scanf("%d",&a[i]);

		bl=true;	//整个序列为负
		for(i=0;i<K;i++)
		{
			if(a[i]>=0)
				bl=false;
		}
		if(bl)
		{
			cout<<"0 "<<a[0]<<" "<<a[K-1]<<endl;
			continue;
		}

		sum=0;
		memset(b,0,sizeof(b));
		for(k=0;k<(K*(K+1))/2;k++)
		{
			for(i=0;i<K;i++)
			{
				for(j=i;j<K;j++)
				{
					b[k]+=a[j];
				}
			}
			if(sum<=b[k])
			{
				sum=b[k];
				begin=a[i];
				end=a[j];
			}
		}

		cout<<sum<<" "<<begin<<" "<<end<<endl; 
	}
	return 0;
}
*/

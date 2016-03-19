//���鼯����
#include <iostream>
using namespace std;

int parent[10000001],rank[10000001],mymax;

void make_set()
{
    int i;
    for(i=1;i<10000001;i++)
    {
        parent[i]=i;
        rank[i]=1;
    }
}

int find(int x)
{
	if(x!=parent[x])
		parent[x]=find(parent[x]);
	return parent[x];
}

void union_set(int x,int y)
{
    x=find(x);
    y=find(y);
    if(x!=y)
    {
        if(rank[x]<rank[y])
        {
            parent[x]=y;
            rank[y]+=rank[x];
            mymax=rank[y]>mymax?rank[y]:mymax;
        }
        else
        {
            parent[y]=x;
            rank[x]+=rank[y];
            mymax=rank[x]>mymax?rank[x]:mymax;
        }
    }
}

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
        {
            cout<<"1"<<endl;
            continue;
        }
        int a,b,i;
        make_set();
        mymax=0;
        for(i=0;i<n;i++)
        {
            cin>>a>>b;
            union_set(a,b);
        }
        cout<<mymax<<endl;
    }
    return 0;
}



/*
#include<stdio.h>
#include<cstring>
#include<iostream>
using namespace std;
int set[2005];
int opp[2005];
int find(int x)
{
    if(x==set[x]) return x;
    return find(set[x]);
}
void merge(int a,int b)
{
    set[find(a)]=find(b);
}
int main(void)
{
    int t,n,m;
    int x,y,k=1;
    scanf("%d",&t);
    while(t--)
    {
        int flag=0;
        memset(opp,0,sizeof(opp));
        scanf("%d%d",&n,&m);
        for(int i=1;i<=n;i++) set[i]=i;
        for(int i=0;i<m;i++){
            scanf("%d%d",&x,&y);    //ÿ����һ�����ݣ�����������жϺʹ���
            if(!flag){
                if(opp[x]==0 && opp[y]==0){   //x��y���ǵ�һ�γ��֣�
                    opp[x]=y;opp[y]=x;
                }
                /*yǰ���ѳ��ֹ���x�ǵ�һ�γ��֣�x��y���ԣ�opp[y]��y���ԣ�
                ��x��opp[y]ͬ�ԣ���x��opp[y]�ŵ�һ��������*
                else if(opp[x]==0){
                    opp[x]=y;merge(x,opp[y]);
                }
                /*xǰ���ѳ��ֹ���y�ǵ�һ�γ��֣�x��y���ԣ�opp[x]��x���ԣ�
                ��y��opp[x]ͬ�ԣ���y��opp[x]�ŵ�һ��������*
                else if(opp[y]==0){
                    opp[y]=x;merge(y,opp[x]);
               }
               /*x��yǰ���Ѿ������ֹ��������ٶ�opp[x]��opp[y]���ã�ֻ���ж�x��y��
               ����һ�������У�����һ��������,��find(x)==find(y),��ôx��y����ͬ�Եģ�
               ��ʱ��flag��Ϊ1��������x��y����һ�������У���x��y����ͬ�Եģ�y��opp[x]
               ͬ�ԣ���y��opp[x]����һ�������У�ͬ����x��opp[y]����һ�������У�*
               else{
                    if(find(x)==find(y)) {flag=1;}
                    merge(y,opp[x]);merge(x,opp[y]);
                }
            }
        }
        printf("Scenario #%d:\n",k++);
        if(flag) printf("Suspicious bugs found!\n");   //flag==1����ʾ����ͬ����
        else printf("No suspicious bugs found!\n");
        printf("\n");
    }
    return 0;
}
*/

//并查集例题
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
            scanf("%d%d",&x,&y);    //每输入一行数据，进行下面的判断和处理
            if(!flag){
                if(opp[x]==0 && opp[y]==0){   //x和y都是第一次出现，
                    opp[x]=y;opp[y]=x;
                }
                /*y前面已出现过，x是第一次出现，x和y异性，opp[y]和y异性，
                则x和opp[y]同性，把x和opp[y]放到一个集合中*
                else if(opp[x]==0){
                    opp[x]=y;merge(x,opp[y]);
                }
                /*x前面已出现过，y是第一次出现，x和y异性，opp[x]和x异性，
                则y和opp[x]同性，把y和opp[x]放到一个集合中*
                else if(opp[y]==0){
                    opp[y]=x;merge(y,opp[x]);
               }
               /*x和y前面已经都出现过，不需再对opp[x]和opp[y]设置，只需判断x和y是
               否在一个集合中，若在一个集合中,即find(x)==find(y),那么x和y就是同性的，
               这时把flag置为1，否则，若x和y不在一个集合中，则x和y不是同性的，y和opp[x]
               同性，把y和opp[x]并到一个集合中，同理，把x和opp[y]并到一个集合中，*
               else{
                    if(find(x)==find(y)) {flag=1;}
                    merge(y,opp[x]);merge(x,opp[y]);
                }
            }
        }
        printf("Scenario #%d:\n",k++);
        if(flag) printf("Suspicious bugs found!\n");   //flag==1，表示存在同性恋
        else printf("No suspicious bugs found!\n");
        printf("\n");
    }
    return 0;
}
*/

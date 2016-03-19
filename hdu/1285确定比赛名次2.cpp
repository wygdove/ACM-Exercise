#include<stdio.h>
#include<string.h>
int g[501][501]; //邻接矩阵 
int n,m,top; 
int vis[501]; //标记访问过了没
int index[501];//标记入度
void init() 
{ 
 int i; 
 int a,b; 
	memset(vis,0,sizeof(vis));
	memset(index,0,sizeof(index));
	memset(g,0,sizeof(g));
	
    for(i=1;i<=m;i++)
    { 
        scanf("%d %d",&a,&b);
        if(!g[a][b])// 因为有可能出现重边，所以前面初始为0
        {
			g[a][b]=1; 
            index[b]++; //b的入度加1因为a是大于b的即a指向b从a到b(b是弧尾)；
        } 
    } 
}
void topsort()
{ 
    int i,j;
    while(top<n)//设置top是为了控制数据之间的空格
    { 
		for(i=1;i<=n;i++)//index标记入度//visit标记访问过了没
			if(index[i]==0&&!vis[i]) //每一次都可以找到入度为0的点 
				break; //入度为0，并且i最小，一定可以排在最前面 
			vis[i]=1;
		if(top)
			printf(" "); 
		printf("%d",i); 
		top++;
		for(j=1;j<=n;j++)
		{
			if(g[i][j])
				index[j]--;//把以i为起点j为终点的入度减1 
		}
	} 
}
int main()
{ 
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        init();  //调用函数进行数据的输入以及初始化数组；
        top=0;//设置一个top是为了控制数据之间的空格；（第一个数据前面没有多余的空格，最后一个数据之后也没有多余的空格）
		topsort();//调用函数进行拓扑排序；
        printf("\n");//调用结束后有一个空行哦
   }
    return 0; 
} 

 

重新写了下，感悟挺多的（参考别人的）。。2012.7.23

#include<stdio.h>
#include<string.h>
int map[502][502],indegree[502],n,m,pur[502];
void topsort()
{
    int i,j,k=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(indegree[j]==0)//当入度为0时
            {
                indegree[j]--;//入度-1
                pur[k++]=j;//
                for(int x=1;x<=n;x++)
                {
                    if(map[j][x])//以该顶点为弧尾的度数-1
                        indegree[x]--;
                }
                break;//这个还不能少，当把该顶点的相关弧尾的入度-1全部处理完后要进行下一个
            }
       
        }
    }
}
int main()
{
    int i;
    while(scanf("%d %d",&n,&m)!=EOF)//输入n,m(n表示队伍的个数，m表示接着有m行的输入数据)
    {
        memset(map,0,sizeof(map));//清零
        memset(indegree,0,sizeof(indegree));
        int a,b;
        for(i=1;i<=m;i++)//m表示接着有m行的输入数据
        {
            scanf("%d %d",&a,&b);
            if(!map[a][b])//一开始都是没有访问过的[memset(map,0,sizeof(map));//清零]
            {
                map[a][b]=1;//标记访问过了
                indegree[b]++;//弧尾（b）入度+1
            }
        }
        topsort();//进行拓扑排序
        for(i=1;i<=n;i++)
        {
            if(i!=n)//最后一个数的后面没有空格
                printf("%d ",pur[i]);
            else
                printf("%d\n",pur[i]);
        }
    }
    return 0;
}
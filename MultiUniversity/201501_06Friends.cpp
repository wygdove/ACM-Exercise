//#include<iostream>
//#include<memory.h>
//#include<fstream>
//#include<string>
//#include<algorithm>
//#include<math.h>
//#include<stack>
//#include<queue>
//#include<set>
//#include<map>
//#include<vector>
//#include<stdio.h>
//#include<stdlib.h>
//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//#include<cmath>
//
//using namespace std;
//
//typedef long long LL;
//typedef long double real;
//typedef vector<int> VI;
//
//
///**************************************************************
//    Problem:
//    Ordering:
//    Thought:
//    Result:
//****************************************************************/
//
//
//#define INF 0x3f3f3f3f
//#define MINN -0x3f3f3f3f
//#define MAXN 0x3f3f3f3f
//#define MOD 10007
//#define NUM 10
//
//int n,m;
//int g[NUM][NUM];
//
//
///* ***********************************************************
////����ͼƥ�䣨�������㷨��DFSʵ�֣�(�ڽӾ�����ʽ)
////��ʼ����g[][]���߶���Ļ������
////����g[i][j]��ʾi->j������߾Ϳ����ˣ���������ұߵ�ƥ��
////gû�б��������ʼ��Ϊ0
////uN��ƥ����ߵĶ�������vN��ƥ���ұߵĶ�����
////���ã�res=hungary();������ƥ����
////�ŵ㣺�����ڳ���ͼ��DFS������·��ʵ�ּ���������
////ʱ�临�Ӷ�:O(VE)
////*************************************************************/
////�����Ŵ�0��ʼ��
//int uN,vN;//u,v����Ŀ��ʹ��ǰ����븳ֵ
//int g[NUM][NUM];//�ڽӾ���
//int linker[NUM];
//bool used[NUM];
//bool dfs(int u)
//{
//    for(int v = 0; v < vN; v++)
//        if(g[u][v] && !used[v])
//        {
//            used[v] = true;
//            if(linker[v] == -1 || dfs(linker[v]))
//            {
//                linker[v] = u;
//                return true;
//            }
//        }
//    return false;
//}
//int hungary()
//{
//    int res = 0;
//    memset(linker,-1,sizeof(linker));
//    for(int u = 0; u < uN; u++)
//    {
//        memset(used,false,sizeof(used));
//        if(dfs(u))res++;
//    }
//    return res;
//}
//
//int main()
//{
//    freopen("mu.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int T;
//    int x,y;
//    scanf("%d",&T);
//    while(T--)
//    {
//        scanf("%d%d",&n,&m);
//        if(m==0) {printf("1\n");continue;}
//
//        memset(g,0,sizeof(g));
//        for(int i=0;i<m;i++)
//        {
//            scanf("%d%d",&x,&y);
//            g[x][y]++;
//        }
//    }
//
//	return 0;
//}

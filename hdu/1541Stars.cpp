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
//typedef __int64 INT;
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
//#define NUM 32010
//
//int c[32010];
//int a[15010];
//int sum(int i) //����ǰi��Ԫ�غ�
//{
//       int s=0;
//       while(i>0)
//       {
//              s+=c[i];
//              i-=i&(-i);
//       }
//       return s;
//}
//void update(int i,int value)  //i���ĸı�ֵΪvalue
//{
//       while(i<=NUM)///i<=n Wrong
//       {
//              c[i]+=value;
//              i+=i&(-i);
//       }
//}
//
///**
//��Ŀ��˼����˵��
//����һ��star maps��ÿ��star���Լ���level��
//level����������ģ�
//��Let the level of a star be an amount of the stars that are not higher and not to the right of the given star.��
//ͳ�����star���½�star�ĸ������������star��level��
//����Ҫ���ܼ�ͼ��level��0��N-1��star�ֱ��ж��ٸ���
//
////��Ϊy������,���Ժ�����С��x�ģ������˺ܾã����е㶼����,���ǽ������Ĺؼ���
//scanf("%d%d",&x,&y);    //�±���ܴ�0��ʼ������Ҫx+1
//a[sum(x+1)]++;       //���������С��x������stars����������¼��a��
//updata(x+1,1);          //��������
//*/
//
//int main()
//{
//    freopen("hdu.in","r",stdin);
//    //freopen("hdu.out","w",stdout);
//
//    int n;
//    int x,y;
//    while(scanf("%d",&n)!=EOF)
//    {
//        memset(a,0,sizeof(a));
//        memset(c,0,sizeof(c));
//
//        for(int j=0;j<n;j++)
//        {
//            scanf("%d%d",&x,&y);
//            a[sum(x+1)]++;
//            update(x+1,1);
//        }
//        for(int j=0;j<n;j++)
//            printf("%d\n",a[j]);
//    }
//
//	return 0;
//}
//

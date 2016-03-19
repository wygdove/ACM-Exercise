//#include<iostream>
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
//#define NUM 102
//
//
//
//
//const int base = 10000; // (base^2) fit into int
//const int width = 4; // width = log base
//const int N = 1000; // n * width: 可表示的最大位数
//struct bint
//{
//    int ln, v[N];
//    bint (int r = 0)   // r应该是字符串！
//    {
//        for (ln = 0; r > 0; r /= base) v[ln++] = r % base;
//    }
//    bint& operator = (const bint& r)
//    {
//        memcpy(this, &r, (r.ln + 1) * sizeof(int));// !
//        return *this;
//    }
//};
//bint operator / (const bint& a, const bint& b)
//{
//    // ! b != 0
//    bint tmp, mod, res;
//    int i, lf, rg, mid;
//    mod.v[0] = mod.ln = 0;
//    for (i = a.ln - 1; i >= 0; i--)
//    {
//        mod = mod * base + a.v[i];
//        for (lf = 0, rg = base -1; lf < rg; )
//        {
//            mid = (lf + rg + 1) / 2;
//            if (b * mid <= mod) lf = mid;
//            else rg = mid - 1;
//        }
//        res.v[i] = lf;
//        mod = mod - b * lf;
//    }
//    res.ln = a.ln;
//    while (res.ln > 0 && res.v[res.ln - 1] == 0) res.ln--;
//    return res; // return mod 就是%运算
//}
//int digits(bint& a) // 返回位数
//{
//    if (a.ln == 0) return 0;
//    int l = ( a.ln - 1 ) * 4;
//    for (int t = a.v[a.ln - 1]; t; ++l, t/=10) ;
//    return l;
//}
//bool read(bint& b, char buf[]) // 读取失败返回0
//{
//    if (1 != scanf("%s", buf)) return 0;
//    int w, u, ln = strlen(buf);
//    memset(&b, 0, sizeof(bint));
//    if ('0' == buf[0] && 0 == buf[1]) return 1;
//    for (w = 1, u = 0; ln; )
//    {
//        u += (buf[--ln] - '0') * w;
//        if (w * 10 == base)
//        {
//        }
//        else w *= 10;
//    }
//    if (w != 1) b.v[b.ln++] = u;
//    return 1;
//}
//void write(const bint& v)
//{
//    int i;
//    printf("%d", v.ln == 0 ? 0 : v.v[v.ln - 1]);
//    for (i = v.ln - 2; i >= 0; i--)
//        printf("%04d", v.v[i]); // ! 4 == width
//    printf("\n");
//}
//
//
//
//int main()
//{
//    freopen("bc.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int T;
//    int n;
//    bool ans;
//    string sa,sb;
//    scanf("%d",&T);
//    while(T--)
//    {
//        memset(a,'\0',sizeof(a));
//        memset(b,'\0',sizeof(b));
//        ans=true;;
//
//        scanf("%d",&n);
//        for(int i=0;i<n;i++)scanf("%s",&a[i]);
//        if(n==1){printf("Yes\n");continue;}
//        for(int i=0;i<n-1;i++)
//        {
//            Div(a[i],a[i+1],b[i]);
//        }
////for(int i=0;i<n-1;i++)printf("%s ",b[i]);printf("\n");
//        for(int i=0;i<n-2;i++)
//        {
//            sa=b[i];sb=b[i+1];
//            if(sa!=sb)
//            {
//                ans=false;
//                break;
//            }
//        }
//        if(ans)printf("Yes\n");
//        else printf("No\n");
//    }
//
//	return 0;
//}

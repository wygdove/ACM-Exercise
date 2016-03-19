#include<iostream>
#include<memory.h>
using namespace std;

struct Bone
{
    int v;  //value
    int w;  //volume (weight)
}b[1010];

int f[1010];

int main()
{
    int T;
    int N,V;
    int i,j;
    cin>>T;
    while(T--)
    {
        cin>>N>>V;
        /*
        for(i=1;i<=N;i++)      //3 wrong
        {
            cin>>b[i].v>>b[i].w;
        }   //第二次输入错误，第一次是将v与w弄反了
        */
        for(i=1;i<=N;i++)
            cin>>b[i].v;
        for(i=1;i<=N;i++)
            cin>>b[i].w;

        memset(f,0,sizeof(f));

        for(i=1;i<=N;i++)
        {
            for(j=V;j>=b[i].w;j--)  //2 j>=b[i].v   //4 j>=b[i].w   //5
            {   //j的变化量是耗用背包容量的值
                f[j]=max(f[j],f[j-b[i].w]+b[i].v);  //1 f[j-b[i].v]+b[i].w  //3 f[j-b[i].w]+b[i].v
            }
        }       // for中j>=b[i].w一定要和下边f[j-b[i].w]对应
        /*
        for(i=1;i<=V;i++)
            cout<<"f["<<i<<"]="<<f[i]<<endl;
        */  //贡献WA 交代码时一定不能忘记
        cout<<f[V]<<endl;
    }
    return 0;
}

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
        }   //�ڶ���������󣬵�һ���ǽ�v��wŪ����
        */
        for(i=1;i<=N;i++)
            cin>>b[i].v;
        for(i=1;i<=N;i++)
            cin>>b[i].w;

        memset(f,0,sizeof(f));

        for(i=1;i<=N;i++)
        {
            for(j=V;j>=b[i].w;j--)  //2 j>=b[i].v   //4 j>=b[i].w   //5
            {   //j�ı仯���Ǻ��ñ���������ֵ
                f[j]=max(f[j],f[j-b[i].w]+b[i].v);  //1 f[j-b[i].v]+b[i].w  //3 f[j-b[i].w]+b[i].v
            }
        }       // for��j>=b[i].wһ��Ҫ���±�f[j-b[i].w]��Ӧ
        /*
        for(i=1;i<=V;i++)
            cout<<"f["<<i<<"]="<<f[i]<<endl;
        */  //����WA ������ʱһ����������
        cout<<f[V]<<endl;
    }
    return 0;
}

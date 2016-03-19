#include<iostream>
#include<fstream>
#include<memory.h>
#include<math.h>
#include<algorithm>
#include<string>
#include<map>
#include<set>
#include<stack>
#include<queue>
#include<vector>
#include<stdio.h>
#include<stdlib.h>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>

using namespace std;

#define NUM 100

int a[110];

int main()
{
    freopen("in.in","r",stdin);

    int N;
    int zerocnt;
    int minodd;
    long ans;
    bool bl;
    bool bl2;
    int cnt;
    int i;
    while(scanf("%d",&N)!=EOF)
    {
        memset(a,0,sizeof(a));

        for(i=1;i<=N;i++)
            scanf("%d",&a[i]);

        sort(a+1,a+N+1);
//for(i=1;i<=N;i++)
//cout<<"a["<<i<<"]="<<a[i]<<endl;

        i=1;
        minodd=0;
        while(a[i]%2==0 && i<=N)
        {
            i++;
        }
        minodd=a[i];
//cout<<"minodd="<<minodd<<endl;

        if(minodd==0)
        {
            cout<<"-1\n";
            continue;
        }

        zerocnt=0;
        for(i=1;i<=N;i++)
        {
            if(a[i]==0)
                zerocnt=i;
        }
//cout<<"zerocnt="<<zerocnt<<endl;

        bl=true;
        bl2=true;
        cnt=0;
        for(i=N;i>0;i--)
        {
            if(a[i]==0)
                continue;
//注意minodd可能有多个
            if(bl && a[i]==minodd)
            {
                bl=false;
                cnt++;
                continue;
             }
            cout<<a[i];
            bl2=false;
        }
        if(bl2 || cnt<1)
        {
            cout<<"-1\n";
            continue;
        }
        for(i=1;i<=zerocnt;i++)
            cout<<"0";
        cout<<minodd;
        cout<<endl;
    }
    return 0;
}
/*
input
3
0 1 3
3
5 4 2
3
2 4 6
5
1 0 0 0 0
5
1 1 0 0 0
2
0 1
1
5

output
301
425
-1
-1  //wrong
10001
-1  //wrong
-1  //wrong

hack

input
2
0 1
5
1 0 0 0 0
5
1 1 0 0 0
1
5

output
-1
-1
10001
-1

*/

/*
#include<iostream>
#include<fstream>
#include<memory.h>
#include<math.h>
#include<algorithm>
#include<string>
#include<map>
#include<set>
#include<stack>
#include<queue>
#include<vector>
#include<stdio.h>
#include<stdlib.h>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>

using namespace std;

#define NUM 100

int a[110];

int main()
{
    freopen("in.in","r",stdin);

    int N;
    int zerocnt;
    int minodd;
    long ans;
	bool bl;
    int i;
    while(scanf("%d",&N)!=EOF)
    {
        memset(a,0,sizeof(a));

        for(i=1;i<=N;i++)
            scanf("%d",&a[i]);

        sort(a+1,a+N+1);
//for(i=1;i<=N;i++)
//cout<<"a["<<i<<"]="<<a[i]<<endl;

        i=1;
        minodd=0;
        while(a[i]%2==0 && i<=N)
        {
            i++;
        }
        minodd=a[i];
//cout<<"minodd="<<minodd<<endl;

        if(minodd==0)
        {
            cout<<"-1\n";
            continue;
        }

        zerocnt=0;
        for(i=1;i<=N;i++)
        {
            if(a[i]==0)
                zerocnt=i;
        }
//cout<<"zerocnt="<<zerocnt<<endl;

        ans=0;
		bl=false;
        for(i=N;i>0;i--)
        {
            if(a[i]==0)
			{
				//ans*=pow(10,i-1);
                continue;
			}
            if(bl==false && a[i]==minodd)
			{
				bl=true;
                //continue;
			}
            ans+=pow(10,i-1)*a[i];
        }
		if(a[N]==minodd)
			ans*=10;
        ans+=minodd;
        cout<<ans;
        cout<<endl;
    }
    return 0;
}

/*
        for(i=N;i>0;i--)
        {
            if(a[i]==0)
                continue;
            if(a[i]==minodd)
                continue;
            cout<<a[i];
        }
        for(i=1;i<=zerocnt;i++)
            cout<<"0";
        cout<<minodd;

*/

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
//#define NUM 100
//#define MOD 10007
//
///**************************************************************
//    Problem:
//    Ordering:
//    Thought:
//    Result:
//****************************************************************/
///**
//input
//
//1
//ADD R1,R2
//0
//0000010000100010
//0
//1111111111111111
//1
//SET R10
//0
//0001100101000000
//0
//0000000000000000
//
//0
//0000010000100010
//0
//0000100001100000
//0
//0000110000000110
//0
//0001000000000000
//0
//0001100000000000
//0
//0001100000000001
//0
//0001100000100000
//
//
//output
//
//
//0000010000100010
//ADD R1,R2
//Error!
//0001100101000000
//SET R10
//Error!
//ADD R1,R2
//Error!
//Error!
//Error!
//Error!
//Error!
//SET R1
//**/
//
//
//
//char snum[32][6]={{"00000"},{"00001"},{"00010"},{"00011"},{"00100"},{"00101"},{"00110"},{"00111"},{"01000"},
//                    {"01001"},{"01010"},{"01011"},{"01100"},{"01101"},{"01110"},{"01111"},{"10000"},{"10001"},
//                    {"10010"},{"10011"},{"10100"},{"10101"},{"10110"},{"10111"},{"11000"},{"11001"},{"11010"},
//                    {"11011"},{"11100"},{"11101"},{"11110"},{"11111"}};
//int sn[16];
//
//int main()
//{
//    freopen("Bestcoder.in","r",stdin);
//
//    int bl;
//    string s,r;
//    int a,b;
//    while(scanf("%d",&bl)!=EOF)
//    {
//        if(bl==1)
//        {
//            cin>>s;
//            cin>>r;
//
////a=r[1]-'0';
///**wrong10两位数情况,一定要认真看输出是否正确啊啊啊*/
///***如何提取a,b？？？***/
//
///*wangwenbo
//int t=0;
//int lenr=r.length();
//for(int i=0;i<lenr;++i)
//{
//    if(r[i]<='9' && r[i]>='0')
//        a=a*10+r[i]-'0';
//    if(r[i]==',')
//    {
//        t=i;
//        break;
//    }
//}
//if(t)
//{
//    for(int i=t;i<lenr;++i)
//        if(r[i]<='9' && r[i]>='0')
//            b=b*10+r[i]-'0';
//}*/
//
//a=0;b=0;
//bool flag=true;
//
//for(int i=0;i<r.length();i++)
//{
//    if(flag && r[i]>='0' && r[i]<='9')
//        a=a*10+(r[i]-'0');
//    if(r[i]==',')
//        flag=false;
//    if(!flag && r[i]>='0' && r[i]<='9')
//        b=b*10+(r[i]-'0');
//}
////cout<<"a="<<a<<" b="<<b<<endl;
//
//if(a<1 || a>31 || (s!="SET")&&(b<1 || b>31))
//{
//    printf("Error!\n");
//    continue;
//}
//
//            if(s=="SET")
//            {
//                printf("000110");
//                printf("%s00000\n",snum[a]);
//                continue;
//            }
//
////cout<<"s="<<s<<endl<<"r="<<r<<endl;
//
//            //b=r[4]-'0';
////cout<<"a="<<a<<"b="<<b<<endl;
//            if(s=="ADD")
//            {
//                printf("000001");
//            }
//            else if(s=="SUB")
//            {
//                printf("000010");
//            }
//            else if(s=="DIV")
//            {
//                printf("000011");
//            }
//            else if(s=="MUL")
//            {
//                printf("000100");
//            }
//            else if(s=="MOVE")
//            {
//                printf("000101");
//            }
//            else
//            {
//                printf("Error!\n");
//                continue;
//            }
//            //cout<<snum[a];
//            //cout<<snum[b];
//            //cout<<endl;
//            printf("%s%s\n",snum[a],snum[b]);
//            //for(int i=0;i<5;i++)
//               // printf("%c",snum[a][i]);
//        }
//        else if(bl==0)
//        {
//            cin>>s;
////cout<<"nums="<<s<<endl;
//            for(int i=0;i<s.length();i++)
//                sn[i]=s[i]-'0';
//            int x=0,y=0,z=0;
//            x=sn[0]*32+sn[1]*16+sn[2]*8+sn[3]*4+sn[4]*2+sn[5]*1;
//            y=sn[6]*16+sn[7]*8+sn[8]*4+sn[9]*2+sn[10]*1;
//            z=sn[11]*16+sn[12]*8+sn[13]*4+sn[14]*2+sn[15]*1;
////cout<<"x="<<x<<"\ny="<<y<<"\nz="<<z<<endl;
//            if(x>6 || y>31 || z>31 || x==0 || y==0 || (x!=6&&z==0))
//            {
//                printf("Error!\n");
//                continue;
//            }
//            switch(x)
//            {
//                case 1:printf("ADD");break;
//                case 2:printf("SUB");break;
//                case 3:printf("DIV");break;
//                case 4:printf("MUL");break;
//                case 5:printf("MOVE");break;
//                case 6:printf("SET");break;
//            }
//            if(x==6)
//                printf(" R%d\n",y);
//            else
//                printf(" R%d,R%d\n",y,z);
//        }
//        else
//        {
//            printf("Error!\n");
//        }
//    }
//
//	return 0;
//}
#include<iostream>
#include<memory.h>
#include<fstream>
#include<string>
#include<algorithm>
#include<math.h>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<vector>
#include<stdio.h>
#include<stdlib.h>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>

using namespace std;


char snum[32][6]={{"00000"},{"00001"},{"00010"},{"00011"},{"00100"},{"00101"},{"00110"},{"00111"},{"01000"},
                    {"01001"},{"01010"},{"01011"},{"01100"},{"01101"},{"01110"},{"01111"},{"10000"},{"10001"},
                    {"10010"},{"10011"},{"10100"},{"10101"},{"10110"},{"10111"},{"11000"},{"11001"},{"11010"},
                    {"11011"},{"11100"},{"11101"},{"11110"},{"11111"}};
int sn[16];

int main()
{
    freopen("Bestcoder.in","r",stdin);

    int bl;
    string s,r;
    int a,b;
    while(scanf("%d",&bl)!=EOF)
    {
        if(bl==1)
        {
            cin>>s;
            cin>>r;

			a=0;
			b=0;
			bool flag=true;

			for(int i=0;i<r.length();i++)
			{
				if(flag && r[i]>='0' && r[i]<='9')
					a=a*10+(r[i]-'0');
				if(r[i]==',')
					flag=false;
				if(!flag && r[i]>='0' && r[i]<='9')
					b=b*10+(r[i]-'0');
			}

			if(a<1 || a>31 || (s!="SET")&&(b<1 || b>31))
			{
				printf("Error!\n");
				continue;
			}

            if(s=="SET")
            {
                printf("000110");
                printf("%s00000\n",snum[a]);
                continue;
            }

            if(s=="ADD")
            {
                printf("000001");
            }
            else if(s=="SUB")
            {
                printf("000010");
            }
            else if(s=="DIV")
            {
                printf("000011");
            }
            else if(s=="MUL")
            {
                printf("000100");
            }
            else if(s=="MOVE")
            {
                printf("000101");
            }
            else
            {
                printf("Error!\n");
                continue;
            }
            printf("%s%s\n",snum[a],snum[b]);

        }
        else if(bl==0)
        {
            cin>>s;

            for(int i=0;i<s.length();i++)
                sn[i]=s[i]-'0';
            int x=0,y=0,z=0;
            x=sn[0]*32+sn[1]*16+sn[2]*8+sn[3]*4+sn[4]*2+sn[5]*1;
            y=sn[6]*16+sn[7]*8+sn[8]*4+sn[9]*2+sn[10]*1;
            z=sn[11]*16+sn[12]*8+sn[13]*4+sn[14]*2+sn[15]*1;

//if(x==6 && y!=0 && z==0)
//{
//    printf("SET R%d\n",y);
//    continue;
//}

            if(x>6 || y>31 || z>31 || x==0 || y==0 || (x!=6&&y!=0&&z==0))
            {
                printf("Error!\n");
                continue;
            }
            switch(x)
            {
                case 1:printf("ADD");break;
                case 2:printf("SUB");break;
                case 3:printf("DIV");break;
                case 4:printf("MUL");break;
                case 5:printf("MOVE");break;
                //case 6:printf("SET");break;
            }
            if(x==6 && y!=0 && z==0)
                printf("SET R%d\n",y);
            else if(x!=6 && y!=0 && z!=0)
                printf(" R%d,R%d\n",y,z);
            else
                printf("Error!\n");
        }
        else
        {
            printf("Error!\n");
        }
    }

    return 0;
}


/**
input
1
ADD R1,R2
0
0000010000100010
0
1111111111111111
1
SET R10
0
0001100101000000
0
0000000000000000
0
0000010000100010
0
0000100001100000
0
0000110000000110
0
0001000000000000
0
0001100000000000
0
0001100000000001
0
0001100000100000
0
0001100000000000
0
0000111111111111
0
0001101111100000
0
0001101111111111
0
0001111111111111
0
0001100000100000
0
0001100000100001



output

0000010000100010
ADD R1,R2
Error!
0001100101000000
SET R10
Error!
ADD R1,R2
Error!
Error!
Error!
Error!
Error!
SET R1
Error!
DIV R31,R31
SET R31
Error!
Error!
SET R1
Error!  //wrong SET R1

*/

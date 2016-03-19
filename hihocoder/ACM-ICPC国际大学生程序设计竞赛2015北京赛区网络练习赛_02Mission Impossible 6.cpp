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
//#define mems0(s)  memset(s,0,sizeof(s))
//#define mems_1(s) memset(s,-1,sizeof(s))
//#define memsINF(s) memset(s,INF,sizeof(s))
//
//#define lson l,m,rt<<1
//#define rson m+1,r,rt<<1|1
//
//
///**************************************************************
//    Problem:
//    Ordering:
//    Thought:
//    Result:
//    Author: wygdove
//****************************************************************/
//
//
//const double eps = 1e-9;
//const double pi=acos(-1.0);
//#define INF 0x3f3f3f3f
//#define MINN -0x3f3f3f3f
//#define MAXN 0x3f3f3f3f
//#define MOD 10007
//#define NUM 10008
//
//char ch[NUM];
//string s;
//int n;
//int lc,ls;
//int caret,stapos,endpos;
//bool model,copystates;
//string clipboard;
//string temp;
//
//
//int main()
//{
//    cin.sync_with_stdio(false);
//    cout.sync_with_stdio(false);
//
//    freopen("hiho.in","r",stdin);
//    //freopen("out.out","w",stdout);
//
//    int T;
//    scanf("%d",&T);
//    getchar();
//    while(T--)
//    {
//        memset(ch,'\0',sizeof ch);
//        s="";
//        lc=0;ls=0;
//        caret=0;stapos=0;endpos=0;
//        model=1;copystates=0;
//        clipboard="";
//
//        scanf("%d",&n);
//        gets(ch);
////cout<<"ch="<<ch<<endl;
//        lc=strlen(ch);
//        for(int i=0;i<lc;i++)
//        {
//            if(ch[i]>='a'&&ch[i]<='z')
//            {
//                if(ls>=n)continue;
//                temp="";temp.push_back(ch[i]);
//                if(model) s.insert(caret,temp);
//                else s.replace(caret,1,temp);
//                caret++;
//                ls=s.length();
//                if(copystates)copystates=!copystates;
////cout<<"c : s="<<s<<endl;
////cout<<"c : caret="<<caret<<"  s="<<s<<endl;
//            }
//            else if(ch[i]=='L'){
//                    (caret>0)?(caret--):caret;
////cout<<"L : caret="<<caret<<endl;
//            }
//            else if(ch[i]=='R')
//            {
//                (caret<ls)?(caret++):caret;
////cout<<"R : caret="<<caret<<endl;
//            }
//            else if(ch[i]=='S')
//            {
//                model=!model;
////cout<<"S : model="<<model<<endl;
//            }
//            else if(ch[i]=='D')
//            {
//                if(copystates)
//                {
//                    copystates=!copystates;
//                    endpos=caret;
//                    if(stapos>endpos)swap(stapos,endpos);
//                    s.replace(stapos,endpos-stapos,"");
//                }
//                else
//                {
//                    if(caret>=ls)continue;
//                    s=s.substr(0,caret)+s.substr(caret+1,ls);
//                    ls=s.length();
//                }
////cout<<"D : s="<<s<<endl;
//            }
//            else if(ch[i]=='B')
//            {
//                s=s.substr(0,caret-1)+s.substr(caret,ls);
//                caret--;
//                ls=s.length();
////cout<<"B : s="<<s<<endl;
//            }
//            else if(ch[i]=='C')
//            {
//                if(!copystates)
//                {
//                    stapos=caret;
//                }
//                else
//                {
//                    endpos=caret;
//                    if(stapos>endpos)swap(stapos,endpos);
//                    clipboard="";
//                    for(stapos;stapos<=endpos;stapos++)
//                    {
//                        clipboard.push_back(s[stapos]);
//                    }
//                }
//                copystates=!copystates;
//
////cout<<"C : copystatus="<<copystates<<" clipboard="<<clipboard<<endl;
//            }
//            else if(ch[i]=='V')
//            {
//                if(model)s.insert(caret,clipboard);
//                else s.replace(caret,clipboard.length(),clipboard);
//                caret+=clipboard.length();
//                ls=s.length();
////cout<<"V : clipboard="<<clipboard<<" s="<<s<<endl;
//            }
////cout<<"\t\t"<<i<<" : "<<s<<endl;
//        }
//
//        temp=s;s="";
//        ls=temp.length();
//        for(int i=0;i<ls;i++)if(temp[i]>='a'&&temp[i]<='z')s.push_back(temp[i]);
//        if(s.length()==0)printf("NOTHING\n");
//        else cout<<s<<endl;
//    }
//
//    fclose(stdin);
//    fclose(stdout);
//	return 0;
//}

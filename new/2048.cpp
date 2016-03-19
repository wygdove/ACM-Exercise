#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

int a[4][4];
int dx[4]={0,0,1,-1},dy[4]={1,-1,0,0};

bool movew()
{
    int ls[4],t=0,h;
    bool c=0;

    bool ccc=0;
    for(int i=0;i<4;i++)
    {
      ccc=0;
      for(int j=0;j<4;j++)
      {
        if(a[i][j]==0&&ccc==0)
          ccc=1;
        if(ccc==1&&a[i][j]!=0)
          c=1;
      }
    }

    for(int i=0;i<4;i++)
    {
        t=0;
        for(int j=0;j<4;j++)
            if(a[i][j]!=0)
            {
                if(ls[t-1]==a[i][j]&&t>0)
                {
                  ls[t-1]+=a[i][j];
                  ls[t]=-1;
                  t++;
                  c=1;
                }
                else
                {
                    ls[t]=a[i][j];
                    t++;
                }
            }
        h=0;
        for(int j=0;j<t;j++)
          if(ls[j]!=-1)
          {
            a[i][h]=ls[j];
            h++;
            //cout<<"c";
          }
        for(;h<4;h++)
          a[i][h]=0;
    }
    return c;
}

bool moves()
{
    int ls[4],t=0,h;
    bool c=0;

    bool ccc=0;
    for(int i=0;i<4;i++)
    {
      ccc=0;
      for(int j=3;j>=0;j--)
      {
        if(a[i][j]==0&&ccc==0)
          ccc=1;
        if(ccc==1&&a[i][j]!=0)
          c=1;
      }
    }

    for(int i=0;i<4;i++)
    {
        t=0;
        for(int j=3;j>=0;j--)
            if(a[i][j]!=0)
            {
                if(ls[t-1]==a[i][j]&&t>0)
                {
                  ls[t-1]+=a[i][j];
                  ls[t]=-1;
                  t++;
                  c=1;
                }
                else
                {
                    ls[t]=a[i][j];
                    t++;
                }
            }
        h=3;
        for(int j=0;j<t;j++)
          if(ls[j]!=-1)
          {
            a[i][h]=ls[j];
            h--;
          }
        for(;h>=0;h--)
            a[i][h]=0;
    }
    return c;
}

bool moved()
{
    int ls[4],t=0,h;
    bool c=0;

    bool ccc=0;
    for(int i=0;i<4;i++)
    {
      ccc=0;
      for(int j=3;j>=0;j--)
      {
        if(a[j][i]==0&&ccc==0)
          ccc=1;
        if(ccc==1&&a[j][i]!=0)
          c=1;
      }
    }

    for(int i=0;i<4;i++)
    {
        t=0;
        for(int j=3;j>=0;j--)
            if(a[j][i]!=0)
            {
                if(ls[t-1]==a[j][i]&&t>0)
                {
                  ls[t-1]+=a[j][i];
                  ls[t]=-1;
                  t++;
                  c=1;
                }
                else
                {
                    ls[t]=a[j][i];
                    t++;
                }
            }
        h=3;
        int b;
        for(b=0;b<t;b++)
          if(ls[b]!=-1)
          {
            a[h][i]=ls[b];
            h--;
          }
        for(;h>=0;h--)
            a[h][i]=0;
    }
    return c;
}

bool movea()
{
    int ls[4],t=0,h;
    bool c=0;

    bool ccc=0;
    for(int i=0;i<4;i++)
    {
      ccc=0;
      for(int j=0;j<4;j++)
      {
        if(a[j][i]==0&&ccc==0)
        {
          ccc=1;
          //cout<<"$"<<j<<" "<<i<<"$";
        }
        if(ccc==1&&a[j][i]!=0)
        {
          c=1;
          //cout<<j<<" "<<i<<"*";
        }
      }
    }

    for(int i=0;i<4;i++)
    {
        t=0;
        for(int j=0;j<4;j++)
            if(a[j][i]!=0)
            {
                if(ls[t-1]==a[j][i]&&t>0)
                {
                  ls[t-1]+=a[j][i];
                  ls[t]=-1;
                  t++;
                  c=1;
                  //cout<<"c";
                }
                else
                {
                    ls[t]=a[j][i];
                    t++;
                }
            }
        h=0;
        int b;
        for(b=0;b<t;b++)
          if(ls[b]!=-1)
          {
            a[h][i]=ls[b];
            h++;
          }
        for(;h<4;h++)
            a[h][i]=0;
    }
    return c;
}


bool die()
{
    int c=0;
    for(int i=0;i<4;i++)
      for(int j=0;j<4;j++)
        for(int k=0;k<4;k++)
          if(i+dx[k]<4&&i+dx[k]>=0&&j+dy[k]>=0&&j+dy[k]<4)
            if((a[i+dx[k]][j+dy[k]]==a[i][j])||a[i][j]==0)
              c=1;

    return c;
}

void bgn()
{
    int x,y;
    x=rand()%4;
    y=rand()%4;
    if(a[x][y]!=0)
      bgn();
    else
    {
        a[x][y]=rand()%10;
        if(a[x][y]==0)
            a[x][y]=4;
        else
            a[x][y]=2;

    }
}

void view()
{
    cout<<endl<<endl;

    cout<<endl<<endl<<endl<<endl<<endl<<endl;
    for(int i=0;i<4;i++)
    {
      for(int j=0;j<4;j++)
        if(a[j][i]==0)
            cout<<".\t";
        else
            cout<<a[j][i]<<"\t";
      cout<<endl<<endl;
    }
    cout<<endl<<endl<<endl<<endl<<endl<<endl;
}

int get()
{
    char lll;
    cout<<"请输入您所希望的操作（wasd分别为上下左右）：";
    //cin>>lll;
    //cout<<lll;
asd:
    lll=getch();
    if(lll=='w')
        return 1;
    if(lll=='a')
        return 2;
    if(lll=='s')
        return 3;
    if(lll=='d')
        return 4;
    cout<<"\n输入值错误，请重新输入";
    goto asd;
}

int main()
{
    int c;
    bool cc=1;
    while (1)
    {
        srand( (unsigned)time( NULL ) );
        for(int i=-1;i<=4;i++)
            for(int j=-1;j<=4;j++)
                a[i][j]=0;
        bgn();

        while (1)
        {
            if(cc==1)
            {
                bgn();
                view();
                if(die()==0)
                    break;
            }
            else
                cout<<"无法移动"<<endl;
            c=get();
            //cout<<"c";
            if(c==1)
                cc=movew();
            if(c==2)
                cc=movea();
            if(c==3)
                cc=moves();
            if(c==4)
                cc=moved();
        }
        cout<<endl<<endl<<endl<<endl<<endl;
        cout<<"您挂掉了。。。。。"<<endl;
        cout<<endl<<endl<<endl<<endl;
        cout<<"输入y再来一次，输入n退出游戏"<<endl;
        char again;
        cin>>again;
        if(again=='n')
          break;
    }
    return 0;
}

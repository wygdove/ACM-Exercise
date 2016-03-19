/*
*   state: AC
*   lang:C++
*   from:BeseCoder Round #15 1002
*   author:you_shoubian
*/

#include <iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<fstream>
using namespace std;

string op,opNum,opBit;
string resBit;
string resStr;
int op1,op2;

void find_num(string str)
{
    op1=0;
    op2=0;
    if(str[1]>='0'&&str[1]<='9')
        op1=str[1]-'0';
    if(str.length()>=2&&str[2]>='0'&&str[2]<='9')
        op1=op1*10+(str[2]-'0');
    if(str.length()>=4&&str[4]>='0'&&str[4]<='9')
        op2=str[4]-'0';
    if(str.length()>=5&&str[5]>='0'&&str[5]<='9')
        op2=op2*10+(str[5]-'0');
    if(str.length()>=6&&str[6]>='0'&&str[6]<='9')
        op2=op2*10+(str[6]-'0');
}
void transIntoBit()
{
    string temp="";
    cin>>op>>opNum;
    if(op=="ADD"){resBit = "000001";}
    if(op=="SUB"){resBit = "000010";}
    if(op=="DIV"){resBit = "000011";}
    if(op=="MUL"){resBit = "000100";}
    if(op=="MOVE"){resBit = "000101";}
    if(op=="SET"){resBit = "000110";}

    find_num(opNum);
    //op1
    temp="";
    for(op1;op1>0;op1/=2)
    {
         temp =(char)((op1%2)+'0')+temp;
    }
    if(temp.length()<5)
        temp = string(5-temp.length(),'0')+temp;
    resBit += temp;

    //op2
    temp="";
    if(op2!=0)
    {
        //cout<<"op2:"<<op2<<endl;
        for(op2;op2>0;op2/=2)
        {
            temp = (char)((op2%2)+'0')+temp;
        }
        if(temp.length()<5)
            temp = string(5-temp.length(),'0')+temp;
        resBit += temp;
    }
    else
    {
        temp = string(5,'0');
        resBit += temp;
    }
    cout<<resBit<<endl;
}

void transIntoSign()
{
    string optemp="";
    string opNumTemp1="";
    string opNumTemp2="";
    cin>>opBit;

    for(int i=0;i<=5;i++)
    {
        optemp=optemp+opBit[i];
    }
    for(int i=6;i<=10;i++)
    {
        opNumTemp1=opNumTemp1+opBit[i];
    }
    for(int i=11;i<=15;i++)
    {
        opNumTemp2=opNumTemp2+opBit[i];
    }

    if(optemp=="000001")
        resStr = "ADD R";
    else if(optemp=="000010")
        resStr = "SUB R";
        else if(optemp=="000011")
            resStr = "DIV R";
            else if(optemp=="000100")
                resStr = "MUL R";
                else if(optemp=="000101")
                    resStr = "MOVE R";
                    else if(optemp=="000110")
                        resStr = "SET R";
                        else
                        {
                            cout<<"Error!"<<endl;
                            return;
                        }
    int a=0;
    int b=0;
    for(int i=0;i<5;i++)
    {
        a += (opNumTemp1[i]-'0')*pow(2,4-i);
        b += (opNumTemp2[i]-'0')*pow(2,4-i);
        //cout<<"a:"<<a<<" b:"<<b<<endl;
    }

    //此处神坑！！！
    //注意R后面能不能是0的问题
    if(b!=0&&a!=0&&resStr!="SET R")
        cout<<resStr<<a<<",R"<<b<<endl;
    else if(resStr=="SET R"&&b==0&&a!=0)
        cout<<resStr<<a<<endl;
        else
            cout<<"Error!"<<endl;

}

int main()
{
    freopen("in.in","r",stdin);
    char f;
    while(cin>>f)
    {
        if(f=='1')
            transIntoBit();
        if(f=='0')
            transIntoSign();
    }
    return 0;
}

#include <iostream>
#include<cstring>
#include<string>
using namespace std;

string male,female;
string result;

void add(string str)
{
    bool f =false;
    for(int i = 0; i<str.length(); i++)
    {
        if(str[i]=='_')
        {
            f= true;
            i++;
        }

        if(f)
            result+=str[i];
    }
}

int main()
{

    while(cin>>male>>female)
    {
        result  ="";
        add(male);
        result+="_small_";
        add(female);
        cout<<result<<endl;
    }
    return 0;
}
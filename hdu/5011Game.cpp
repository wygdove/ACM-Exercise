#include<iostream>
using namespace std;

int main()
{
int n;
int ans;
int temp;
while(cin>>n)
{
cin>>ans;
while(n>1)
{
cin>>temp;
ans^=temp;
n--;
}
if(ans>0)
cout<<"Win\n";
else
cout<<"Lose\n";
}
return 0;
}
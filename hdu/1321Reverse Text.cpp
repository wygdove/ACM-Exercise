#include<iostream>
using namespace std;

char s[1000];

int main()
{
	int t;
	cin>>t;
	getchar();
	while(t--)
	{
		//getchar();	//造成下边错误的原因
		memset(s,'\0',sizeof(s));
		gets(s);
		cout<<strrev(s)<<endl;
	}
	return 0;
}

/*
3 
Frankly, I don't think we'll make much 

hcum ekam ll'ew kniht t'nod I ,ylknarF
hcum ekam ll'ew kniht t'nod I ,ylknarF	//right

money out of this scheme. 

.emehcs siht fo tuo yenom
.emehcs siht fo tuo yeno	//wrong

madam I'm adam

mada m'I madam
mada m'I mada	//wrong

*/

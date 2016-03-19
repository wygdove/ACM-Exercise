//#include<iostream>
//#include<string.h>
//#include<fstream>
//using namespace std;
//
////测试数据：
////hello\n
////   hello\n
////hello   \n
////   hello   \n
////hello world\n
////   hello world\n
////hello world   \n
////   hello world   \n
////   hello   world   \n
////   \n
////\n
//
////还有  不同单词的总数　！！！
//
//string s;
//
//int main()
//{
//    freopen("hdu.in","r",stdin);
//	int ans;
//	int i;
//    while(getline(cin,s) && s!="#")
//    {
//cout<<s<<endl;
//		ans=1;
//		for(i=0;i<s.length();i++)
//		{
//		    if(s[i]==' ')
//				ans++;
//		}
//		printf("%d\n",ans);
//	}
//	return 0;
//}
//
////s.find("#")!=0没有控制作用
//
////	int ans;
////	int i;
////    while(getline(cin,s) && s.find("#")!=0)
////    {
////cout<<s<<endl;
////		ans=1;
////		for(i=0;i<s.length();i++)
////		{
////			if(s[i]==' ')//wrong //若两个单词之间有多个空格会多次计数，结果不准确
////				ans++;
////		}
////		printf("%d\n",ans);
////	}
//
////	int ans;
////	int i;
////	while(cin.getline(s,10000000,'\0'))//gets(s)  cin.getline(s,100000000)
////	{
////		if(s[0]=='#')
////			break;
////		ans=1;
////		for(i=0;i<s.length();i++)//strlen(s)
////		{
////			if(s[i]==' ')
////				ans++;
////		}
////		cout<<ans<<endl;
////	}
////	return 0;
////}
//
///*
////wrong answer
//#include<iostream>
//using namespace std;
//
//char s[100000000];
//
//int main()
//{
//	int ans;
//	int i;
//	while(gets(s))
//	{
//		if(s[0]=='#')
//			break;
//		ans=1;
//		for(i=0;i<strlen(s);i++)
//		{
//			if(s[i]==' ')
//				ans++;
//		}
//		cout<<ans<<endl;
//	}
//	return 0;
//}
//*/

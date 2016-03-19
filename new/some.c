//#include<stdio.h>
//#include<stdlib.h>
//
//char * encript(int n)
//{
//    static char en[4]={'\0','\0','\0','\0'};
//    int x=0;
//    int i=0;
//    while(n>0)
//    {
//        x=n%10;n/=10;
//        x+=5;
//        x%=10;
//        en[i++]=(char)(x+'0');
//    }
//    return en;
//}
//
//char * decript(int n)
//{
//    static char de[4]={'\0','\0','\0','\0'};
//    int x=0;
//    int i=0;
//    while(n>0)
//    {
//        x=n%10;n/=10;
//        x+=5;x%=10;
//        de[i++]=(char)(x+'0');
//    }
//    for(i=0;i<4;i++)
//    {
//        if(de[i]>='0'&&de[i]<='9');
//        else
//        {
//            de[i]='5';
//        }
//    }
//    return de;
//}
//
//int main()
//{
//
//    char *p;
//    int i=0;
//
//    int n=8555;
//    p=encript(n);
//    for(i=0;i<4;i++)
//    {
//        printf("%c",p[i]);
//    }
//    printf("\n");
//
//    n=3;
//    p=decript(n);
//    for(i=0;i<4;i++)
//    {
//        printf("%c",p[i]);
//    }
//    printf("\n");
//
//
//
//    return 0;
//}

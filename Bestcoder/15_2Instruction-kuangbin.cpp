/* ***********************************************
Author        :kuangbin
Created Time  :2014/10/25 19:10:06
File Name     :E:\2014ACM\Bestcoder\BC15\B.cpp
************************************************ */

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

void output(int n,int w){
    for(int i = w-1;i >= 0;i--){
        if(n & (1<<i))printf("1");
        else printf("0");
    }
}

char str1[100];
char str2[100];

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int op;
    while(scanf("%d",&op) == 1){
        if(op == 1){
            scanf("%s%s",str1,str2);
            if(str1[0] == 'A')output(1,6);
            else if(str1[0] == 'S' && str1[1] == 'U')output(2,6);
            else if(str1[0] == 'D')output(3,6);
            else if(str1[0] == 'M' && str1[1] == 'U')output(4,6);
            else if(str1[0] == 'S')output(6,6);
            else output(5,6);
            int id1 = 0;
            id1 = str2[1] - '0';
            if(str2[2] >= '0' && str2[2] <= '9'){
                id1 *= 10;
                id1 += str2[2] - '0';
            }
            output(id1,5);
            if(str1[0] == 'S' && str1[1] == 'E')output(0,5);
            else{
                int t = 0;
                while(str2[t] != ',')t++;
                t += 2;
                int id2 = str2[t] - '0';
                int len = strlen(str2);
                if(t+1 < len && str2[t+1] >= '0' && str2[t+1] <= '9')
                {
                    id2 *= 10;
                    id2 += str2[t+1] - '0';
                }
                   output(id2,5);
            }
            printf("\n");
        }
        else {
            scanf("%s",str1);
            int type;
            int id1,id2;
            type = 0;
            for(int i = 0;i < 6;i++){
                type *= 2;
                type += str1[i] - '0';
            }
            id1 = 0;
            for(int i = 6;i < 11;i++){
                id1 *= 2;
                id1 += str1[i] - '0';
            }
            id2 = 0;
            for(int i = 11;i < 16;i++){
                id2 *= 2;
                id2 += str1[i] - '0';
            }
            if(type < 1 || type > 6){
                printf("Error!\n");
                continue;
            }
            if(id1 == 0){
                printf("Error!\n");
                continue;
            }
            if(type == 6 && id2 != 0){
                printf("Error!\n");
                continue;
            }
            if(type != 6 && id2 == 0){
                printf("Error!\n");
                continue;
            }
            if(type == 1){
                printf("ADD R%d,R%d\n",id1,id2);
                continue;
            }
            else if(type == 2){
                printf("SUB R%d,R%d\n",id1,id2);
                continue;
            }
            else if(type == 3){
                printf("DIV R%d,R%d\n",id1,id2);
                continue;
            }
            else if(type == 4){
                printf("MUL R%d,R%d\n",id1,id2);
                continue;
            }
            else if(type == 5){
                printf("MOVE R%d,R%d\n",id1,id2);
                continue;
            }
            else if(type == 6){
                printf("SET R%d\n",id1);
                continue;
            }
        }
    }
    return 0;
}
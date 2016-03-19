//15_2-wqh1996

#include<stack>
#include<cstdio>
#include<stdio.h>
#include<iostream>
#include<math.h>
#include<set>
#include<sstream>
#include<cctype>
#include<string>
#include<cstring>
#include<map>
#include<algorithm>
using namespace std;

#define ll long long 
#define pf printf
#define sf scanf

#define eps 1e-8
#define MAXN 1000
struct point { double x, y; }pt[MAXN];
#define _sign(x)((x)>eps?1:((x)<-eps?2:0))

int main()
{
    char ot[50][50] = { "00000", "00001", "00010", "00011", "00100", "00101", "00110", "00111", "01000", "01001",
        "01010", "01011", "01100", "01101", "01110", "01111",
        "10000", "10001", "10010", "10011", "10100", "10101", "10110", "10111", "11000",
        "11001", "11010", "11011", "11100", "11101", "11110", "11111" };
    int sign;
    while (scanf("%d", &sign) == 1 ){
        getchar();
        if (sign){
            char a[20];
            gets(a);
            int f, b;
            if (a[0] == 'A' && a[1] == 'D' && a[2] == 'D'){
                if (isdigit(a[6])){
                    f = (a[5] - '0') * 10 + (a[6] - '0');
                    if (isdigit(a[10])){
                        b = (a[9] - '0') * 10 + (a[10] - '0');
                    }
                    else b = (a[9] - '0');
                }
                else{
                    f = (a[5] - '0');
                    if (isdigit(a[9])){
                        b = (a[8] - '0') * 10 + (a[9] - '0');
                    }
                    else b = (a[8] - '0');
                }
                printf("000001%s%s\n", ot[f], ot[b]);
            }
            else if (a[0] == 'S' && a[1] == 'U' && a[2] == 'B'){
                if (isdigit(a[6])){
                    f = (a[5] - '0') * 10 + (a[6] - '0');
                    if (isdigit(a[10])){
                        b = (a[9] - '0') * 10 + (a[10] - '0');
                    }
                    else b = (a[9] - '0');
                }
                else{
                    f = (a[5] - '0');
                    if (isdigit(a[9])){
                        b = (a[8] - '0') * 10 + (a[9] - '0');
                    }
                    else b = (a[8] - '0');
                }
                printf("000010%s%s\n", ot[f], ot[b]);
            }
            else if (a[0] == 'D' && a[1] == 'I' && a[2] == 'V'){
                if (isdigit(a[6])){
                    f = (a[5] - '0') * 10 + (a[6] - '0');
                    if (isdigit(a[10])){
                        b = (a[9] - '0') * 10 + (a[10] - '0');
                    }
                    else b = (a[9] - '0');
                }
                else{
                    f = (a[5] - '0');
                    if (isdigit(a[9])){
                        b = (a[8] - '0') * 10 + (a[9] - '0');
                    }
                    else b = (a[8] - '0');
                }
                printf("000011%s%s\n", ot[f], ot[b]);
            }
            else if (a[0] == 'M' && a[1] == 'U' && a[2] == 'L'){
                if (isdigit(a[6])){
                    f = (a[5] - '0') * 10 + (a[6] - '0');
                    if (isdigit(a[10])){
                        b = (a[9] - '0') * 10 + (a[10] - '0');
                    }
                    else b = (a[9] - '0');
                }
                else{
                    f = (a[5] - '0');
                    if (isdigit(a[9])){
                        b = (a[8] - '0') * 10 + (a[9] - '0');
                    }
                    else b = (a[8] - '0');
                }
                printf("000100%s%s\n", ot[f], ot[b]);
            }
            else if (a[0] == 'M' && a[1] == 'O' && a[2] == 'V' && a[3]=='E'){
                if (isdigit(a[7])){
                    f = (a[6] - '0') * 10 + (a[7] - '0');
                    if (isdigit(a[11])){
                        b = (a[10] - '0') * 10 + (a[11] - '0');
                    }
                    else b = (a[10] - '0');
                }
                else{
                    f = (a[6] - '0');
                    if (isdigit(a[10])){
                        b = (a[9] - '0') * 10 + (a[10] - '0');
                    }
                    else b = (a[9] - '0');
                }
                printf("000101%s%s\n", ot[f], ot[b]);
            }
            else if (a[0] == 'S' && a[1] == 'E' && a[2] == 'T'){
                if (isdigit(a[6])){
                    f = (a[5] - '0') * 10 + (a[6] - '0');
                }
                else{
                    f = (a[5] - '0');
                }
                printf("000110%s00000\n", ot[f], ot[b]);
            }
        }
        else {
            int x1=0, x2=0, x3=0;
            scanf("%6d%5d%5d", &x1, &x2, &x3);
            if (x1 == 1){
                if (x2 > 11111 || x2 == 0){
                    printf("Error!\n"); 
                    continue;
                }
                if (x3 > 11111 || x3 == 0){
                    printf("Error!\n");
                    continue;
                }
                int f = x2 / 10000 * 16 + x2 % 10000 / 1000 * 8 + x2 % 1000 / 100 * 4 + x2 % 100 / 10 * 2 + x2 % 10;
                int b  = x3 / 10000 * 16 + x3 % 10000 / 1000 * 8 + x3 % 1000 / 100 * 4 + x3 % 100 / 10 * 2 + x3 % 10;
                printf("ADD R%d,R%d\n", f, b);
            }
            else if (x1 == 10){
                if (x2 > 11111 || x2 == 0){
                    printf("Error!\n");
                    continue;
                }
                if (x3 > 11111 || x3 == 0){
                    printf("Error!\n");
                    continue;
                }
                int f = x2 / 10000 * 16 + x2 % 10000 / 1000 * 8 + x2 % 1000 / 100 * 4 + x2 % 100 / 10 * 2 + x2 % 10;
                int b = x3 / 10000 * 16 + x3 % 10000 / 1000 * 8 + x3 % 1000 / 100 * 4 + x3 % 100 / 10 * 2 + x3 % 10;
                printf("SUB R%d,R%d\n", f, b);
            }
            else if (x1 == 11){
                if (x2 > 11111 || x2 == 0){
                    printf("Error!\n");
                    continue;
                }
                if (x3 > 11111 || x3 == 0){
                    printf("Error!\n");
                    continue;
                }
                int f = x2 / 10000 * 16 + x2 % 10000 / 1000 * 8 + x2 % 1000 / 100 * 4 + x2 % 100 / 10 * 2 + x2 % 10;
                int b = x3 / 10000 * 16 + x3 % 10000 / 1000 * 8 + x3 % 1000 / 100 * 4 + x3 % 100 / 10 * 2 + x3 % 10;
                printf("DIV R%d,R%d\n", f, b);
            }
            else if (x1 == 100){
                if (x2 > 11111 || x2 == 0){
                    printf("Error!\n");
                    continue;
                }
                if (x3 > 11111 || x3 == 0){
                    printf("Error!\n");
                    continue;
                }
                int f = x2 / 10000 * 16 + x2 % 10000 / 1000 * 8 + x2 % 1000 / 100 * 4 + x2 % 100 / 10 * 2 + x2 % 10;
                int b = x3 / 10000 * 16 + x3 % 10000 / 1000 * 8 + x3 % 1000 / 100 * 4 + x3 % 100 / 10 * 2 + x3 % 10;
                printf("MUL R%d,R%d\n", f, b);
            }
            else if (x1 == 101){
                if (x2 > 11111 || x2 == 0){
                    printf("Error!\n");
                    continue;
                }
                if (x3 > 11111 || x3 == 0){
                    printf("Error!\n");
                    continue;
                }
                int f = x2 / 10000 * 16 + x2 % 10000 / 1000 * 8 + x2 % 1000 / 100 * 4 + x2 % 100 / 10 * 2 + x2 % 10;
                int b = x3 / 10000 * 16 + x3 % 10000 / 1000 * 8 + x3 % 1000 / 100 * 4 + x3 % 100 / 10 * 2 + x3 % 10;
                printf("MOVE R%d,R%d\n", f, b);
            }
            else if (x1 == 110){
                if (x2 > 11111 || x2 == 0){
                    printf("Error!\n");
                    continue;
                }
                if (x3 > 0){
                    printf("Error!\n");
                    continue;
                }
                int f = x2 / 10000 * 16 + x2 % 10000 / 1000 * 8 + x2 % 1000 / 100 * 4 + x2 % 100 / 10 * 2 + x2 % 10;
                //int b = x3 / 10000 * 16 + x3 % 10000 / 1000 * 8 + x3 % 1000 / 100 * 4 + x3 % 100 / 10 * 2 + x3 % 10;
                printf("SET R%d\n", f);
            }
            else printf("Error!\n");
        }
    }
    return 0;
}
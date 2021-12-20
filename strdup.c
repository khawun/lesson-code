#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char*p1="RUPP";
    char*p2;
    p2=strdup(p1);
    printf("Duplicated string is:%s\n",p2);
    getch();
}

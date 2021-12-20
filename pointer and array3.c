//pointer and array3.c
#include<stdio.h>
#include<conio.h>
int main(){
    int a[5]={100,200,300,400,500};
    int*p=a,*q=p+5;
    for(p;p<q;p++)
        printf("\t%d\t%d\n",p,*p);
        printf("\n");
        getch();
        return 0;
}

//pointer and array0.c
#include<stdio.h>
#include<conio.h>
int main(){
    int a[5]={100,200,300,400,500};
    int*p=a;
    int i;
    for(i=0;i<5;i++)
        printf("&a[%d]:%d  p+%d:%d\n",i,&a[i],i,p+i);
        printf("\n");
        getch();
        return 0;
}

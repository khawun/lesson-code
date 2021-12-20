//pointer and array0.c
#include<stdio.h>
#include<conio.h>
int main(){
    int a[5]={100,200,300,400,500};
    int*p=a;
    int i;
    for(i=0;i<5;i++)
        printf("\t%d\t%d\n",&a[i],a[i]);
        printf("\n");
    for(i=0;i<5;i++)
        printf("\t%d\t%d\n",p,*(p+i));
        printf("\n");
        getch();
        return 0;
}

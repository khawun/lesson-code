//pointer and array4.c
#include<stdio.h>
#include<conio.h>
int main(){
    int a[10]={100,200,300,400,500,600,700,800,900,1000};
    int*p=a,*q=a+9;
    printf("q-p:%d",q-p);
    for(int i=0;i<10;i++){
        *p=*p/10;
        p++;}
    printf("\n");
    for(int i=0;i<10;i++)
        {printf("a[%d]:%d\n",i,a[i]);}
    printf("\n");
        getch();
        return 0;
}
/*
*ចំណាំ
ពេលpointer  ផ្ទុកអាសយដ្ធានរបស់​​   array នោះpointer+n  និងរំកិលទៅកាន់ធាតុnបន្តបន្ទប់។
*/

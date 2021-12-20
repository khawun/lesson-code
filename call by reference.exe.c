#include<stdio.h>//call by reference
#include<conio.h>
void swap(int *a,int *b);//parameter ឬ​ formal paramet
int main(){
    int m=22,n=44;
    printf("m=%d and n=%d before swap.\n",m,n);
    swap(&m,&n);//argument ឬ actual argument
    printf("m=%d and n=%d after swap.\n",m,n);
    getch();
    return 0;
    }
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("m=%d and n=%d in swap function.\n",*a,*b);
}


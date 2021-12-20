//variable vs pointer
#include<stdio.h>
int main(){
    int v;//v= variable
    printf("enter an integer:");
    scanf("%d",&v);
    printf("%d is an address which is used to stored %d\n",&v,v);//&vវានិងបោះតម្លៃនៃmemoryទៅឪ្យ%dហើយបង្ហាញលេខនៃmemoryផ្ទុក
    return 0;
}

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char string[55]="this is a test string for test string";
    char*p;
    p=strrstr(string,"test");
    if(p){
        printf("string found\n");
        printf("Last occurrence of string\"test\"in\"%s\"%s\".",string,p);
    }
    else
        printf("string not found\n");
    getch();
    return 0;
}

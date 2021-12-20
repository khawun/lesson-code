#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
int main(){
    char*str1="HELLO",*str2="Hello";
    printf("str1:%s\n",str1);
    printf("str2:%s\n",str2);
    //
    i=strcmp(str1,str2);
    if(i==0)
        printf("str1 and str2 are identical\n");
    else if(i<0)
        printf("str1<str2\n");
    else
        printf("str1>str2\n");
    getch();
    return 0;
}

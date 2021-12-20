#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char full_name[56]="\0";
    printf("\n\t full_name:");
    gets(full_name);
    printf("\n\t %s=%d character(s)\n",full_name,strlen(full_name));
    getch();
    return 0;
}

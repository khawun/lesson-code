#include<stdio.h>//string concatenation.c
#include<string.h>
#include<conio.h>
int main(){
    char full_name[15],firs_name[15];
    printf("las name: ");
    scanf("%s",full_name);
    printf("firs name: ");
    scanf("%s",firs_name);
    int l=strlen(full_name);
    int f=strlen(firs_name);
    strcat(full_name, " ");
    strcat(full_name,firs_name);
    int fn=strlen(full_name);
    printf("--------------------------------------------------------------\n");
    printf("\t las name contain %d.\n",l);
    printf("\t firs name contain %d.\n",f);
    printf("\t %s contain %d.\n",full_name,fn);
    getch();
    return 0;
    }


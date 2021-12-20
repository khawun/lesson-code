#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
    char source[]=" C programming.";
    char target[]="we are learning";
    printf("\n Source string=%s",source);
    printf("\n Target string=%s",target);
    strcat(target,source,10);
    printf("\n TArget string after strcat()=%s",target);
    getch();
    return 0;
}

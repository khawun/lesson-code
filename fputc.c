#include<stdio.h>//fputc.c
#include<conio.h>
int main(){
    char ch;
    FILE*fp1;
    FILE*fp2;
    if(fp1=fopen("test.txt","r"){
       ch=getc(fp1);
       printf("%c",ch);//display on screen
       fp2=fopen("test2.txt",""w+);
       while(ch!=EOF){
        fputc(ch,fp2);
        ch=getc(fp1);
        printf("%c",ch);//display on screen
       }
       }
}

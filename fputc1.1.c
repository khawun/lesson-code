#include<stdio.h>//fputc.c
#include<conio.h>
int main(){
    char ch;
    FILE*fp1=fopen("test.txt","r"),*fp2=fopen("test3.txt","w+");
    if(fp1)
    while((ch=getc(fp1)!=EOF)){
        printf("%c",ch);
        fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    getch();
    return 0;
}

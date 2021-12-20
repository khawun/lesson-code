#include<stdio.h>//getc and putc.c
#include<conio.h>
int main(){
    char ch;
    FILE*fp=fopen("test.txt","r");
    if(fp)
        while((ch=getc(fp))!=EOF)
        putc(ch,stdout);
    fclose(fp);
    getch();
    return 0;
}

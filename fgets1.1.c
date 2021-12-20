#include<stdio.h>//fgets1.1.c -File Get String
#include<conio.h>
int main(){
    FILE*fp=fopen("test.txt","r");
    printf("\t\t%d\n",fp);
    char string[50];
    printf("Opening the file test.txt in raed mod\n");
    fp=fopen("test.txt","r");
    if(fp){
    printf("Reading the file test.txt\n");
    while(fgets(string,50,fp)!=NULL)
        printf("\t%s",string);
    }
    printf("\n Closing the file test.txt\n");
    fclose(fp);
    getch();
    return 0;
}

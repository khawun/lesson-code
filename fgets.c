#include<stdio.h>//fgetc.c=File Get character
#include<conio.h>
int main(){
    FILE*fp;
    char data[50];
    printf("Opening the file test.txt in raed mod\n");
    fp=fopen("test.txt","r");
    if(fp==NULL){
    printf("Could not open file test.xt\n");
    getch();
    return 0;
}
    printf("Reading the file test.txt\n");
    while(fgets(data,50,fp)!=NULL)
        printf("Closing the file test.txt\n");
        fclose(fp);
        getch();
        return 0;
    }

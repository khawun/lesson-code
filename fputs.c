#include<stdio.h>//fputs.c-File Put String
#include<conio.h>
#include<string.h>
int main(){
    FILE*fp;
    char data[50];
    //opening an existing file
    printf("Opening the file test.txt in write mode\n");
    fp=fopen("test.txt","w");
    if(fp==NULL){
        printf("Could not open file test.txt\n");
        getch();
        return 0;
    }
    printf("\n Enter some text frome keyboard to write in the file test.txt\n");
    //getting input frome user
    while(strlen(gets(data))>0){
        //writting in the file
        fputs(data,fp);
        fputs("\n",fp);
    }
    //Closing the file
    printf("Closing the file test.txt\n");
    fclose(fp);
    getch();
    return 0;
}

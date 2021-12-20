#include<stdio.h>//fgetc.c=File Get character
#include<conio.h>
int main(){
    FILE*fp;
    char c;
    printf("OPening the file test.txt in read mode.\n");
    fp=fopen("test.txt","r");//opening an existing file
    if(fp==NULL){
        printf("Could not open file test.txt\n");
        getch();
        return 0;
    }
    printf("Reading the file test.txt:\n");
    while(1){
        c=(char)fgetc(fp);//ទាញយកមួយអក្សរ៍ពីរ
        if(c==EOF)
        break;
        printf("%c",c);
    }
    printf("\n\t Closing the file test.txt\n");
    fclose(fp);//Close the file
    getch();
    return 0;
}

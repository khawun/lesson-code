#include<stdio.h>//fgetc.c=File Get character
#include<conio.h>
int main(){
    FILE* fp=fopen("test.txt","r");//opening an exingting file
    char c;
    printf("\tOPening the file test.txt in read mode.\n");
    if(fp==NULL){
        printf("Could not open file test.txt\n");
        getch();
        return 0;
    }
    printf("\tReading the file test.txt:\n");
    while((c=(char)fgetc(fp))!=EOF)//ទាញយកមួយអក្សរ៍ពីរ
        printf("%c",c);
        fclose(fp);//Closing the file
    printf("\n\t Closing the file test.txt\n");
    getch();
    return 0;
}

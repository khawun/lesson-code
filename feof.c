#include<stdio.h>//feof.c-File and of File
#include<conio.h>
int main(){
    FILE*fp=fopen("test.txt","r");
    char c;
    printf("OPening the File test.txt in read mode.\n");
    if(fp==NULL){
        printf("Could Not open file test.txt\n");
        return 0;
    }
    printf("Reading ...the file test.txt\n");
    while(!feof(fp)){//កាលណាមិនទាន់ដល់ចុងបពា្ចប់នៃអែកសារ  (WHILE Not the end of file)
        c=fgetc(fp);//Reading file
        printf("%c",c);
    }
    printf("\n Closing the file test.txtas end of file is reached.\n");
    fclose(fp);//Closing file
    getch();
    return 0;
}

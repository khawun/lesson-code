#include<stdio.h>//fread and fwrite
#include<conio.h>
int main(){

    FILE*fp;
    int x[10]={1,2,3,4,5,6,5000,6,-10,11};
    int result[10];
    int i;
    fp=fopen("temp.txt","w+");
    if(fp!=NULL){
        fwrite(x,sizeof(int),10,fp);
        rewind(fp);
        fread(result,sizeof(int),10,fp);
    }else
    return 0;
    printf("Result\n");
    fclose(fp);
    getch();
    return 0;
}

#include<stdio.h>//fwrite structure.c
#include<conio.h>
struct Rec{
    int x,y,z;
};
int main(){
    int counter;
    FILE*fp;
    struct Rec myrecord;
    fp=fopen("test.bin","wb");
    if(!fp){
        printf("Unable to open file:\n");
        getch();
        return 0;
    }
    for(counter=1;counter<=10;counter++){
        myrecord.x=counter;
        fwrite(&myrecord,sizeof(struct Rec),1,fp);
    }
    fclose(fp);
    getch();
    return 0;
}

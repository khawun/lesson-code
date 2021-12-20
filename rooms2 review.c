#include<stdio.h>
typedef struct{
    int num;
    float width;
    float length;
    float height;
    char building[28];
}Rooms;
int main(){
    Rooms Room[5],R[5];
    int i,sizeofroom=sizeof(Rooms);
    FILE*fp=fopen("room.bin","a+");
    for(i=0;i<5;i++){
        printf("Room Number:");
        scanf("%d",&Room[i].num);
        printf("Room width:");
        scanf("%f",&Room[i].width);
        printf("Room length:");
        scanf("%f",&Room[i].length);
        printf("Room height:");
        scanf("%f",&Room[i].height);
        printf("Building:");
        scanf("%s",&Room[i].building);
    }
    fwrite(Room,sizeofroom*5,1,fp);
    rewind(fp);
    printf("\n\t\tRoom  Num  Width  Length  Height  Building");//ដកឃ្លាពីរប្រើសម្រាប់ខណ្ឌជួរឈរនីមួយៗ
    for(i=0;i<5;i++){
        fread(R+i,sizeofroom,1,fp);
        printf("\n%8d %5.2f %6.2f %6.2f %27s",R[i].num,R[i].width,R[i].length,R[i].height,R[i].building);
    }
    fclose(fp);
    printf("\n");
    return 0;
}

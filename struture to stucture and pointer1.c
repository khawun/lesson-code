#include<stdio.h>
#include<conio.h>
typedef struct{
    int college_id;
    char college_name[50];
}College;
typedef struct{
    int id;
    char name[20];
    float percentage;
    College college;//struct within struct
}Student;
int main(){
    Student student={1,"Bona",90.5,71145,"Royal University of phnom penh"},*studentPtr=&student;
    printf("Id is:%d\n",studentPtr->id);
    printf("Name is:%s\n",studentPtr->name);
    printf("percentage is:%f\n\n",studentPtr->percentage);
    printf("College id is:%d\n",studentPtr->college.college_id);
    printf("College name is:%s\n",studentPtr->college.college_name);
    getch();
    return 0;
}

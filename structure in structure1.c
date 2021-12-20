#include<stdio.h>//stucture in structure1.c
#include<conio.h>
#include<stdlib.h>
typedef struct{
    int college_id;
    char college_name[50];
}College;
typedef struct{
    int id;
    char name[20];
    float percentage;
    College college;//struct ក្នង   struct
}Student;
int main(){
    Student student={1,"sopeak",90.5,71145,"Royal University of phnom penh"};
    printf("id is:%d\n",student.id);
    printf("Name is:%s\n",student.name);
    printf("Percentage is:%f\n\n",student.percentage);
    printf("College id is:%d\n",student.college.college_id);
    printf("College name is:%s\n",student.college.college_name);
    getch();
    return 0;
}

#include<stdio.h>//stucture in structure.c
#include<conio.h>
#include<stdlib.h>
struct student_college_detail{
    int college_id;
    char college_name[50];
};
struct student_detail{
    int id;
    char name[20];
    float percentage;
    struct student_college_detail clg_data;//struct ក្នង   struct
}stu_data;
int main(){
    struct student_detail stu_data={1,"sopeak",90.5,71145,"Royal University of phnom penh"};
    printf("id is:%d\n",stu_data.id);
    printf("Name is:%s\n",stu_data.name);
    printf("Percentage is:%f\n\n",stu_data.percentage);
    getch();
    printf("College id is:%d\n",stu_data.clg_data.college_id);
    printf("College name is:%s\n",stu_data.clg_data.college_name);
    getch();
    return 0;
}

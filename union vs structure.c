#include<stdio.h>//union vs strucyure.c
#include<conio.h>
#include<string.h>
struct Employee{
    int age;
    char name[50];
    float salary;
}empolyee;
union Staff{
    int age;
    char name[50];
    ;float salary;
}staff;
int main(){
    printf("\n\t structure size:%d\n\t union size:%d\n",sizeof(empolyee),sizeof(staff));
    getch();
    return 0;
}

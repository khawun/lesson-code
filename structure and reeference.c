#include<stdio.h>
#include<conio.h>
typedef struct {
    int departmentID;
    char departmentname[16];
}Department;
typedef struct{
    int studentID;
    char studentname[16];
    char sex;
    float height;
    Department*departmentPtr;//member​​​​  ជា    pointer
}Student;
int main(){
    Department department;
    Student student;
    student.departmentPtr=&department;
    printf("Student ID:");
    scanf("%d",&student.studentID);
    fflush(stdin);
    printf("Student name:");
    gets(student.studentname);
    printf("Sex:");
    scanf("%c",&student.sex);
    printf("height:");
    fflush(stdin);
    scanf("%f",&student.height);
    printf("DepartmentID:");
    scanf("%d",&student.departmentPtr->departmentID);
    fflush(stdin);
    printf("Departmentname:");
    gets(student.departmentPtr->departmentname);
    printf("\n");
    printf("\t\t Student ID:%f\n",student.studentID);
    printf("\t\t student name:%s\n",student.studentname);
    printf("\t\t student sex:%c\n",student.sex);
    printf("\t\t student height%2.f\n",student.height);
    printf("\t\t Department ID:%d\n",student.departmentPtr->departmentID);
    printf("\t\t Department Name:%s\n",student.departmentPtr->departmentname);
    getch();
    return 0;
}

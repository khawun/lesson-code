#include<stdio.h>//array of structure2.c
#include<conio.h>
#define p printf
#define s scanf
typedef struct{
    char name[36];
    int age;
    float salary;
}Employee;
int main(){
        Employee employees[10];//បង្កើត  array  of structure ឈ្មោះ​​  employees បម្រុងផ្ទុកបុគ្គលិកចំនួន10នាក់
        int i,count,totalSalary=0;
        p("Enter Number of Employees:");
        s("%d",&count);
        /*loop  ដើម្បើទទួលយកឈ្មោះអាយុនិងប្រាក់ខែដាក់ក្នុង​​​   member  name age salary របស់បុគ្កលិកម្នាក់ៗ*/
    for(i=0;i<count;i++){
        p("Enter Name Age and Salary of Employee\n");
        s("%s%d%f",&employees[i].name,&employees[i].age,&employees[i].salary);
    }
    for(i=0;i<count;i++)
        totalSalary+=employees[i].salary;//បូកប្រាក់ខែបុគ្គលិកម្នាក់ៗសរុបបព្ចាូលគ្នាហើយដាក់ក្នុងអថេរ​​    totaSalary
        p("Average Salary of an Employee is %2.f\n",(float)totalSalary/count);
    getch();
    return 0;
}

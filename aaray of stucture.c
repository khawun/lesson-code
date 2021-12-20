#include<stdio.h>//array of structure.c
#include<conio.h>
#define p printf
#define s scanf
struct employee{
    char name[36];
    int age;
    float salary;
};
int main(){
    struct employee employees[10];//បង្កើត  array  of structure ឈ្មោះ​​  employees បម្រុងផ្ទុកបុគ្គលិកចំនួន10នាក់
        int counter,index,count,totalSalary;
        p("Enter Number of Employees\n");
        s("%d",&count);
        /*loop  ដើម្បើទទួលយកឈ្មោះអាយុនិងប្រាក់ខែដាក់ក្នុង​​​   member  name age salary របស់បុគ្កលិកម្នាក់ៗ*/
    for(counter=0;counter<count;counter++){
        p("Enter Name Age and Salary of Employee\n");
        s("%s%d%f",&employees[counter].name,&employees[counter].age,&employees[counter].salary);
    }
    for(totalSalary=0,index=0;index<count;index++)
        totalSalary+=employees[index].salary;//បូកប្រាក់ខែបុគ្គលិកម្នាក់ៗសរុបបព្ចាូលគ្នាហើយដាក់ក្នុងអថេរ​​    totaSalary
        p("Average Salary of an Employee is %2.f\n",(float)totalSalary/count);
    getch();
    return 0;
}

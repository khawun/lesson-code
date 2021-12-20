#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    int*empid=(int*)calloc(1,sizeof(int));//កាលណាចំនួនមិនកំណត់គេត្រូវប្រើpointerរួមេជាមួយcallocឬ
    char(*empname)[16]=(char*)calloc(16,sizeof(char));
    int*yearBorn=(int*)calloc(1,sizeof(int));
    int n=0;
    do{
        printf("employee%d\n",n+1);
        printf("employeeid:");
        scanf("%d",empid+n);
        fflush(stdin);
        printf("employee name:");
        gets(empname+n);
        printf("\t yearBolrn:");
        scanf("%d",yearBorn+n);
    }
    while(n);
}

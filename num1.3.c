#include<stdio.h>
#include<conio.h>
void addnumbers();//function declaration ឬ​ function prototype=ការបង្កើតអនុគម៏​​ គេហាវថាប៉ារ៉ាម៉ែតឬអាគុយម៉ង់ស្តង់ដា៕
int main(){
    addnumbers();
    return 0;
}
void addnumbers(){//function definition
    int num1=0, num2=0;
    printf("enter number 1:");scanf("%d",&num1);
    printf("enter number 2:");scanf("%d",&num2);
    printf("output: %d\n",num1+num2);
}

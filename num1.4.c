#include<stdio.h>
#include<conio.h>
void addnumbers(int num1,int num2);//function declaration ឬ​ function prototype=ការបង្កើតអនុគម៏​​ គេហាវថាប៉ារ៉ាម៉ែតឬអាគុយម៉ង់ស្តង់ដា៕
int main(){
    int num1=0, num2=0;
    printf("enter number 1:");scanf("%d",&num1);
    printf("enter number 2:");scanf("%d",&num2);
    printf("output: %d\n",num1+num2);
    addnumbers(num1,num2);
    return 0;
}
void addnumbers(int num1,int num2){//function definition
    printf("output :%d\n",num1+num2);
}


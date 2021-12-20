#include<stdio.h>
#include<conio.h>
int addnumbers(int num1,int num2);//function declaration ឬ​ function prototype=ការបង្កើតអនុគម៏​​ គេហាវថាប៉ារ៉ាម៉ែតឬអាគុយម៉ង់ស្តង់ដា៕
int main(){
    int var1,var2;
    printf("enter number 1:");scanf("%d",&var1);
    printf("enter number 2:");scanf("%d",&var2);
    int result =addnumbers(var1,var2);//function call ហាវអនុគមន៏ឪ្យដំំំំំំំំំណើរការ​ ហើយគេហាវវាថាអាគុយម៉ង់(arguments)
    printf("output:%d\n",result);
    getch();
    return 0;
}
int addnumbers(int num1,int num2){//function definition
    int sum;
    sum=num1+num2;
    return sum;}


#include<stdio.h>
#include<conio.h>
int addnumbers();//function declaration ឬ​ function prototype=ការបង្កើតអនុគម៏​​ គេហាវថាប៉ារ៉ាម៉ែតឬអាគុយម៉ង់ស្តង់ដា៕
int main(){
    int sum =addnumbers();//function call ហាវអនុគមន៏ឪ្យដំំំំំំំំំណើរការ​ ហើយគេហាវវាថាអាគុយម៉ង់(arguments)
    printf("output:%d\n",sum);
    getch();
    return 0;
}
int addnumbers(){//function definition
    int num1=0, num2=0;
    printf("enter number 1:");scanf("%d",&num1);
    printf("enter number 2:");scanf("%d",&num2);
    return num1+num2;}


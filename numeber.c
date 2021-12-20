#include<stdio.h>
#include<conio.h>
int addnumbers(int num1,int num2){
    int sum;
    sum=num1+num2;
    return sum;
}
int main(){
    int var1,var2;
    printf("enter number 1:");scanf("%d",&var1);
    printf("enter number 2:");scanf("%d",&var2);
    int result =addnumbers(var1,var2);//function ហាវអនុគមន៏ឪ្យដំំំំំំំំំណើរការ
    printf("output:%d\n",result);
    getch();
    return 0;
}

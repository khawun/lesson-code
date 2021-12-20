#include<stdio.h>
#include<conio.h>
void swap(int a,int b);//function declaration ឬ​ function prototype=ការបង្កើតអនុគម៏​​ គេហាវថាប៉ារ៉ាម៉ែតឬអាគុយម៉ង់ស្តង់ដា៕
int main(){
    int m=22, n=44;
    printf("m=%d and n=%d before swap.\n",m,n);
    swap(m,n);//call by value
    printf("m=%d and n=%d after swap.\n",m,n);
    getch();
    return 0;
}
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("m=%d and n=%d in swap function.\n",a,b);
}



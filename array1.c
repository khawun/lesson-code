#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int nume,i,sum;sum=1;nume=1;int n;
    printf("solve sum=1!+3!+5!+7!+....(2n-1)!\n");//sum=1   +  1*2*3    +   1*2*3*4*5+.....
    printf("\t input  n= ");scanf("%d",&n);
        for(i=2;i<=(n-1)*2;i+=2){
            nume=nume*i*(i+1);
            sum=sum+nume;}
    printf("\n\t output sum=%d",sum);//បើn=1គឺforមិនដំនើរការoutput sum=1
    getch();
    return 0;
}

//arithmetic selection.c
#include<stdio.h>
int main()
{
    int num1=0,num2=0;
    char opt=0;//opt-operator មានន័យថាសញ្ញាប្រមាណវិធី
        printf("\n\t input num1=");scanf("%d",&num1);
        printf("\t input num2=");scanf("%d",&num2);
        fflush(stdin);
        printf("\n\t select an arithmetic operator (+ - * / %%)=");
        scanf("%c",&opt);
    if(opt=='+')
    {
        printf("\t\t %d %c %d=%d\n",num1,opt,num2,num1+num2);
    }
    else if(opt=='-')
    {
        printf("\t\t %d %c %d=%d",num1,opt,num2,num1-num2);
    }
    else if(opt=='*')
    {
        printf("\t\t %d %c %d=%d",num1,opt,num2,num1*num2);
    }
    else if(opt=='/')
    {
        printf("\t\t %d %c %d=%d",num1,opt,num2,num1/num2);
    }
    else if(opt=='%')
    {
        printf("\t\t %d %c %d=%.2f",num1,opt,num2,'num1%num2' float);
    }
    else
    {
        printf("\t\t you made a mistake please enter again");
    return opt;
    }
    return 0;
}

#include<stdio.h>>
#include<conio.h>
int main()
{int num1=0,num2=0;float opt=;
printf("\n\t input num1=");scanf("%d",&num1);
printf("\n\t input num2=");scanf("%d",&num2);
printf("\n\t input opt=");scanf("%c",&opt);
if(!(opt=='+'||opt=='-'||opt=='*'||opt=='/'||opt=='%'))
{
    printf("\t\t arithmetic operator is invalid \n\t press any key exit!\n\t");
    getch();//getch=get a character
    return 0;}
    switch(opt){
    case '+'://''ភាសារ english single quote មួយគូ​​​​​​​​​​ ក្នុងភាសារc សម្គាល់ថាជា​ អក្សរ។
    printf("\t\t %d %c %d=%d\n",num1,opt,num2,num1+num2);
    break;
    case '-':
    printf("\t\t %d %c %d=%d\n",num1,opt,num2,num1+num2);
    break;
    case '*'
    printf("\t\t%d %c %d=%d",num1,opt,num2,num1+num2);
    break;
    case '/'
    printf("\t\t %d %c %d=%.2f",num1,opt,num2,num1/(float)num2);
    break;
    case '%'
    printf("\t\t %d %c %d=%d",num1,opt,opt,num1%num2);
    break;
    default:
return0;
}

#include<stdio.h>
int mai()
{
    int n,i,mul;
    printf("\n\t mul=1*3*5*...(2n-1)\n input n=");
    scanf("%d",&n);
    mul=1;
    for(i=1;i<=(2*n-1);i++)
        mul=mul*(2*i-1);
        printf("\n\t output mul=%d",mul);
    return 0;
}

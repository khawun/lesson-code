#include<stdio.h>
int main()//
{
    int n,i,sum;
    printf("\n\t sum=2+4+6+..2n");
    printf("\n\t input n=");scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
        sum=sum+(2*i);
        printf("\n\t output sum= %d",sum);
    return 0;
}

#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("\n\t sum=1+5+9+....");
    printf("\n\t input n=");scanf("%d",&n);
    sum=0;
    for(i=1;i<=(4*n-3);i+=4)
    sum=sum+i;
    printf("\t output sum=%d",sum);
    return 0;
}

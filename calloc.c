//calloc.c =continous memmory Allocation
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    char*mem_allocation;
    mem_allocation=(char*)calloc(20,sizeof(char));//continous memmory Allocation
    if(mem_allocation==NULL)
        printf("couldn' able to allocate requested memmory\n");
    else
        strcpy(mem_allocation,"Hello world!");
        printf("couldn't able to allocate memmory content:%s\n",mem_allocation);
    free(mem_allocation);
    getch();
    return 0;
}

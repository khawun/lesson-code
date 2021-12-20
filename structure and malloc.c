#include<stdio.h>//stucture and malloc.c
#include<conio.h>
#include<stdlib.h>
struct person{
    int age;
    float weight;
    char name[30];
};
int main(){
struct person*ptr;
int i,num;
printf("Enter number of person:");
scanf("%d",&num);
ptr=(struct person*)malloc(num*sizeof(struct person));
//Above statement allocates the memory for n structures
//with pointer personPtr pointing to base address
for(i=0;i<num;++i){
    printf("Enter name,age and weight of the person respectively:\n");
    scanf("%s%d%f",&(ptr+i)->name,&(ptr+i)->age,&(ptr+i)->weight);
}
for(i=0;i<num;++i)
    printf("%s\t%d\t%0.2f\n",(ptr+i)->name,(ptr+i)->age,(ptr+i)->weight);
getch();
return 0;
}


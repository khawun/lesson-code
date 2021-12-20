#include<stdio.h>//stucture and malloc.c
#include<conio.h>
#include<stdlib.h>
typedef struct{
    int age;
    float weight;
    char name[30];
}Person;
int main(){
Person*ptr=(struct person*)malloc(sizeof(Person));
printf("\t memory sizeof structure person: byes\n",sizeof(Person));
printf("Enter name,age and weight of the person respectively:\n");
scanf("%s%d%f",&ptr->name,&ptr->age,&ptr->weight);
printf("Diplaying information:\n");
printf("%s\t%d\t%0.2f\n",ptr->name,ptr->age,ptr->weight);
getch();
return 0;
}


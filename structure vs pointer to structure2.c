#include<stdio.h>//structure vs pointer to structure2.c
#include<conio.h>
typedef struct{
    int age;
    float weight;
}
person;
int main(){
 person person1,*personPtr=&person1;
printf("Enter Age:");scanf("%d",&person1.age);
printf("weightg:");scanf("%f",&person1.weight);
printf("Displaying:");
printf("%d\n%f\n",person1.age,person1.weight);
return 0;
getch();
}

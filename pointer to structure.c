#include<stdio.h>
#include<conio.h>
typedef struct{
    int age;
    float weight;
}
person;
int main(){
person*personPtr,person1;
personPtr=&person1;
printf("Enter Age:");scanf("%d",&(*personPtr).age);
printf("weightg:");scanf("%f",&(*personPtr).weight);
printf("Displaying:");
printf("%d\n%f\n",(*personPtr).age,(*personPtr).weight);
printf("%d\n%f\n",personPtr->age,personPtr->weight);
return 0;
getch();
}

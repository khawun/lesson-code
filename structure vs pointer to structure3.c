#include<stdio.h>//structure vs pointer to structure2.c
#include<conio.h>
typedef struct{
    /*
        រវាងអថេររចនាសម្ព័ន​​    structure variabal  និងអ្នកចង្អុលទៅអថេររចនាសម្ព័ន​​​      pointure to structure variable
        គួរគប្បីប្រើ​​    អថេររចនាសម្ព័ន    structure   variable
        លើកលែងចាំបាច់​​    ចាំប្រើអ្នកចង្អុលទៅអថេររចនាសម្ព័ន​​    pointure to structure   variable។
    */
    int age;
    float weight;
}
person;
int main(){
 person person1,*personPtr=&person1;
printf("Enter Age:");scanf("%d",&personPtr->age);
printf("weightg:");scanf("%f",&personPtr->weight);
printf("Displaying:");
printf("%d\n%f\n",personPtr->age,personPtr->weight);
return 0;
getch();
}

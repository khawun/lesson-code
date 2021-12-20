#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    int id=0;
    char name[16]="";//empty string ឃ្លាទទេ
    int average=0;
    char letter_grade[3]="";
    float grade_point=0;
    char explanation[12]="";
    printf("_Student 01\n");
    printf("Student ID:");
    scanf("%d",&id);
    fflush(stdin);
    printf("\t Student name:");
    gets(name);
    printf("\t Average Score:");
    scanf("%d",&average);
    if(average>=85&&average<=100){
        strcpy(letter_grade,"A");
        grade_point=4.0;
        strcpy(explanation,"excellence");
    }
    else if(average>=80&&average<=84){
        strcpy(letter_grade,"B");
        grade_point=3.5;
        strcpy(explanation,"very Good");
    }
    //       3    4         13
    printf("   ID    Name             Average  Letter  Grade point  Explanation\n");
    printf("   %-4d  %-15s  %-7d  %-12s  %11.2f  %-11s\n",id,name,average,letter_grade,grade_point,explanation);
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
int main(){ //Student Classification 3.c  មិនកំណត់ចំនួននិស្សិតពេលណាចង់ឈប់ គេត្រូវបញ្ចូលលេខសូន្យឱ្យ Student ID
   int *id = (int *) malloc(sizeof(int));
   char (*name)[16] =(char*) malloc(16*sizeof(char));
   int *average = (int*) malloc(sizeof(int));
   char (*letter_grade)[3] = (char*)malloc( 3 *sizeof(char));
   float *grade_point = (float*) malloc(sizeof(float));
   char (*explanation)[12] =(char*) malloc(12*sizeof(char));
   int n = 0;
   do {
         printf(" - Student %2d \n", n+1);
         printf("\t Student ID (*Student ID is zero the end of input*): ");
         scanf("%d", id+n);  // ចំពោះទូរស័ព្ទសរសេរបែបនេះជំនួស scanf("%d %c", id);
         if (*(id+n)==0)
            break; // បញ្ឈប់ do while
         fflush(stdin); // កុំសរសេរ fflush(stdin); លើទូរសព្ទ។
         printf("\t Student Name: ");
         gets(name+n);
         printf("\t Average Score: ");
         scanf("%d",average+n);
         if (*(average+n)>= 85&&*(average+n)<=100){
            strcpy(letter_grade+n,"A");
            *(grade_point+n) = 4.0;
            strcpy(explanation+n, "Excellence");
         } else if ( *(average+n) >= 80&&*(average+n)<= 84){
            strcpy(letter_grade+n,"B+");
            *(grade_point+n)=3.5;
            strcpy(explanation+n,"Very Good");
         }else if ( *(average+n)>= 75 &&*(average+n)<= 79){
            strcpy(letter_grade+n, "B");
            *(grade_point + n) = 3;
            strcpy(explanation+n, "Good");
         } else if ( *(average+n)>= 70 &&*(average+n)<=74){
            strcpy(letter_grade+n,"C+");
            *(grade_point+n)= 2.5;
            strcpy(explanation+n, "Fairly Good");
         } else if ( *(average+n)>= 65 && *(average+n)<=69){
            strcpy(letter_grade+n,"C");
            *(grade_point+n)=2;
            strcpy(explanation+n,"Fair");
         } else if (*(average+n)>=60&& *(average+n)<=64){
            strcpy(letter_grade+n,"D+");
            *(grade_point+n)=1.5;
            strcpy(explanation+n,"Poor");
         } else if ( *(average+n)>=50&&*(average+n)<=59){
            strcpy(letter_grade+n,"D");
            *(grade_point+n)=1;
            strcpy(explanation+n,"Very Poor");
         } else if ( *(average+ n) < 50){
            strcpy(letter_grade + n, "F");
            *(grade_point + n) = 0;
            strcpy(explanation + n, "Fail");
         }
         id = (int*)realloc(id, sizeof(int)*(++n+1));
         name = (char*)realloc(name, sizeof(char) * (n + 1) * 16);
         average = (int *)realloc(average, sizeof(int) *(n + 1));
         letter_grade = (char *)realloc(letter_grade, sizeof(char) *(n + 1)*3);
         grade_point = (int *)realloc(grade_point, sizeof(int)*(n + 1));
         explanation = (char *)realloc(explanation, sizeof(char)*(n + 1)*12);
   }while( n);
   printf("\n");
   //           3      4                13           7       2          12            2         11           2           11
   printf("   ID    Name             Average  Letter Grade  Grade Point  Explanation\n");
   for( int i = 0; i < n; i++)
         printf("   %-4d  %-15s  %-7d  %-12s  %-11.2f  %-11s \n",
                      *(id+i), name+i,*(average+i),letter_grade+i,*(grade_point+i),explanation+i);
                      free(id);
                      free(name);
                      free(average);
                      free(letter_grade);
                      free(grade_point);
                      free(explanation);
   return 0;
}

#include<stdio.h>
#include<string.h>
#include<conio.h>
//strcat.c
/*strcat.c-string concatenaton
តឃ្លាពីរចូលជាឃ្លារមួយ
char *strcat(char*ឃ្លារថ្មី  ,  const char*ឃ្លារត្រូវដាក់នៅខាងក្រោយ)
*/
int main(){
    char full_name[56]="\0";
    char first_name[36]="\0";
    printf("\n\t last name:");
    gets(full_name);//ទទួលនាមត្រកូលមកផ្ទុកក្នុង  full_name
    printf("\n\t first_name:");
    gets(first_name);//ទទួលនាមខ្លួនមកផ្ទុកក្នុង    first_name
    strcat(full_name," ");//តឃ្លារដោយដាក់ដកឃ្លារនៅក្រោយ  full_name។
    //តឃ្លារដោតដាក់first_nameនៅខាងក្រោយfull_name។
    strcat(full_name,first_name);
    printf("\n\t full_name:%s",full_name);
    getch();
    return 0;
}

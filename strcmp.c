#include<stdio.h>
#include<string.h>
#include<conio.h>
/*strcmp.c-string compare
strcmp(const char*ឃ្លារទីមួយ, const char*ឃ្លារទីពីរ)
វាឪ្យមកវិញនូវតម្ឡៃសូន្យបើឃ្លារទាំងពីរស្មើគ្នា    តែបើឪ្យមកវិញនូវតម្លៃខុសពីរសូន្យគឺមិនស្មើគ្នាទេ។*/
int main(){
    char str1[36]="\0";
    char str2[36]="\0";
    int result=1;
    printf("\n\t str1 string:");
    gets(str1);
    do{
        printf("\n\t 2nd string:");
        gets(str2);
        result=strcmp(str1,str2);
    }
    while(result);
    getch();
    return 0;
}

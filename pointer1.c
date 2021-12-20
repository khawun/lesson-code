/*pointer1.c
កាលណាpionter ផ្ទុកអាស្រ័យនៃអថេរ​   នោះការសរសេរ​*pointer  និង​​​     ការសរសេរ     អថេរ     គឺ     បានផលដូចគ្នា។
*/
#include<stdio.h>
int main(){
    int i=2021;
    printf("location i stored %d",&i);
    int *p=&i;
    printf("current year is %d\n",i);
    *p=*p+1;//*pដូចនិងiគឺ2021
    printf("\t and next year is%d\t%d\n",*p,i);
    printf("\t location memory stored %d\n",p);
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
int main(){
    char*str1="HELLO",*str2="Hello word";
    int i;
    printf("str1 :%s\n",str1);
    printf("str2 :%s\n",str2);
    /*អនុគមន៍​​    strnicmp(ឃ្លាទី១,ឃ្លាទី២,ចំនួនអក្សរ៍)​    យកប៉ុន្មានអក្សរ៍នៃឃ្លាពីរទៅប្រៀបធៀបនិងឃ្លាទីមួយ
    ដោយមិនប្រកាន់អក្សរ៍តូចធំ​​​      និងឪ្យមកវិញនូវលេខសូន្យបើស្មើគ្នា។*/
    i=strnicmp(sret1,str2,5);
    getch();
    return 0;
}

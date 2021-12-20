#include<stdio.h>//string compare.c  ប្រៀបធៀបឃ្លា។
#include<string.h>
#include<conio.h>
int main(){//strcmp(ឃ្លាទី១,ឃ្លាទី២);វាឪ្យតម្លៃ​    សូន្យគឺឃ្លាទាំងពីស្មើគ្នា​      ខុសពីសូន្យគឺឃ្លាទាំងពីខុសគ្នា។
    char str1[30],str2[30];
    printf("1st string: ");
    gets(str1);//gets  ខុសពី​   scanf("%s") ត្រង់gets  អាចទទួលបានច្រើនពាក្យ​​​      ឯscanf បានតែមួយពាក្យ។
    printf("2nd string: ");
    if(strcmp(str1,str2)==0)
        printf("\t %s is equal to %s.\n",str1,str2);
    else if(strcmp(str1,str2)<0)
        printf("\t %s is less than %s.\n",str1,str2);
    else if(strcmp(str1,str2)>0)
        printf("\t %s is greater than %s.\n",str1,str2);
    getch();
    return 0;
    }


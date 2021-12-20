#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
int main(){
    char string[50]="Test string1,Test string2:Test string3";
    char*p;
    printf("String\"%s\"is split into tokens:\n",string);
    //អនុគមន៍​     strtok(ឃ្លា,សញ្ញាសម្គាល់ត្រង់ទីត្រូវកាត់)​​​      កាត់ឃ្លាទាំងពីរចំណែក​​    ត្រង់សញ្ញាសម្គាល់ត្រង់កាត់​​    និងឪ្តអាស័យដ្ធានផ្នែកទីមួយ។
    p=strtok(string,",:");//កាលណាកាត់ត្រង់សញ្ញា  ,ឬ​​  :   កាត់ឃ្លាជាពីរចំណែក​​​   និងឪ្យអាសយដ្ធានចំណែកទីមួយទៅឪ្យ   p​  ។
    while(p!=NULL){
        printf("%s\n",p);
        p=strtok(NULL,",:");//បន្តកាត់ចំណែកនៅសល់​​​     ត្រង់សញ្ញា,  ឬ​​   :   ជាពីរចំណែកនិងឪ្យអាសយដ្ធានផ្នែកទីមួយទៅ   p​​​  ។
    }
    getch();
    return 0;
}

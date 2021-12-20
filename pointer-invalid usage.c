//pointer-invalid usage.c    ការប្រើប្រាស់   pionter  មិនត្រឹមត្រូវ។
#include<stdio.h>
int main(){
    int c='';//​''   សញ្ញាបណ្ដក់មួយគូរមានន័យអក្សរ៍ទទេ។
    int *ch=&c;
           //int *ch;//បង្កើត   pionter   ទទេ​   ដោយសារអត់ទាន់ផ្ទុកអាស័យណាំមួយនៅឡើយ
    printf("enter a character:");
    scanf("%c",&c);
    printf("\t*ch",*ch);
    return 0;
}
//បង្កើតអថេរក៏ដោយ​      pointerក៏ដោយ​​   គួរតែឪ្យតម្លៃដំបូងទៅឪ្យវារ។

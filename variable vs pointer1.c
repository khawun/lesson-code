//variable vs pointer1.c
/*របៀបបង្កើតpointer
ប្រភេទទិន្នន័យ​   *ឈ្មោះ;
ឧ.បង្កើត​pointer ឈ្មោះp សម្រាប់រក្សាទុកអាស្រ័យដែលបានប្រើប្រាស់សម្រាប់រក្សាទុកទិន្នន័យ*/
#include<stdio.h>
int main(){
    int v;//v= variable
    int *p=&v;
    printf("enter an integer:");
    scanf("%d",&v);
    printf("%d is an address which is used to stored %d\n",&v,v);//&vវានិងបោះតម្លៃនៃmemoryទៅឪ្យ%dហើយបង្ហាញលេខនៃmemoryផ្ទុក
    printf("%d is an address whichused to stored %d\n",p,*p);//pវានិងបោះតម្លៃនៃmemoryទៅឪ្យ%dហើយបង្ហាញលេខនៃmemoryផ្ទុក
                                                                //*pបង្ហាញលេខដែលបព្ជាូលពីkybord
    return 0;
}

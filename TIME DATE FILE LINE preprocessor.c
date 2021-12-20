//time date file line constant.c
#include<stdio.h>
#include<conio.h>
void main(){
            printf("current time:%s\n", __TIME__);//បង្ហាញតម្លៃtime  មកលើអេក្រង់
            printf("current date :%s\n", __DATE__);//បង្ហាញតម្លៃdate  មកលើអេក្រង់
            printf("current file :%s\n", __FILE__);//បង្ហាញតម្លៃfile  មកលើអេក្រង់
            printf("current line :%d\n", __LINE__);//បង្ហាញតម្លៃline  មកលើអេក្រង់
            getch();
}

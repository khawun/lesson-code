//time date file line constant.c
#include<stdio.h>
#include<conio.h>
void main()
{           printf("current time:%s\n",_TIME_);//បង្ហាញតម្លៃtime  មកលើអេក្រង់
            printf("current date :%s\n",_DATE_);//បង្ហាញតម្លៃdate  មកលើអេក្រង់
            printf("current file :%s\n",_FILE_);//បង្ហាញតម្លៃfile  មកលើអេក្រង់
            printf("current line :%d\n",_LINE_);//បង្ហាញតម្លៃline  មកលើអេក្រង់
            getch();
}

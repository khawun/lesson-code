#include<stdio.h>//array-table.c
#include<conio.h>
void main()
{
   int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
   for(int i=0;i<3;i++)
   {
       for(int j=0;j<4;j++)
       printf("%2d  ",a[i][j]);//បង្ហាញតម្លៃរបស់    a[i][j]  មកលើអេក្រង់
       printf("\n");
   }
   getch();
}

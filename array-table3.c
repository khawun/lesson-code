#include<stdio.h>//array-table3.c
#include<conio.h>
int main(){
   int t[3][4];
   int r,c;
   printf("enter array 12 elements\n");
   for(r=0;r<3;r++){
       for(c=0;c<4;c++)
          {printf("Enter a value in column %d of row %d:",c+1,r+1);
          scanf("%d",&t[r][c]);
          }
          printf("\n");
       }
       printf("\t column1 column2 column3 column4\n\t");
   for(r=0;r<3;r++){
       for(c=0;c<4;c++)
       printf("%-8d  ",t[r][c]);
       printf("\n\t");
   }
   getch();
   return 0;
}

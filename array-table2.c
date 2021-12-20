#include<stdio.h>//array-table3.c
#include<conio.h>
int main(){
   int t[3][4];
   int r,c;
   printf("enter array 12 elements\n");
   for(r=0;r<3;r++)
       for(c=0;c<4;c++){
          printf("Enter a value:  ");
          scanf("%d",&t[r][c]);//ទទួលតម្លៃពីkeyboard  និងផ្ទុកតម្លៃa[r][c]
          printf("\n");
       }
       printf("you have entered all these values.\n");
   for(r=0;r<3;r++){
       for(c=0;c<4;c++)
       printf("%3d  ",t[r][c]);
       printf("\n");
   }
   getch();
   return 0;
}

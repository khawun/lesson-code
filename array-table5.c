#include<stdio.h>//array-table5.c
#include<conio.h>
#define max 16
int main(){
   int n;
   int a[max][max];
   printf("display pascal triangle shape.\n");
   printf("enter a value (number of row<=15):");
   scanf("%d",&n);
   if(n<=0){printf("invalid value.");
          getch();
          return 0;
          }
   if(n>=15){printf("it is too big to display on screen.");
             getch();
             return 0;
             }
   for(int i=0;i<=n;i++)
       a[i][0]=a[i][i]=1;
   for(int i=2;i<=n;i++)
            for(int j=1;j<i;j++)
                a[i][j]=a[i-1][j-1]+a[i-1][j];
   for(int i=0;i<=n;i++)
   {
               printf("\n");
               for(int j=0;j<=i;j++)
               printf("%d\t",a[i][j]);
   }
   getch();
   return 0;
   }

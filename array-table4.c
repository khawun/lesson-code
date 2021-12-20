#include<stdio.h>//five-person.c
#include<conio.h>
#include<string.h>
int main(){int i;
 int id[5];
 char name[5][16];
 float height[5];
 float weight[5];
  for(i=0;i<2;i++)
           {printf("person %d",i+1);
            printf("\n\t id:");scanf("%d",&id[i]);
            fflush(stdin);
            printf("\n\t name:");gets(name[i]);
            printf("\n\t height:");scanf("%f",&height[i]);
            printf("\n\t weight:");scanf("%f",&weight[i]);
            printf("\n");
            }
printf("\t id \t name \t height \t weight \t bmi \t status\n\t");
for(i=0;i<2;i++){
            float bmi=weight[i]/(height[i]*height[i]);
            char status[12];
if(bmi<18.5)
            strcpy(status, "underweight");
else if(bmi>=18.5&&bmi<24.99)
            strcpy(status,"normal");
else if(bmi>=25&&bmi<29.99)
            strcpy(status,"overweight");
else if(bmi>=30)
            strcpy(status,"obesity");
printf("%-5d %-15s %-6.2f %-5.2f %5.2f %-12s\n",id[i],name[i],height[i],weight[i],bmi,status);
}
  getch();
  return 0;
}

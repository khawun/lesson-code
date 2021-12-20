#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
   char s[36]="\0";
   char(*p)[36]=0;
   printf("String:");
   gets(s);
   p=strdup(s);
   printf("\t Origninal string :%s\t Duplicated string:%s\n",s,p);
   getch();
   return 0;
}

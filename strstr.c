#include<conio.h>
#include<conio.h>
#include<string.h>
/*strstr.c
char*strstr(const char*ឃ្លាដើម,const char*ឃ្លាចង់រក);
រកឃ្លាក្នុងឃ្លារដើម​      ហើឪ្យត្រឡប់មកវិញនូវអាសយដ្ធាននៃឃ្លាដែលបានរកឃើញ
ឬឪ្យមកវិញនូវតម្លៃNULLបើរកមិនឃើញមានឃ្លានោះ។*/
int main(){
    char str1[36]="\0",str2[36]="\0";
    char*s=0;
    printf("\n enter a string1:");
    gets(str1);
    do{
        printf("\t Enter a string2:");
        gets(str2);
        s=strstr(str1,str2);//រកមើលក្នុងstr1ថាមានstr2ដែរឬអត់។
        if(s)//if(s)ដើរកាលណាsខុស
            printf("\t\tfound at the position %d.\n",str2,(s-str1)+1);
        else
            printf("\t\tthrer is no \"%s\".\n",str1,str2);
    }
    while(!s);
    getch();
    return 0;
}

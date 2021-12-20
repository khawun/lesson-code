#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char s[36]="\0",l[36]="\0",u[36]="\0",r[36]="\0";
    printf("String:");
    gets(s);//Sជាឃ្លា​​   Original String
    strcpy(l,s);//ចម្លងឃ្លាs  ដាក់ក្នុងឃ្លាl(l-lower case អក្សរ៍តូច)
    strcpy(u,s);//ចម្លងឃ្លា​  Sដាក់ក្នុងឃ្លា​​   U(u-upper case  អក្សរ៍ធំ)
    strcpy(r,s);//ចម្លងឃ្លា​​   Sដាក់ក្នុងឃ្លារ  R(R-reverse  បព្ជាសឬត្រឡប់)
    //strlwr(l);=ប្លែងជាអក្សរ៍តូចទាំងអស់។     strupr(u);=ប្លែងជាអក្សរ៍ធំទាំងងស់​​     strrev(r);=បព្ជាសឬត្រឡប់ឃ្លា។
    printf("Original case :%s\n Lower case :%s\n Upper case :%s\n Rovese case:%s\n",strlwr(l),strupr(u),strrev(r));
    getch();
    return 0;

}

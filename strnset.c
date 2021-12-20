#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
int main(){
    char str[20]="012345678912345";
    printf("original string:%s\n",str);
    //strnset(ឃ្លា,អក្សរ៍បានបព្ជាក់,
    printf("Trstring after strnset():%s\n",strnset(str,'#',10));
    printf("after string nset:%s\n",str);
    getch();
    return 0;
    }

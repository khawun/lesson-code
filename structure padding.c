#include<stdio.h>//structure padding.c
#include<conio.h>
struct Padding{
    int intMember1;
    int intMember2;
    char charMember3;
    char charMember4;
    float floatMember5;
};
struct Pading{//លុប  d  ចោលមួយ
    int intMember1;
    char charMember2;
    int intMember3;
    char charMember4;
    float floatMember5;
};
int main(){
    int i;
    struct Padding padding={1,2,'A','B',90.5};
    printf("\n size of structure in byte:%d\n",sizeof(padding));
    printf("\n Address of intMember1    =%d",&padding.intMember1);
    printf("\n Address of intMember2    =%d",&padding.intMember2);
    printf("\n Address of charMember3   =%d",&padding.charMember3);
    printf("\n Address of charMember4   =%d",&padding.charMember4);
    printf("\n Address of floatMember5  =%d",&padding.floatMember5);
    printf("\n\n Address of i=%d\n",&i);
    struct Pading pading={3,4,'C','D',96.69};
    printf("\n size of structure in byte:%d\n",sizeof(pading));
    printf("\n Address of intMember1    =%d",&pading.intMember1);
    printf("\n Address of intMember2    =%d",&pading.charMember2);
    printf("\n Address of intMember3    =%d",&pading.intMember3);
    printf("\n Address of charMember4   =%d",&pading.charMember4);
    printf("\n Address of floatMember5  =%d",&pading.floatMember5);
    getch();
    return 0;
}

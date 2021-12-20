#include<stdio.h>
#include<conio.h>
#include<string.h>
union Data{
    int i;
    float f;
    char str[20];
}data;
int main(){
    data.i=10;
    printf("union data variable used to store integer  value: %d\n",data.i);
    data.f=220.5;
    printf("union data variable used to store floating point number value: %f\n",data.f);
    strcpy(data.str,"C programing");
    printf("union data variable used to store string   valu:  %s",data.str);
    printf("\t But it remember only last assigned value\n\%d\n\t%.2f\n\t%s",data.i,data.f,data.str);
    getch();
    return 0;
}

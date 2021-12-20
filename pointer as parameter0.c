//pointer as parameter0.c
#include<stdio.h>
#include<conio.h>
int*max(int*a,int*b){
    if(*a>*b)//បើ*a>*bនោះ
        return a;//ឪ្យតម្លៃរបស់អញ្ញាត្តិ    a
    else
        return b;//ឪ្យតម្លៃរបស់អញ្ញាតិ   b
}
void main(){
    int x=20,y=10;//ការប្រកាសនិងកំណត់តម្លៃឪ្យអញ្ញាតិx=20,y=10
    int*p;
    p=max(&x,&y);
    printf("max=%d\n",*p);
    getch();
    //return 0;
}

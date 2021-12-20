
#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
int main(){
    int x=5,y=7;//ការប្រកាសនិងកំណត់តម្លៃឪ្យអញ្ញាតិx និង​​  y  ជាប្រភេទ   int
    printf("x=%d\ty=%d",x,y);
    //បង្ហាញតម្លៃអញ្ញាតិxនិងyមកលើអេក្រង់
    getch();
    return 0;
}


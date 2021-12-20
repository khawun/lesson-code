#include<stdio.h>
#include<conio.h>
int sum(int a,int b,int c){
    return a+b+c;
}
int main(){
    int i,j;
    for(i=1;i<4;i++){
        int ii=i*2;
        printf("i:%d\t ii:%d\n",i,ii);
    }
    /*printf("i:%d\t ii:%d\n",i,ii);/*||=== Build file: "no target" in "no project" (compiler: unknown) ===|
D:\computer science\c programing\local.c||In function 'main':|
D:\computer science\c programing\local.c|12|error: 'ii' undeclared (first use in this function)|
D:\computer science\c programing\local.c|12|note: each undeclared identifier is reported only once for each function it appears in|
||=== Build failed: 1 error(s), 0 warning(s) (0 minute(s), 0 second(s)) ===|
*/
    return 0;
}

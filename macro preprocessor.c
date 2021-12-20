#include<stdio.h>
#include<conio.h>
//#include<math.h>>
int main(){
    int nume,i,sum;sum=0;nume=1;int n;
    printf("solve sum=2!+4!+6!+++++(2n!)\n");// sum=1*2+1*2*3*4+1*2*3*4*5*6+........
    printf("\t input  n= ");scanf("%d",&n);
        for(i=1;i<n*2;i+=2){//បើn=1នោះ​    1<2ពិត ;        បើn=2 នោះ1<4និង3<4ពិត
            nume=nume*i*(i+1);//(1*2,1*2*3*4,1*2*3*4*5*6
            sum=sum+nume;}//=0+2=2,2+24=26,26+720=746
    printf("\n\t output sum=%d",sum);
    getch();
    return 0;
}

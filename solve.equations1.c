#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int a,b,c,data;float x1,x2;float real,imagenary;
    printf("\t solve formative equation \n\t(ax^2+bx+c=0)\n");
    printf("\t input a\t b\t c\n\t\t");
    scanf("\t %d",&a);scanf("\t %d",&b);scanf("\t %d",&c);
    printf("\t output a=%d\n\t output b=%d\n\t output c=%d",a,b,c);
    data=pow(b,2)-(4*a*c);
    printf("\n\t data= %d",data);
    if(data>0){printf("\n\t *the equation have different roots");
        x1=(-b+sqrt(data))/(2*a);
        x2=(-b-sqrt(data))/(2*a);
        printf("\n\t output x1=%0.f\n\t output x2=%0.f\n",x1,x2);
    }else if(data<0){printf("\n\t *the complex two-root equation");
    real=-b/(2*a);imagenary=sqrt(data)*-1/(2*a);
    printf("\n\t output x1=%f+%fi",real,imagenary);
    printf("\n\t output x2=%f-%fi",real,imagenary);
    }else if(data==0){printf("\n\t *that equation has two roots");
        x1=x2=-b/(2*a);printf("\n\t output x1=x2=%0.f",x1=x2);
    }
    else{printf("\n\t input data wrong");}
    return 0;
}

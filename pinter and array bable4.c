#include<stdio.h>//pointer and tablee4.c
int main(){
    char student_name[3][25]={"un khaw","un kakkda","ch parak"};
    char(*stu_name)[25]=student_name;//បង្កើតpointer ទៅជួរដេកដែលមាន25តួរអក្សរ៍។
    for(int i;i<3;i++){
        for(int j=0;j<3;j++)
            printf("%c",(*stu_name)[j]);
            stu_name++;
            printf("\n");
    }
    return 0;

}

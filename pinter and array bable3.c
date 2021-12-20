#include<stdio.h>//pointer and tablee3.c
/*របៀបសរសេរអាសយដ្ធានជួរដេកនៃរាង
-ទម្រង់ពេញ
​​      :&ឈ្មោះតារាងលេខរៀងជួរដេកគិតពីសូន្យ[0]
-ទម្រង់កាត់
      :ឈ្មោះតារាងលេខរៀងជួរដេកគិតពីសូន្យ]
int main(){

*/
int main(){
    char student_name[50][25];
    char(*stu_name)[25]=student_name;//បង្កើតpointer ទៅជួរដេកដែលមាន25តួរអក្សរ៍។
    for(int i;i<3;i++){
        printf("&student_name[%d][0]:%d student_name[%d]:%d stu_name++:%d\n",i,&student_name[i][0],i,student_name[i],stu_name++);
    }
    return 0;

}

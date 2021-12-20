#include<stdio.h>
#include<conio.h>
#include<string.h>
union Data{
    int i;
    float f;
    char str[20];
}data;
int main(){
    printf("Memory size occupied by data: %d\n",sizeof(data));
    getch();
    return 0;
}
/*union  ជាំប្រភេទទិន្នន័យបង្កើតឡើងដោយអ្នកប្រើប្រាស់​​​      សម្រាប់ផ្ទុកទិន្នន័យចម្រុះ    ក្នុងទីតាំង   memoryតែមួយរួមគ្នា
គឺរបស់​​  member  ដែលធំជាងគេ​​​    ហើយវាអាចចងចាំបានតែតំម្លៃចុងក្រោយដែលផ្ដល់ឪ្យវាតែប៉ិណ្ណោះ។   */

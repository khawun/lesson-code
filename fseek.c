#include<stdio.h>//fgetc.c=File Get character
#include<conio.h>
int main(){
    char str[27];
    FILE*fp=fopen("test.txt","r");
    printf("just open test.txt so now at the position %d\n",ftell(fp));//ftell​​   ប្រាប់ពីទីតាំងបច្ចុប្បន្នក្នុងអែកសារ។
    fgets(str,4,fp);//ទាញយកឃ្លាដែលមាន៣អក្សរពីអែកសារ
    printf("Get 3 characters string frome file so got %s string & now at the position:%d",str,ftell(fp));
    fclose(fp);
    getch();
    return 0;
}

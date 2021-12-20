#include<stdio.h>//fseek1.1.c
#include<conio.h>
int main(){
    char str[27];//ABCDEF.............Z
    FILE*fp=fopen("test.txt","r");
    printf("just open test.txt so now at the position %d\n",ftell(fp));//ftell​​   ប្រាប់ពីទីតាំងបច្ចុប្បន្នក្នុងអែកសារ។
    fgets(str,4,fp);//ទាញយកឃ្លាដែលមាន៣អក្សរពីអែកសារ
    printf("Get 3 characters string frome file so got %s string & now at the position:%d",str,ftell(fp));
    fgets(str,6,fp);
    printf("\t read 5 characters string frome file \n\t so it %s and current position is %d\n",str,ftell(fp));
    fseek(fp,3,SEEK_CUR);//រំកិលទីតាំង៣អក្សរ(seek_curពីទីតាំងបច្ចុប្បន្ន
    printf("jus move 3 characters in test.txt so now at position:%d\n",ftell(fp));
    fgets(str,9,fp);//ទាញយកឃ្លាមាន៨អក្សរពីអែកសារ
    printf("\t Read 8 characters string frome file \n\tso it %s and curren position is %d\n",str,ftell(fp));
    rewind(fp);//ទៅកាន់ទីតាំងផ្ដើមអែកសារ(SEEK_SET)
    printf("Now dat the position:%d\n",ftell(fp));
    fseek(fp,19,SEEK_SET);//SEEK_SET  ពីផ្ដើមអែកសារ
    fgets(str,4,fp);//ទាញយកឃ្លាមាន៣តួអក្សរពីអែកសារ
    printf("\t Read 3 characters string frome file \n\t so it %s and current position is %d",str,ftell(fp));
     fseek(fp,-3,SEEK_END);//រំកិលទីតាំង​៣អក្សរបកក្រោយពីចុងចព្ជាប់អែកសារSEEK_END
    fgets(str,4,fp);//ទាញយកឃ្លាមាន៣តួអក្សរពីអែកសារ
    printf("\t Read 3 characters string frome file \n\t so it %s and current position is %d",str,ftell(fp));
    fclose(fp);
    getch();
    return 0;
}
/*fseek(fp,រំកិលប៉ុន្មានអែកសារ,ផ្ដើមរំកិលពីទីតាំងណា);
ផ្ដើមរំកិលពីទីតាំងណាមាន    ផ្ដើមរំកិល  ពីខាងដើម(SEEK_SET)
________________________________________ពីខាងចុង(SEEk_END)
________________________________________ពីទីតាំងបច្ចុប្បន្ន(SEEK_CUR)
*/

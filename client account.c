#include<stdio.h>//client account.c
#include<conio.h>
struct info{//បង្កើត​​​​​​  struct info ដែកមាន​   member  ជាសមាសធាតុផ្សុំដូចខាងក្រោម
    long int accntNum;//លេខសម្គាល់គណនី
    char name[25];//ឈ្មោះអតិថិជនជាម្ជាស់គណនី
    float balance;//សមតុល្យ
};
int main(){
    struct info client[25],temp;//បង្កើត
    int i,j,min,numClient;
    printf("Welcome fo Client account information services\n\n");
    printf("Enter number of client to be used:");
    scanf("%d",&numClient);
    for(i=0;i<numClient;i++){
        printf("Enter account number:",i+1);scanf("%d",&client[i].accntNum);
        fflush(stdin);
        printf("Enter last name:",i+1);
        gets(client[i].name);
        fflush(stdin);
        printf("Enter balance:",i+1);
        scanf("%f",&client[i].balance);
    }
    for(i=0;i<numClient;i++){
        min=i;
        for(j=i+1;j<numClient;j++){
            if(client[j].accntNum<client[min].accntNum)
                min=j;
        }
        temp=client[i];
        client[i]=client[min];
        client[min]=temp;
    }
    printf("\n ACCOUNT LAST NAME BALANCE");//បង្ហាញគណនីអតិថិជនក្រោយពេលតម្រៀបរួច។
    for(i=0;i<numClient;i++){
        printf("\n%7d%17s%15.2f",client[i].accntNum,client[i].name,client[i].balance);
    }
    printf("\n");
    getch();
    return 0;
}

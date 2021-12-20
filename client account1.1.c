#include<stdio.h>//client account.c
#include<conio.h>
typedef struct{
    long int accntNum;
    char name[25];
    float balance;
}Account;
int main(){
    Account accounts[25],temp;
    int i,j,min,numClient;
    printf("Welcome fo Client account information services\n\n");
    printf("Enter number of client to be used:");
    scanf("%d",&numClient);
    for(i=0;i<numClient;i++){
        printf("Enter account number:",i+1);scanf("%d",&accounts[i].accntNum);
        fflush(stdin);
        printf("Enter last name:",i+1);
        gets(accounts[i].name);
        fflush(stdin);
        printf("Enter balance:",i+1);
        scanf("%f",&accounts[i].balance);
    }
    for(i=0;i<numClient;i++){
        min=i;
        for(j=i+1;j<numClient;j++){
            if(accounts[j].accntNum<accounts[min].accntNum)
                min=j;
        }
        temp=accounts[i];
        accounts[i]=accounts[min];
        accounts[min]=temp;
    }
    printf("\n ACCOUNT LAST NAME BALANCE");//បង្ហាញគណនីអតិថិជនក្រោយពេលតម្រៀបរួច។
    for(i=0;i<numClient;i++){
        printf("\n%7d%17s%15.2f",accounts[i].accntNum,accounts[i].name,accounts[i].balance);
    }
    printf("\n");
    getch();
    return 0;
}

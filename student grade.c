#include<stdio.h>//array-table3.c
#include<conio.h>
#define p printf
#define s scanf
struct Grade{
    char name[10];//នាមខ្លួននិសិត្ស
    int Grade[5];//ពិន្ទុ 5  មិខវិជ្ជា
    int Total;//សរុបពិន្ទុទាំង  5  មុខវិជ្ជា
};
void swap(struct Grade*px,struct Grade*py){//បង្កើតអនុគមន៍សម្រាប់លំដាប់រៀងនៃពត៍មាននៃនិសិត្ស
    struct Grade temp;
    temp=*px;
    *px=*py;
    *py=temp;
}
int main(){
    int i=0,j,k,m,a,b,c,d,count=1;
    struct Grade classX[4];
    while(1){
        p("Enter Name of next student:");
        s("%s",classX[i].name);
        p("Enter 5 Grades of %s :",classX[i].name);
        classX[i].Total=0;
        for(m=0;m<5;m++){
            s("%d",&classX[i].Grade[m]);
            classX[i].Total+=classX[i].Grade[m];
        }
        i++;
        count++;
        if(count>4)break;
    }
    for(j=0;j<count-1;j++){//
        p("\n%-15s",classX[j].name);
        for(k=0;k<5;k++)
        p("%d\t",classX[j].Grade[k]);
        p("%d",classX[j].Total);
    }
    p("\n After sorting the list is as below.\n");
    for(a=0;a<count-1;a++){//loop តម្រៀបពត៍មាននិសិត្ស  តាមលំដាប់ពិន្ទុសរុបពីធមំមកតូចឬលំដាប់ចុះ
        for(b=0;b<count-2;b++)
            if(classX[b].Total<classX[b+1].Total)
                swap(&classX[b],&classX[b+1]);
    }
    for(c=0;c<count-1;c++){//loop ​បង្ហាញឈ្មោះនិសិត្ស​​    ពិន្ទុទាំង  5  ព្រមទាំងពិន្ទុសរុបក្រោយពេលតម្រៀប
        p("\n%-15s",classX[c].name);
            for(d=0;d<count;d++)
                p("%d\t",classX[c].Grade[d]);
                p("%d",classX[c].Total);
    }
    p("\n");
    getch();
    return 0;
}

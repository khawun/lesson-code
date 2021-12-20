#include<stdio.h>//student grade1.1.c
#include<conio.h>
#define p printf
#define s scanf
typedef struct{
    char studentName[10];//នាមខ្លួននិសិត្ស
    int scores[5];
    int Totascores;//សរុបពិន្ទុទាំង5មុខ
}Student;
void swap(Student*student1,Student*student2){//បង្កើតអនុគមន៍សម្រាប់ដូរលំដាប់រៀងនៃពត៍មាននៃនិសិត្ស។
    Student temp;
    temp=*student1;
    *student1=*student2;
    *student2=temp;
}
int main(){
    int i,j;
    Student students[4];//បង្កើតarray of structure Student ឈ្មោះstudent  សម្រាប់ផ្ទុកព័ត៍មាននិសិត្ស៤នាក់។
    //slrscr();clear sceen មិនអាចប្រើក្នុង​code blocks បានទេ។
    for(i=0;i<4;i++){
            p("\t Student %d\n\t Enter Student Name: ",i+1);
            s("%s",students[i].studentName);
            p("Enter %s 5 scores:",students[i].studentName);
            students[i].Totascores=0;
            for(j=0;j<5;j++){
                s("%d",students[i].scores[j]);//ទទួលពិន្ទុ។
                students[i].Totascores+=students[i].scores[j];//បូកសរុបពិន្ទុ
            }
    }
    for(i=0;i<4;i++){
        p("\n%-15s",students[i].studentName);
        for(j=0;j<5;j++)
        p("%d\t",students[i].scores[j]);
        p("%d",students[i].Totascores);
    }
    for(i=0;i<4;i++){//loop តម្រៀបពត៍មាននិសិត្ស  តាមលំដាប់ពិន្ទុសរុបពីធមំមកតូចឬលំដាប់ចុះ
        for(j=0;j<3;j++)
            if(students[i].Totascores<students[j+1].Totascores)
                swap(&students[j],&students[j+1]);
    }
    p("\n\n After sorting the list is as below.\n");
    for(i=0;i<4;i++){//loop ​បង្ហាញឈ្មោះនិសិត្ស​​    ពិន្ទុទាំង  5  ព្រមទាំងពិន្ទុសរុបក្រោយពេលតម្រៀប
        p("\n%-15s",students[i].studentName);
            for(j=0;j<5;j++)
                p("%d\t",students[i].scores);
                p("%d",students[i].Totascores);
    }
    p("\n");
    getch();
    return 0;
}

#include<stdio.h>//array-sort.c
#include<conio.h>
void sorting(int x[],int n)
{int i,j,temp;//ការប្រកាសអញ្ញាត្តិ​​      i,j,tempជាប្រភេទ​    int
  for(i=1;i<=n-1;i++)
    for(j=0;j<=n-i;j++)
        {
            if(x[j]>x[j+1])//បើx[j]>x[j+1]នោះ
            {
                temp=x[j];//ផ្ដល់តម្លៃ    x[j]ទៅឪ្យអញ្ញាត្តិ​     temp
                x[j]=x[j+1];//ផ្ដល់តម្លៃឪ្យ    X[j+1] ទៅឪ្យអញ្ញាត្តិ   X[j]
                x[j+1]=temp;//ផ្ដល់តម្លៃ​​  temp    ទៅឪ្យ  x[j+1]
            }
        }
    for(i=0;i<n;i++){printf("%d \t",x[i]);/*printf("\n");*/}//បង្ហាញតម្លៃរបស់    x[i]មកលើអេក្រង់
}
int main(){
    int a[]={34,10,48,21,8,76,56};
    sorting(a,7);//ការហាវអនុគមន៍​​   sorting()មកប្រើ
    getch();
    return 0;
    }


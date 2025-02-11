#include<stdio.h>
#include<conio.h>
// write a program to print first 10th natural numbers.
void main(){
    // int i=0;
    // for(i=1;i<=10;i++){
    //     printf("%d\n",i);
      
    // }
    // int i =1;
    // while (i<=10)
    // {
    //     printf("%d\n",i);
    //     i++;
    // }
    //   getch();
    // int i =10;
    // while (i>=1)
    // {
    //     printf("%d\n",i);
    //     i--;
    // }
    //   getch();
    
    // int i =1;
    // while (i<=10)
    // {
    //     printf("%d\n",11-i);
    //     i++;
    // }
    //   getch();

    // Q2.write a program to print first n odd natural numbers.
    // int i,N;
    // printf("Enter Number N : ");
    // scanf("%d",&N);
    // for(i=1;i<=2*N;i++){
    //     if(i%2!=0){
    //         printf("%d ",i);
    //     }
    // }
    //    getch();
     int i,N;
    printf("Enter Number N : ");
    scanf("%d",&N);
    for(i=1;i<=N;i++){   
            printf("%d ",2*i-1);    
    }
       getch();
}
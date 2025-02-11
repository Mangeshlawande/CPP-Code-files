#include<stdio.h>
#include<conio.h>

void main (){
    int  a[2][3];
    int i,j,sum=0;
      printf(" Enter the element of Materix is :\n");
    for ( i = 0; i < 2; i++)
    {
       for ( j = 0; j < 3; j++)
       {
        scanf("%d ",&a[i][j]);
       }
    }
    
    printf("The Matrix is \n ");
for ( i = 0; i < 2; i++)
    {
       for ( j = 0; j < 3; j++)
       {
        printf("%d \t", a[i][j]);

        sum = sum + a[i][j];

       }
     printf("\n");
    }
  printf("sum = %d ",sum );

    getch();
}
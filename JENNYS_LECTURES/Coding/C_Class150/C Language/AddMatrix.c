#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

 
 

void main(){
    int a[10][10], b[10][10], c[10][10],row,col;
    printf("Enter the value of 1st Matrix:\n");

    printf("Enter a row :");
    scanf("%d",&row);
    printf("Enter the column :");
    scanf("%d",&col);

    
    for(int i = 0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Enter the value of 2nd Matrix:\n");
    for(int i = 0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    
     printf("The Addition of 1st & 2nd Matrix:\n");
    for(int i = 0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            c[i][j] = a[i][j] + b[i][j] ;
        }
    }
    
     printf("The Addition of 1st & 2nd Matrix:\n");
    for(int i = 0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    
    
    getch();
}
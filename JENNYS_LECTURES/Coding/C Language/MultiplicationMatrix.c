#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

 
 

void main(){
    int a[10][10], b[10][10], c[10][10], k =1;
    printf("Enter the value of 1st Matrix:\n");
    for(int i = 0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Enter the value of 2nd Matrix:\n");
    for(int i = 0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    
    //  printf("The Addition of 1st & 2nd Matrix:\n");
    for(int i = 0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k = 0; k<3; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    
    printf("The Addition of 1st & 2nd Matrix:\n");
    for(int i = 0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    
    
    getch();
}
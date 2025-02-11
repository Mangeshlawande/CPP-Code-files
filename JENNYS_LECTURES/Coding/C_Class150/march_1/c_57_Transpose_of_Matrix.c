/*
program to print transpose of matrix


*/

#include<stdio.h>
#include<conio.h>

void main () {

    int a[2][3] ;
    // int a[2][3] = {1,2,3,4,5,6};
    //To read the matrix 
    printf("Enter the values of Matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]); 
        }     
    }
    printf("The matrix is :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]); 
        }     
        printf("\n");
    }
    // Transpose of matrix 
    printf("\nThe Transpose of matrix is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", a[j][i]);
        }
        printf("\n");   
    }
    
    getch();
}
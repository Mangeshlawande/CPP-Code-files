/*
we need to three MATRICS ,
Program to add 2 matrics of having size [2][3]

*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){
    int a [2][3],b[2][3],c[2][3];
    // int a [2][3]= {1,2,-1,0,5,4},b[2][3]={5,-1,0,10,11,7},c[2][3];
    //to read first matrix
    printf("Enter the value of 1st Matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }   
    }
     printf("\n The First Matrix is:\n ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    // to read second matrix
    printf("Enter the values of second Matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n The second Matrix is:\n ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    // Addition of matrix 
    printf("\nThe Addition Matrix is :\n");
    for (int  i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t",c[i][j] );
        }
        printf("\n"); 
    }
    

}

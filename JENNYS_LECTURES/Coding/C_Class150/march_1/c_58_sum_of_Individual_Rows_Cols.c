/*

program to print sum of individuals rows and columns 

*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
    int a[3][3],i,j,SR,SC;
    // to read the matrix 
    printf("Enter the values of Matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // adding sum of of individual rows and columns
    for (int i = 0; i < 3; i++)
    {
        SR = SC = 0;
        for (int j = 0; j <3; j++)
        {
            SR = SR + a[i][j];
            SC = SC + a[j][i];
        }
        printf("SR = %d", "SC = %d", SR, SC);
    }
    getch();
}
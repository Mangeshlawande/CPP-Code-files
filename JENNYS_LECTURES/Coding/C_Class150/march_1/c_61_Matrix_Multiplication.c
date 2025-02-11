#include <stdio.h>
#include <conio.h>
#define N 50

void main()
{

    int a[N][N], b[N][N], c[N][N],i, j, k, sum, m, n, p, q;
    //
    printf("Enter rows and columns for First Matrix:\n");
    scanf("%d%d", &m, &n);
    printf("Enter First Matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d ", &a[i][j]);
        }
    }
    //
    printf("Enter Rows and Columns for second Matrix:\n");
    scanf("%d%d", &p, &q);
    printf("\nEnter second Matrix:");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nThe first Matrix is:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }

    printf("\nThe second Matrix is:\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d \t", b[i][j]);
        }
        printf("\n");
    }
    if(n!= p)
    {
        printf("The Multiplication of Matrix is not possible !!");
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            for (int  j = 0; j < q; j++)
            {
             sum =0;
             for (int k = 0; k < m; k++)
             {
                sum = sum + a[i][k] * b[k][j];
             }
             c[i][j] = sum;
            }
        }
        printf("The Multiplication of Matrix is : \n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }
    getch();
}
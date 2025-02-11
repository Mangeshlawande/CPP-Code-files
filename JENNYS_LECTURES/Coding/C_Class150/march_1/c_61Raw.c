#include <stdio.h>
#include <conio.h>
#define N 50

void main()
{

    int a[N][N], b[N][N], c[N][N],i, j, k, sum, m, n, p, q;
    //
    printf("Enter Rows and Columns for First Matrix:\n");
    scanf("%d%d", &m, &n);
    printf("\nEnter First Matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    //
    printf("Enter Rows and Columns for second Matrix:\n");
    scanf("%d%d", &p, &q);
    printf("\nEnter second Matrix:\n");
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
             for (int k = 0; k < n; k++)
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
/*
output:
Enter Rows and Columns for First Matrix:
2
3

Enter First Matrix:
1
2
4
3
1
2
Enter Rows and Columns for second Matrix:
3
2

Enter second Matrix:
4
5
2
3
1
6

The first Matrix is:
1       2       4
3       1       2

The second Matrix is:
4       5
2       3
1       6
The Multiplication of Matrix is :
12      35
16      30

*/
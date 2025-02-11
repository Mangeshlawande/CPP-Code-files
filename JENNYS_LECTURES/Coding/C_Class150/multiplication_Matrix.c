#include <stdio.h>
#include <conio.h>
#define N 50

int main()
{
    int i, j, k, sum, m, n, p, q, a[N][N], b[N][N], c[N][N];
    printf(" Enter the row and column for first Matrix:");
    scanf("%d  %d ", &m, &n);
    printf("Enter the first Matrix: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The First Matrix is :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the row and column for second Matrix:\n");
    scanf("%d  %d ", &p, &q);
    printf("Enter the second Matrix: \n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("The second matrix is :\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    if (n != p)
    {
        printf("Sorry the Multiplication cannot be possible !! ");
    }
    else
    {
       
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            { sum = 0;
                for (k = 0; k < m; k++)
                {
                    sum = sum + a[i][k] * b[k][j];
                }
                c[i][j] = sum;
               
            }
        }
         printf("The Multiplication of Two Matrix is :\n");

         for(i=0;i<m;i++){
            for(j=0; j<q;j++){
                 printf("%d\t", c[i][j]);
            }
            printf("\n");
         }
    }

    return 0;
}
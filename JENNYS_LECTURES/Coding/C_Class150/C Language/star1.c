/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j;
    for(i = 1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
           if(j<=6-i)
           {
               printf("*");
           }
           else
           {
               printf(" ");
           }
        }
        printf("\n");
    }

    return 0;
}
// ************************************************************************************************

/*

*/
// #include <stdio.h>

// int main()
// {
//     int i,j;
//     for(i = 1; i<=5; i++)
//     {
//         for(j=1; j<=5; j++)
//         {
//            if(j>=i)
//            {
//                printf("*");
//            }
//            else
//            {
//                printf(" ");
//            }
//         }
//         printf("\n");
//     }

//     return 0;
// }

/*
#include <stdio.h>

int main()
{
    int i,j;
    for(i = 1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
           if(j>=6-i)
           {
               printf("*");
           }
           else
           {
               printf(" ");
           }
        }
        printf("\n");
    }

    return 0;
}

*/


// int main()
// {
//     int i,j;
//     for(i = 1; i<=4; i++)
//     {
//         for(j=1; j<=7; j++)
//         {
//            if(j>=5-i && j<=i+3)
//            {
//                printf("*");
//            }
//            else
//            {
//                printf(" ");
//            }
//         }
//         printf("\n");
//     }

//     return 0;
// }


/*

#include <stdio.h>

int main()
{
    int i,j;
    for(i = 1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            
            printf("%d",j);
            
        //   if(j<=i)
        //   {
        //       printf("%d",j);
        //   }
        //   else
        //   {
        //       printf(" ");
        //   }
        }
        printf("\n");
    }

    return 0;
}
*/
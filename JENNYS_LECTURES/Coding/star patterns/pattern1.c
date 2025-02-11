# include <stdio.h>
#include <conio.h>

    int main() {
    // int i,j;
    printf(" Star pattern\n");
     // for (int i = 0; i <=5; i++)
    // {
    //     for (int j = 0; j <=5; j++)
    //     {
    //         if (j<=i)
    //         {
    //             printf("* ");
    //         }
    //         else{
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");   
    // }

    
    /*
 Star pattern
    *
    * *
    * * *       
    * * * *
    * * * * *
    * * * * * *
*/




    for (int i = 0; i <=5; i++)
    {
        for (int j = 0; j <=5; j++)
        {
            if (j<=i)
            {
                printf("  ");
            }
            else{
                printf(" *");
            }
        }
        printf("\n");   
    }
/*  output:

    Star pattern
   * * * * *
     * * * *
       * * *
         * *
           *
*/

    return 0;
}

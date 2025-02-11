# include <stdio.h>
#include <conio.h>

    int main() {
    int i,j;
    /*
    for (int i = 1; i <=5; i++)
    {
        for (int j = 1; j <=5; j++)
        {
            if(j<= 6-i)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    } */
    /*
    output:

        * * * * * 
        * * * *   
        * * *     
        * *
        *
    */
    
    for (int i = 1; i <=5; i++)
    {
        for (int j = 1; j <=5; j++)
        {
            if(j<= 5-i)
            {
                printf("  ");
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
    /*
    output:

        * 
      * *
    * * *
  * * * *
* * * * *

    */
    
    return 0;
}
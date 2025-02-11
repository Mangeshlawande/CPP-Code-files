/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<math.h>
#include<stdlib.h>


int main()
{ 
          
    while(1)
    {
         int p;
       printf("\nPress 1, to continue ");
       printf("\nPress 0, to Exit !! \n");
    
       scanf("%d", &p);
       if(p==1)
     {
            int x, reversed =0, rem=0,temp;
        printf("\nEnter a number:\n");
        scanf("%d",&x);
        temp = x;
        while(temp!=0){
            rem = temp%10;
            reversed= reversed*10 + rem  ;
            temp = temp/10;
        }
        printf("reversed Number is %d", reversed);
      }
      else
   {
       exit(0);
   }
    }
   
    return 0;
}
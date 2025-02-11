#include<stdio.h>
#include<conio.h>
// 45 _c
void main(){
    int i=1,j=3;
    // do
    // {
    //     do
    //     {
    //        printf("%d ",j);
    //        j--;

    //     } while (j>0);
        
    //     i++;
    //     printf("%d ",i);
    // } while (i<4);

      do
    {
        do
        {
           printf("%d ",j--);
          

        } while (j>0);
        
        printf("%d ",i++);
    } while (i<4);
    
    printf(" Exit the loop!!");
    getch();

}
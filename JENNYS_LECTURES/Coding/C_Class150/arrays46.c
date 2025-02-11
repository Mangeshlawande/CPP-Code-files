#include<stdio.h>
#include<conio.h>

    void main () {
     int a[3+2],i;
     printf(" Enter the array Elements :\n"); 
     for ( i=0; i<5; i++)
     {
          scanf("%d\n",&a[i]);
     }
     
     for (i=0;i<5;i++)
     {
          printf("The array of element of index %d is  %d\n",i,a[i]); 
     }
     // getch();
        printf(" \nThe Reverse of array : \n\n");
      for (i=4;i>=0;i--)
     {
          printf("The array of element of index %d is  %d\n",i,a[i]); 
     }
     getch();

// return 0;
}
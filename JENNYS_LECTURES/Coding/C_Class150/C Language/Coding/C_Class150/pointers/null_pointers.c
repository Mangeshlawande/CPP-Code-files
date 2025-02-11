#include<stdio.h>
#include<stdlib.h>

// NULL Pointers > does not refers to any valid address,
// it is used in error handling in c.
// 

     int main () {
        int a = 4;
     int *ptr = 0;// better to use Null rather than 0;
     int *ptr1 = 0;
    //  ptr = (int*) malloc (5 * sizeof(int));
     if (ptr == ptr1){
        printf("This is Null pointer!!");
     }
     else{
     printf(" %d\n ", *ptr); 

     }
    //  printf(" %d\n ", *ptr1); 
return 0;
}
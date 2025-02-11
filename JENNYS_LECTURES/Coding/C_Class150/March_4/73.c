// how you can assign value of pointer to another pointer 

# include <stdio.h>
#include <conio.h>

    int main() {
    int a = 10, b = 11;
    int * q , *p ;
    p = &a ;
    q = &b;
    printf(" a = %d and b = %d \n", *p ,*q);

    *q = *p;
    printf(" a = %d and b = %d \n", *p ,*q);
  
  

    return 0;
}
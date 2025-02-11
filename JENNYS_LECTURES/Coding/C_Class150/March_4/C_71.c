// pointers in c
/*
int * p
THE POINTER  p is containing address of variable whose datatype is int ;
  * means this would be a pointer type of variable ;
  p is having some space in memory
  * is dereference(indirection ) operator;

>> uninitialized pointer is very risky to use ;

*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 10;
    float b = 9.11;
    char c = 'U';
    // datatype * pointer_name ;
    // declaration
    int *p; //   p is containing address of variable whose datatype is int ;
            // initialization  of pointer

    p = &a; // p points to a ;

    printf(" address of a is : %d \n", &a);
    printf("The value stored in pointer variable p is : %d \n", p);
    printf(" the value at *p is : %d \n", *p);
    *p = 12;
    printf(" the after updating value at *p is : %d \n", *p);
    printf(" the value of a is : %d \n", a);

    return 0;
}
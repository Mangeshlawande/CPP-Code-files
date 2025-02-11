/*
 &(address of) and * (indirection) operator ;
reference operator (&)
 deference (*) is used to fetch value at *p 
  p = &a ,&b ; precedence of assignment operator is higher than comma ooperator; &a return
  p = (&a ,&b); // &b is return 
*/
# include <stdio.h>
#include <conio.h>

    int main() {
     // size of pointer is depends on machine to machine ;
     int a = 21 , L =92;
     int *p , *q ;
     p = &a;
     q = &L;
     int c = *q;
     
     printf("The value of a is : %d\n", (a));
     printf("The address of *p is : %d\n", &(*p));
     printf("The value at address *p is : %d\n", (*p));// value at  address  
     printf("The address of p is : %x\n", &(p));
     printf("The value at p is : %d\n", (p));
     printf("The address of a is : %x\n", (&a));// print address in hexadecimal form %x
     printf("c = %d ", c);

    return 0;
}
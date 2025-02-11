# include <stdio.h>
#include <conio.h>

    int main() {
    int a[] = {1,3,4,5,6,7,8,9,10,38,46};
    int * p  ;
    p = a ;//valid, a contain base address of array
    // a is constant pointer of the array , we cannot move this a;
    // p = p + 1;// post increment function ();
    printf(" value at p : %d \n", *(p++));// it return value then increment it ;

    printf(" value at p : %d \n", *++p);
    printf(" value at p : %d   \n", *p++);

    printf(" value at p : %d   \n",*++p);
    // ++p : pre increment , associativity is right to left ;
    
    /*
    
    */
    return 0;
}
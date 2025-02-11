//  pointer arithematic (subtraction)

#include <stdio.h>
#include <conio.h>
/*
  > we can subtract two pointer variable 
  > we can subtract integer to a pointer variable 
  
*/
    int main() {
    int a[] = {1,3, 4,2,5},d, b[] = {1,34,6,4,7};

    int * p = &a[0];
    int * q = &a[4];

    // p-q and q-p is possible 
    // p+q if both are pointer variable then not possible 
    //  p - 2 is possible ,the result will give in form of pointer 
    //  p + 2 is possible ,the result will give in form of pointer , you will move forward two element;

    d =q - p ;

    q =  q - 2;
    printf(" difference between two pointer variable q-p : %d \n", d);// 
    int  i=0;
    while (i< 5)
    {
        printf("%d ",a[i]);
        i++;
    }
    printf(" \nvalue is = : %d \n", *q);  // 

    d = p - q ;

    printf("difference between two pointer variable  p-q : %d \n", d); // 
    return 0;
}

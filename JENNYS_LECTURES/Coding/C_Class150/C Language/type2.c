#include<stdio.h>
#include<math.h>

     int main () {
    int a = 8; 
    int b = 2 ;
    int z = a*b;

    printf("The value of a+b is\n %d\n",a+b);
    printf("The value of a-b is\n %d\n",a-b);
    printf("The value of a*b is\n %d\n",a*b);
    printf("The value of a/b is\n %d\n",a/b);
    printf("The value of z is %d \n",z );
    printf("5 When divided by 2 leaves remainder of %d \n ", 5%2);
    printf("-5 When divided by -2 leaves remainder of %d \n ", -5%-2);
    printf("-5 When divided by 2 leaves remainder of %d \n ", -5%2);
    printf("5 When divided by -2 leaves remainder of %d \n ", 5%-2);
// no operaror is assume to be present like 4.5, (4)(5)!= 20.... will not return 20 .
// there is on operator to be perform exponentiation in C 
printf(" The value of 4^2 is %d  \n", 4^2); //^=>> bitwise XOR operator 
printf (" The value of 4^2 is %f \n",pow(4,2));
//  int and float =>float
// float and float => float 
// int and int => int 
printf("The value of 3.0 /9 is %f \n ",3.0/9);



return 0;
}
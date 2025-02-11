#include<stdio.h> 
     int main () {
     int x = 4 ;
     int y = 2;
     printf(" The value of (3*x) - (8*y) is %d \n ", 3*x - 8*y);
     printf(" The value of (3*x - 8*y) is %d \n ", 3*(x - 8*y));
     printf(" The value of  8*y / 3*x is %d \n ",  8*y/ 3*x);
//8*2 =16 , 3*4 =12
// follow left to right associativity

return 0;
}
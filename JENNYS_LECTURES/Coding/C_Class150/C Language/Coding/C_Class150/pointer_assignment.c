#include<stdio.h>
#include<conio.h>
//pointers in c 

     int main () {
    int a= 10, b = 5;
    int *p, *q ;
    p =&a;
    q = &b;
// *q = *p;
//  q = p; 
     printf("a= %d %d %d ",a, *p, *q); 
return 0;
}
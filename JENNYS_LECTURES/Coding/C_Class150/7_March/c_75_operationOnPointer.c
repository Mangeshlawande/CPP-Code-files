#include<stdio.h>
#include<conio.h>
/*

if q is a pointer we cant add integer value in that pointer 
it can add pointer address to next pointer value which is going to add like , q= 2000,q = q + 2 * 4 ; q = 2008;

*/
void main() {
    int a = 40;
    int *p = &a;
    int*q = &a;
    printf(" address of a = %x %x\n ", p , q);

    getch();
}
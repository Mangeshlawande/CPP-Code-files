#include<stdio.h>
#include<conio.h>
#include<string.h>

void main() {
 int y = 76;
 int z  = 92;
 int *p = &y;
 int * * t = &p;
 printf("The pointer to the variable *p is :%d , and pointer to pointer  **t is :%d\n", *p,**t );
 printf("The value at p is :%d , and value at t is :%d\n", p,t );
 printf("The value at p is :%d , and value at t is :%d\n", &p,*t );
 printf("The value at p is :%d , and value at t is :%d\n", *(&p),*(&t));

    getch();

}
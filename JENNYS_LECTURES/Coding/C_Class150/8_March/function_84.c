#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
/*
function in c
1. 

*/

void sum( ) {
     int a, b, sum = 0;
     printf("Enter the two numbers :");
     scanf("%d %d", &a , &b);
     sum = a + b;
     printf("The sum is : %d", sum);

};
void main () {
     sum();
    getch();
}
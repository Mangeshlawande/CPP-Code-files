#include<stdio.h>
#include<conio.h>
#include<stdlib.h>



void main(){
    int x, p,i,s =1;
    printf("Enter a Coefficient :");
    scanf("%d", &x);
        printf("Enter Power of number :");
    scanf("%d", &p);
    for(i = 1; i<=p; i++){
    s = s*2;
    }
    printf("Result is :%d", s);
    
    getch();
}
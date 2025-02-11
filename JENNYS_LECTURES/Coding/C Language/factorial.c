#include<stdio.h>
#include<conio.h>
// #include<stdlib.h>

void main(){
    int i,n,b=1;
    int c;

    printf("Enter a Number :");
    scanf("%d",&n);
    
    for(i= 1; i<=n; i++){
        b = b*i;
    }
    printf("The factorial of a number is %d", b);
    getch();
}
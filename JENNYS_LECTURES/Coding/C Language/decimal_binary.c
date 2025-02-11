#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

  int decimal(int n)
 {
    if(n>0){
        decimal(n/2);   
    }
    
   printf("%d",n%2);
 
 }
 

void main(){
    int x, binary;
    printf("Enter a number :");
    scanf("%d", &x);
    
    decimal(x);

    getch();
}
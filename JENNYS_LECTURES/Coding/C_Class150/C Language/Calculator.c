#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

 void Add(){
    int x, y, z;
    printf("\nEnter first number:");
    scanf("%d", &x);
    printf("\nEnter Second number :");
    scanf("%d", &y);
     z = x + y;
     printf("The Addition is %d", z);
}

void Sub()
{
    int x, y, z;
    printf("\nEnter first number:");
    scanf("%d", &x);
    printf("\nEnter Second number :");
    scanf("%d", &y);
     z = x - y;
     printf("The Subtraction is %d", z);
}

void Mult()
{
    int x, y, z;
    printf("\nEnter first number:");
    scanf("%d", &x);
    printf("\nEnter Second number :");
    scanf("%d", &y);
     z = x * y;
     printf("The Multiplication is %d", z);
}

void Div()
{
float x, y;
float z;
    printf("\nEnter first number:");
    scanf("%f", &x);
    printf("\nEnter Second number :");
    scanf("%f", &y);
     z = x / y;
     printf("The Division is %f", z);
}

void main(){
    while(1)
    {
        int ch;
    printf("\n\n Enter 1 for Addition :");
    printf("\n Enter 2 for Subtraction :");
    printf("\n Enter 3 for Multiplication :");
    printf("\n Enter 4 for division :");
    printf("\n Enter 5  for Exit !! :");
    printf("\n\nPlease Enter Your Choice :");
    scanf("%d", &ch);

    switch(ch){
        case 1:
        {
            Add();
            break;
        }
        case 2:
        {
            Sub();
            break;
        }
        case 3:
        {
            Mult();
            break;
        }
        case 4:
        {
            Div();
            break;
        }
        case 5:
        {
            exit(0);
        }
        default :
        {
            printf("Wrong Input !!");
        }
    }
    }



    getch();
}
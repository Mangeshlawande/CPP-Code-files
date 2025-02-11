#include <stdio.h>
// #include<conio.h>
/*  APPLICATION's
1. program we use to write switch case statement , same program yoou can write with function pointer
will have to write less code
2. add (), sub(), mul(), div(),etc in calculator ;
2.1. switch case statement
2.2
rather than taking 4 function pointer we can take array of function pointer


*/

void sum(int a, int b) { printf("Addition = %d\n", a + b); };
void sub(int a, int b) { printf("Substraction = %d\n", a - b); };
void mult(int a, int b) { printf("Multiplication = %d\n", a * b); };
void div(int a, int b) { printf("division = %d\n", a / b); };

void main()
{
   int a, b, ch;
   void (*fptr[10])(int, int) = {sum, sub, mult, div};
   printf("0 for addition , 1 for sub , 2 for Multiplication , 3 for division \n");
   printf("Enter choice: ");
   scanf("%d", &ch);
   printf("Enter a, b :");
   scanf("%d %d ", &a, &b);
   // how we are going to call
   //    (*fptr[ch])(a,b);

   switch (ch)
   {
   case 0:
      sum(a, b);
      break;
   case 1:
      sub(a, b);
      break;
   case 2:
      mult(a, b);
      break;
   case 3:
      div(a, b);
      break;
   default:
      printf("Enter valid choice !!");
      break;
   }
}
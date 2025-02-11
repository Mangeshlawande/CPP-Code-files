#include<stdio.h>
#include<conio.h>
// Write a program to check whehter the number is positive or non positive.

//      int main () {
//      int a;
//      printf("Enter a number :\n");
//      scanf("%d",&a);
//      if(a<=0){
//         printf("The number is Non-positive");
//      } 
//      else{
//         printf("The Number is positive!!");
//      }
// return 0;
// }
// Q2. error occured
  int main () {
    //  int a;
    // if(5>4){
    //     printf("Hello world !!");
    //     printf("welcome to coding!!");
    // }
    // else{
    //     printf("Bye");
    //     getch();
    // }
    //  int a;
   // if(3!=4);{// Empty block;
    // if(3!=4){
    //     printf("Hello world !!");
    //     printf("welcome to coding!!");
    // }
    // else{
    //     printf("Bye");
    //     getch();
    // }

    //write a program to check whether a given number is even or odd ;
    //   int a ;
    //   printf("Enter the number: ");
    //   scanf("%d",&a);
    //   if (a%2==0){
    //     printf("The given Number is Even!!");
    //   }
    //   else{
    //     printf("The Given Number is Odd!!");
    //   } 
    //     getch();
    // int a ;
    //   printf("Enter the number: ");
    //   scanf("%d",&a);
    //   if (a%2){// Every non-zero number is true.hence the condition becomes 5%2 =1 which is true and it goes to if statement  
    //   // Otherwise it goes to else statement because if condition becomes 0 is false , it goes to else part.

    //     printf("The given Number is  Odd!!");
    //   }
    //   else{
    //     printf("The Given Number is Even!!");
    //   } 
    //     getch();

    // without using  %(modulus operator),write a program.
    //  int a ;
    //   printf("Enter the number: ");
    //   scanf("%d",&a);
    //   if (a/2*2==a){
    //     printf("The given Number is  even!!");
    //   }
    //   else{
    //     printf("The Given Number is odd!!");
    //   } 
    //     getch();
//  change logic (bitwise operator):even no last bit is 0, In odd last significant bit is 1.

     int a ;
      printf("Enter the number: ");
      scanf("%d",&a);
      if (a&1){//  Even xxxxxxx0  Odd xxxxxxx1
               //       00000100   &   00000101= Odd 
        printf("The given Number is  odd!!");
      }
      else{
        printf("The Given Number is even!!");
      } 
// a-(-b) = a+b => add two num without using + operator;

    
return 0;
}
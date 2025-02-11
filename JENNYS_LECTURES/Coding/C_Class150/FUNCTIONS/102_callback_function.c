// Callback function Using FunctionPointer in C
# include<conio.h>
#include<stdio.h>

//function Pointer contain address of the code and Normal function contain address of the data/value 
// they are used to callback a function.
/*
We can pass address of another function to a function that is call back function.
from one function we can call all function one by one by passing the address of the function at runtime only  .


*/
void sum(int a ,int b){
    printf(" Addition = %d\n", a+b);

}
void sub(int a , int b){
    printf(" Substraction = %d\n", a-b);

}
// pass address of function 
// Must have pointer to accept that address
// have to declare a function pointer
void display( void (*fptr)(int , int )){
    (*fptr)(5,1);
    //(fptr)(5,1)
}

int main () {
    // passing address of fun  or 
    //simply pass the (base address)name of the function 
     display(&sum);// callback function 
     display(sub);
return 0;
}
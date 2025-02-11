#include<stdio.h>
 
char fun();// function declaration 

void main (){
    char ch;
    ch=fun();// function calling 
    printf("ch = %c", ch);

}

char fun()// function definition
{
    char c;
    printf("Enter a character :");
    scanf("%c", &c);
    return c;
}


// void sum();//  function  declaration 

//      void main () {
//      sum(); //function calling 
//      printf("Addition"); 
// }

// void sum() // function definitin 
// {
// int a, b, sum =0;
// printf("Enter Two numbers :");
// scanf("%d%d",&a,&b);
// sum = a+b;
// printf("sum=%d\n", sum);
// }
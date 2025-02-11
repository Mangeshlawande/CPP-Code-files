#include<stdio.h>
// Classification of function 

//1. No argument without return type 
//2. No argument with return type 
//3. With argument no return type 
//4.With argument with return type 
//   1.

//    void sum(void);

//      void main () {
//      sum();
//      printf("calling fun inside main function"); 
// }
// void sum(){
//     int a=5,b=7,sum=0;
//     sum = a+b;
//     printf("sum=%d\n",sum);

// }

//2. No argument with return type 
int sum (void);

void main(){
  int s;
  s = sum();
  printf("sum = %d\n",s);
}

int sum(){
    int a=5,b=6,sum=0;
    sum = a+b;
    return sum,a;
    printf("hello");
}
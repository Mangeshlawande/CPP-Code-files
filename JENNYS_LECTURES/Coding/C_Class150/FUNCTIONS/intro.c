#include<stdio.h>
//84
   //we using this code again and again without writing the code repeatedly.
//    easy to debugging
//better memory utilization


void sub(){// definition
    int a , b, sub=0;
    printf("Enter two numbers:");
    scanf("%d%d ",&a ,&b);
    sub = a - b;
    printf("sub=%d\n",sub);
}
void sum(){// definition
    int a , b, sum=0;
    printf("Enter two numbers:");
    scanf("%d%d ",&a ,&b);
    sum = a + b;
    printf("sum=%d\n",sum);
    sub();
}

     void main () {
     sum();//calling function 
     printf("End of Program!! "); 
     sum();

}
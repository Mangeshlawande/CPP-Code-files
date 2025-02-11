#include<stdio.h>
//Write a program to calculate area of circle.
// dry run the code


//      int main () {
//      float PI= 3.14;
//      int r;
//      printf("Enter the radius of circle: \n");
//      scanf("%d",&r); 
//      printf("The area of circle is:\n%lf",PI*r*r);
//      getch();
// return 0;
// }

// Write a program to calculate average of 3 numbers;
//      int main () {
//     int a,b,c;
//     float Avg;
//     printf("Enter three numbers:\n");
//     scanf("%d %d %d",&a,&b,&c);
//     Avg = (a+b+c)/3.0;
//     printf("The average of a,b,c is %f:\n",Avg);
// // int/int = int
// // int/ float = float
// return 0;
// }
// 

int main (){
    int x;
    printf("Enter a number:\n");
    scanf("%d",&x);
    printf(" The given number of last digit is:\n %d",x%10);
    return 0;
    getch();
    
}
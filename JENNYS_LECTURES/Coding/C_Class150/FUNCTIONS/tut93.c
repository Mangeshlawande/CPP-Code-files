// #include<stdio.h>
// // Q1. what is the value of j after the execution of program 

//      int incr(int i)
//      {
//         static int count = 0;
//         count = count + i;
//         return (count);
//      };

// int main () {
//      int i,j;
//      for(i=0; i<=4; i++){
//         j = incr(i);
//      printf("The value of j is %d\n", j);
//      }
// return 0;
// }

// Q2. What is the output of the program 
// #include<stdio.h>

// int r(){
//     static int  num =7;
//     return num--;
// };
// int main () {
//      for ( r(); r(); r()){
//         printf("%d\n", r());

//      }
// return 0;
// }

// Q3. Passing array as an argument
#include<stdio.h>
int avg(int [], int);//Declaration part 

int main () {
    float average;
     int marks [5] = { 49,38, 46,36,48};
     average = avg(marks, 5);// calling function 
     printf("The average is :%f", average );


return 0;
}

int avg(int marks[], int a){
    int sum =0 ;
    float average=0;
    for (int i = 0; i < a; i++)
    {
        sum =sum + marks[i];
    }
    average= sum /a;
    

}
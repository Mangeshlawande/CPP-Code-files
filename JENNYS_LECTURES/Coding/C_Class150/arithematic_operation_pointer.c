#include<stdio.h>
#include<conio.h>

int main(){
int a[5]={1, -9, 4, 0, 3}; 
int *p = &a[0];
// int *q = &a;
// you cannot perform addition on two pointer variable in c, it is invalid 
// p + 1 , p + 2, it is valid 
// p = p + 3;// it points to next location because int take  bytes, it is only useful when we deal with array.
//p  + 1 = 1000 + 1 * size of int(4); ==> 1004

 p=p+1;// points to next location 
 *p = 2;// update the value of this locaion
 
printf("%d %d %d",*p ,a[0],a[1]);

    getch();
}
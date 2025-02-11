#include<stdio.h>
#include<conio.h>
// double pointer concepts or pointer to pointer  concepts.
void main(){
int a = 10, b = 6;
int *p = &a ;
int **q = &p;
int ***r = &q;
*p = 12;
**q = 17;
***r = 25;
printf(" *p = %d, **q = %d and a = %d\n",*p, **q,a);
printf(" a = %d\n",*p);
printf(" a = %d\n",*(*q));
printf(" a = %d\n",*(*(*r)));
printf(" address of q is= %x %x\n",r,&q);
printf("address of p = %x , q=%x\n",&p,q);


    getch();
}
#include<stdio.h>
#include<conio.h>
void main() {
    int a = 10;
    int *p = &a;
    int* *q =&p;
    int * * * r = &q;
    printf("a = %d\n",a);
    *p = 53;
    printf("a = %d\n",*p);
    ***r= 56;
    printf("a = %d\n",*(*q));
    **q = 91;
    printf("a = %d\n",*(*(*r)));
    printf("address of q = %x , %x\n",r, &q);
    printf("address of p = %x, %x\n",&p , q);
    getch();
}
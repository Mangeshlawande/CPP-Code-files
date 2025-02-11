#include<stdio.h>
#include<stdlib.h>

void main (){

    int a[2][3] = {{1,2,3},
                     {4,5,6}
                     };

int * p , *q;
 p = & a[0][0];
 q= a[0];

printf("value at p is %p\n",p);
printf("value at q is %p\n",q);
printf("value at a is %p\n",a);
printf("value at &a[0][0] is %p\n",&a[0][0]);
printf(" value at &a is %p\n",&a);
printf("value at *a is %p\n",*a);
printf("value at a[0] is %p\n\n",a[0]);
printf("value at a +1 is %p\n",a +1);
printf("value at &a[1] is%p\n",&a[1]);
printf("value at *(a+1) is %p\n",*(a+1));
printf(" value at a[1] is %p\n",a[1]);
printf("value at &a[1][0] is %p\n",&a[1][0]);
printf(" value at *(a+1)+2 is %p\n",*(a+1) + 2);
printf("value at *(*(a+1)+2) is %d\n",*(*(a+1)+2));
printf("value at a[1][2] is %d\n",a[1][2]);




}
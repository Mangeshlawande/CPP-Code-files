#include<stdio.h>
// void pointers ==> not having any associate datatypes
// you cannot dereference a void pointer it will give an error. you have to typecast it, 
     int main () {
    //   int *ip; 
    //   float *fp;
    //   char *cp;  // you can access all three   pointer with the help of void pointer.
      void *vp;
      float b = 5.3;
      char c = 'E';
      int a = 5;
      vp = &a;
     printf("%d \n",*(int*)vp); 
    vp = &c;
    printf("%c \n",*(char*)vp);
    vp = &b; 
    printf("%f \n",*(float*)vp);

    // malloc and calloc  function, they are built in function for dynamic memory allocation,
    //  they return void pointer.

return 0;
}
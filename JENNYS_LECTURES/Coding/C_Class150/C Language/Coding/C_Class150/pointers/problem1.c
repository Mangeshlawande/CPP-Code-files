#include<stdio.h>


     int main () {
     char str[] = "Welcome to jenny's lectures";
     char *ptr; 
    ptr = str;
     printf("%c \n", *ptr); 
     printf("%c \n", *(ptr++ +1)); 
     printf("%c \n", *((ptr-- +5)-1)+3); 
     printf("%c \n", *((++ptr +10)-32)); 
     printf("%c %c %c \n", *ptr, *++ptr, *--ptr ); 
    const int a = -11;
    const int * ptr1 = &a;
    // *ptr = 12;
    printf("a = %d",a); 


return 0;
}
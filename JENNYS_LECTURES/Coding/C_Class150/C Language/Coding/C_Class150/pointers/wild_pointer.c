#include<stdio.h>
#include <stdlib.h>
//83 in c --> wild pointer in c  which is uninitialised pointer or it is pointing to any random memory location 
//

     int main () {
     int *ptr = NULL;
     *ptr =10;
     int *ptr = (int*)malloc (sizeof(int));
    
     printf("%d\n", *ptr); 
return 0;
}
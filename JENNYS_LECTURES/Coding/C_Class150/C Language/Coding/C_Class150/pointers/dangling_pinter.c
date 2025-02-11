#include<stdio.h>
#include<stdlib.h>



     int main () {
    int *ptr = NULL;
    {
        int a = 5;
        ptr = &a;
        printf("a=%d\n", *ptr); 

    }

    //   int*ptr = (int*) malloc(sizeof(int));
    //    *ptr = 10;
    //  printf("  %d\n", *ptr); 
    //  free(ptr);// dangling pointer
    //  ptr = NULL;
    //  if(ptr==NULL){
    //     printf("pointer is Null!!");
    //  }
    //  else{
    //  printf("%d\n", *ptr); 
    //  }

    //  printf("%d\n", *ptr); 
return 0;
}
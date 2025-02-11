

#include <stdio.h>
#include <stdlib.h>


int main()
{
    //  malloc ()
    // int * a;
    // a = (int*) malloc(sizeof(int));
    // *a = 45;
    // printf("%d",*a);
    
    // calloc() --> To Store the array which is dynamic in nature 
    int *g;
    g = (int*) calloc(6, sizeof(int));// take 2 arguments
    *g = 43;
    *(g+1)= 11;
    *(g+3) = 22;
    *(g+4) = 33;
    *(g+5) = 44;
    
    printf("%d %d %d %d ",*g,*(g+1), *(g+2),*(g+3));
    // realloc()
    
    g = (int *) realloc(g,9);
    *(g+7) = 23;
    printf(" %d %d %d ",*(g+4),*(g+5),*(g+7));

    return 0;
}
# include <stdio.h>
#include <conio.h>
// c_80

// void pointer have no assiciated datatypes
/*
you can typecast in any other datatypes 
It is a generic pointer ;
you cannot deference a void pointer , 1 st you have to typecast it;



*/
    int main() {
    int a =  5;
    float b;
    char c = 'l';
    int * ip = &a;
    float * fp = &b;
    char * cp = &c;
    void * vp = &a;
    printf("%d \n", *(int *)vp);
    vp = &c;
    printf("%s\n", *(char *)vp);


    return 0;
}
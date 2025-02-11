// A program to find length of the string ?
#include<stdio.h>
#include<conio.h>
#include<string.h>
/*
strlen Function 
the prototype of the function strlen(char*str).. datatype is unsigned int 
*/


int main(){
    char name[30] ;
    // char name[30] ={'m','a','n','g','e','s','h','\0'};
    int count=0, i=0;
    printf("Enter the Name:\n");

    scanf("%s", &name);
    printf(" My name is %s", name);
    // gets(name);
    //  count = strlen(name);
    //  printf("\nThe string length is %d", count);

    while (name[i]!='\0')
    {
        count++;
        i++;
    }
    printf("\nThe string length is %d", count);

    getch();
}
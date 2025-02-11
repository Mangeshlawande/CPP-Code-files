#include<stdio.h>
#include<conio.h>
//  printf() and puts() function in c (formatted output function )
/*

> scanf("%s", name);--> take name from user , it pointing first character of the string(formatted input function)

> printf("%s ",name); --> 
> printf("%0.5s ",name); --> print 1st 5 character of the name;
> printf("%10.5s ",name); --> print 1st 5 character of the name from right and 10 is string width;
> puts(name) --> Meaning is inclded in the stdio.h header file
> puts automatically add new line operator at end of the string 
> printf("%s", &name[2]); start from 2 index 

*/

void main () {
    char name[20] = "Mangesh";
    printf("%10.5s \n", name);
    puts(name);
    puts(name);
    printf("%s", &name[2]);
    // printf("%s", name[2]); //not work


    getch();
}
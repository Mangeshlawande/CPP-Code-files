// program to convert upper case to lowercase letter
/*

*/
#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    /*
        char s1[20];
        printf("Enter the string : ");
        gets(s1);
        printf("The string is :\n");
        */

    // Converting the string lowercase if Yes

    char s1[50];
    printf("Enter the string : \n");

    // scanf("%s", s1);
    gets(s1);
    printf("The string is : %s\n", s1);
    for (int i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] >=65 && s1[i] <= 90)
        {
            s1[i] = s1[i] + 32;
        }
    }
    printf("Converting the string to lowercase is : %s \n", s1);


    //  for upper case  letter

    for (int i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i]>= 'a' && s1[i] <= 'z')
        {
            s1[i] = s1[i] - 32;
        }
    }
    printf("Converting the string to Uppercase is : %s\n", s1);

    getch();
}